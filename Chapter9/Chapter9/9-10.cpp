//���� 10. ������ �׷��� �����⸦ �ܼ� �������� ������. �׷��� �������� ����� "����","����","��κ���","����"�� 4�����̰�, ��������� ������ ����.
//���ԵǴ� ������ ������� 1~10�� ���� ���� ��
#include <iostream>
#include <cstdlib> // rand() �Լ��� ����ϱ� ���� �߰�
using namespace std;

//-------------   Shape, Triangel, Rect, Line Ŭ����  -----------------

class Shape {
protected:
    int size;
    Shape* next;
    virtual void draw() = 0;   // ���� �����Լ� --> Shape�� �߻�Ŭ������ ��
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



//-------------   UI Ŭ���� (����� �Է� ó���� ���� static �Լ���θ� ����) -----------------
//
class UI {
public:
    static void Introduce() { cout << endl << "�׷��ȿ������Դϴ�." << endl << endl; }
    static int GetMenuInput();
    static int GetAddInput();
    static int GetDeleteInput();	//  <���� ��ɿ� �ش�> 
};

// ���� UI Ŭ������ ������ �ۼ� 
int UI::GetMenuInput() {
    int input;
    cout << "����:1,  ����:2,  ��� ����:3,  ����:4  >>  ";
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
    cout << "�����ϰ��� �ϴ� ������ �ε���  >>";
    cin >> input;
    return input;
}



//-------------  GraphicEditor Ŭ���� (���� ����Ʈ �����ϸ� run() �Լ��� ������ ����)  ------------------
//
class GraphicEditor
{
    Shape* pStart, * pLast;
public:
    GraphicEditor();		// �� ���� ����Ʈ�� �ʱ�ȭ (pStart = pLast = NULL;)
    ~GraphicEditor();		// ��� ���� ����

    void ShowAll();			// ���� ����Ʈ ���̱�
    void Add(Shape* sp);	// �� �ڿ� ���� sp �߰�
    void Delete(int n);		// <���� ���> n ��° ���� ���� 

    void Run();				// ���� ������ �����ϴ� �Լ�(UI�� static �Լ��� ���)
};

// ���� GraphicEditor Ŭ���� ������ �ۼ�
// ......
//
//
//
// Run() ����Լ��� �Ʒ���  ��Ʈ ����
GraphicEditor::GraphicEditor() { pStart = pLast = NULL; }

GraphicEditor::~GraphicEditor() {
    // ��� ���� ����
    Shape* current = pStart;
    while (current != NULL) {
        Shape* next = current->getNext();
        delete current;
        current = next;
    }
}

void GraphicEditor::ShowAll() {
    // ���� ����Ʈ ���̱�
    if (pStart == NULL) {
        cout << "������ �����ϴ�." << endl;
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
    // �� �ڿ� ���� sp �߰�
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
    // n ��° ���� ����
    if (pStart == NULL) {
        cout << "�����ϰ��� �ϴ� ������ �ε���  >>" << endl;
        return;
    }

    if (n < 0) {
        cout << "��ȿ���� ���� �ε����Դϴ�." << endl;
        return;
    }

    if (n == 0) {
        Shape* toDelete = pStart;
        pStart = pStart->getNext();
        delete toDelete;
        cout << "������ �����Ǿ����ϴ�." << std::endl;
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
        std::cout << "��ȿ���� ���� �ε����Դϴ�." << std::endl;
        return;
    }

    previous->add(current->getNext());

    if (current == pLast) {
        pLast = previous;
    }

    delete current;
    std::cout << "������ �����Ǿ����ϴ�." << std::endl;
}

void GraphicEditor::Run() {
    UI::Introduce();

    while (true) {
        int menu = UI::GetMenuInput();

        switch (menu) {
        case 1: {
            // ���� �ɼ��� ������ ���
            cout << "�� : 1,   �ﰢ�� : 2,   �簢�� : 3   >>  ";
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
                cout << "��ȿ���� ���� �Է��Դϴ�." << endl;
                break;
            }

            if (shape != NULL) {
                Add(shape);
            }
            break;
        }
        case 2: {
            // ���� �ɼ��� ������ ���
            int deleteInput = UI::GetDeleteInput();
            Delete(deleteInput);
            break;
        }
        case 3: {
            // ��� ���� �ɼ��� ������ ���
            ShowAll();
            break;
        }
        case 4:
            // ���� �ɼ��� ������ ���
            cout << "���α׷��� �����մϴ�." << endl;
            return;
        default:
            cout << "��ȿ���� ���� �Է��Դϴ�." << endl;
            break;
        }
    }
}




//=================  main() �Լ� : GraphicEditor ��ü ������ ������ ���� =================

int main()
{
    GraphicEditor ge;

    ge.Run();

    return 0;
}