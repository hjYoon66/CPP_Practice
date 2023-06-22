//문제 10. 간단한 그래픽 편집기를 콘솔 바탕으로 만들어보자. 그래픽 편집기의 기능은 "삽입","삭제","모두보기","종료"의 4가지이고, 실행과정은 다음과 같다.
//삽입되는 도형의 사이즈는 1~10의 랜덤 값이 들어감
#include <iostream>
#include <cstdlib> // rand() 함수를 사용하기 위해 추가
using namespace std;

//-------------   Shape, Triangel, Rect, Line 클래스  -----------------

class Shape {
protected:
    int size;
    Shape* next;
    virtual void draw() = 0;   // 순수 가상함수 --> Shape은 추상클래스가 됨
public:
    Shape(int s = 1) { size = s; next = NULL; }
    virtual ~Shape() { }
    void paint() { draw(); }
    Shape* add(Shape* p);
    Shape* getNext() { return next; }
};

Shape* Shape::add(Shape* p) {
    this->next = p;
    return p;
}


class Triangle : public Shape {
protected:
    virtual void draw() { cout << "Triangle" << "(size " << size << ") " << endl; }
public:
    Triangle(int s = rand() % 10 + 1) : Shape(s) {}
};

class Rect : public Shape {
protected:
    virtual void draw() { cout << "Rectagle" << "(size " << size << ") " << endl; }
public:
    Rect(int s = rand() % 10 + 1) : Shape(s) {}
};

class Line : public Shape {
protected:
    virtual void draw() { cout << "Line" << "(size " << size << ") " << endl; }
public:
    Line(int s = rand() % 10 + 1) : Shape(s) {}
};



//-------------   UI 클래스 (사용자 입력 처리를 위한 static 함수들로만 구성) -----------------
//
class UI {
public:
    static void Introduce() { cout << endl << "그래픽에디터입니다." << endl << endl; }
    static int GetMenuInput();
    static int GetAddInput();
    static int GetDeleteInput();	//  <도전 기능에 해당> 
};

// 위의 UI 클래스의 구현부 작성 
int UI::GetMenuInput() {
    int input;
    cout << "삽입:1,  삭제:2,  모두 보기:3,  종료:4  >>  ";
    cin >> input;
    return input;
}

int UI::GetAddInput() {
    int input;
    cin >> input;
    return input;
}

int UI::GetDeleteInput() {
    int input;
    cout << "삭제하고자 하는 도형의 인덱스  >>";
    cin >> input;
    return input;
}



//-------------  GraphicEditor 클래스 (도형 리스트 관리하며 run() 함수로 편집기 실행)  ------------------
//
class GraphicEditor
{
    Shape* pStart, * pLast;
public:
    GraphicEditor();		// 빈 도형 리스트로 초기화 (pStart = pLast = NULL;)
    ~GraphicEditor();		// 모든 도형 삭제

    void ShowAll();			// 도형 리스트 보이기
    void Add(Shape* sp);	// 맨 뒤에 도형 sp 추가
    void Delete(int n);		// <도전 기능> n 번째 도형 삭제 

    void Run();				// 도형 편집기 실행하는 함수(UI의 static 함수들 사용)
};

// 위의 GraphicEditor 클래스 구현부 작성
// ......
//
//
//
// Run() 멤버함수는 아래의  힌트 참고
GraphicEditor::GraphicEditor() { pStart = pLast = NULL; }

GraphicEditor::~GraphicEditor() {
    // 모든 도형 삭제
    Shape* current = pStart;
    while (current != NULL) {
        Shape* next = current->getNext();
        delete current;
        current = next;
    }
}

void GraphicEditor::ShowAll() {
    // 도형 리스트 보이기
    if (pStart == NULL) {
        cout << "도형이 없습니다." << endl;
        return;
    }

    Shape* current = pStart;
    int count = 0;
    while (current != NULL) {
        cout << count << ":";
        current->paint();
        current = current->getNext();
        count++;
    }
}

void GraphicEditor::Add(Shape* sp) {
    // 맨 뒤에 도형 sp 추가
    if (pStart == NULL) {
        pStart = sp;
        pLast = sp;
    }
    else {
        pLast->add(sp);
        pLast = sp;
    }
}

void GraphicEditor::Delete(int n) {
    // n 번째 도형 삭제
    if (pStart == NULL) {
        cout << "삭제하고자 하는 도형의 인덱스  >>" << endl;
        return;
    }

    if (n < 0) {
        cout << "유효하지 않은 인덱스입니다." << endl;
        return;
    }

    if (n == 0) {
        Shape* toDelete = pStart;
        pStart = pStart->getNext();
        delete toDelete;
        cout << "도형이 삭제되었습니다." << std::endl;
        return;
    }

    Shape* current = pStart;
    Shape* previous = NULL;
    int count = 0;

    while (current != NULL && count < n) {
        previous = current;
        current = current->getNext();
        count++;
    }

    if (current == NULL) {
        std::cout << "유효하지 않은 인덱스입니다." << std::endl;
        return;
    }

    previous->add(current->getNext());

    if (current == pLast) {
        pLast = previous;
    }

    delete current;
    std::cout << "도형이 삭제되었습니다." << std::endl;
}

void GraphicEditor::Run() {
    UI::Introduce();

    while (true) {
        int menu = UI::GetMenuInput();

        switch (menu) {
        case 1: {
            // 삽입 옵션을 선택한 경우
            cout << "선 : 1,   삼각형 : 2,   사각형 : 3   >>  ";
            int addInput = UI::GetAddInput();
            Shape* shape = NULL;

            switch (addInput) {
            case 1:
                shape = new Line();
                break;
            case 2:
                shape = new Triangle();
                break;
            case 3:
                shape = new Rect();
                break;
            default:
                cout << "유효하지 않은 입력입니다." << endl;
                break;
            }

            if (shape != NULL) {
                Add(shape);
            }
            break;
        }
        case 2: {
            // 삭제 옵션을 선택한 경우
            int deleteInput = UI::GetDeleteInput();
            Delete(deleteInput);
            break;
        }
        case 3: {
            // 모두 보기 옵션을 선택한 경우
            ShowAll();
            break;
        }
        case 4:
            // 종료 옵션을 선택한 경우
            cout << "프로그램을 종료합니다." << endl;
            return;
        default:
            cout << "유효하지 않은 입력입니다." << endl;
            break;
        }
    }
}




//=================  main() 함수 : GraphicEditor 객체 생성해 편집기 실행 =================

int main()
{
    GraphicEditor ge;

    ge.Run();

    return 0;
}