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

    //9. pembuatan prosedur peek
    void peek() {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node* current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    //10. pembuatan method isEmpty untuk mengecek kosong tidaknya stack
    bool isEmpty() {
        return top == NULL;
    }

};

int main()
{
    //11. inisialisasi object stack
    Stack stack;

    //12. inisialisasi variabel choice dan value untuk menangkap input
    //    pengguna
    int choice = 0;
    int value;

    //13. perulangan selama nilai choice tidak sama dengan 5
    while (choice != 5)
    {
       