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
      