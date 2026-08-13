#include <iostream>
using namespace std;

//1. inisialisasi class node
class Node {
public:
    //2. inisialisasi variabel data dan Node next sebagai member class
    Node
    int data;
    Node* next;

    Node() {
        //3. pemberian value next sebagai NULL
        next = NULL;
    }
};

//4. inisialisasi class Stack
class Stack {

private:
    //5. inisialisasi Node top sebagai private untuk mengecek ujung dari
    //   Stack
    Node* top;

public:
    Stack() {
        //6. inisialisasi nilai awal top sebagai NULL
        top = NULL;
    }

    //7. pembuatan method push
    int push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value: " << value << endl;
        return value;
    }

    //8. pembuatan prosedur pop
    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
        }

        cout << "Popped Value: " << top->data << endl;
        top = top->next;
    }
