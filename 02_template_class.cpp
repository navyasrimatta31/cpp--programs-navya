// Class template: generic Stack
#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[50];
    int top;
public:
    Stack() { top = -1; }
    void push(T x) {
        if (top == 49) { cout << "Stack overflow" << endl; return; }
        arr[++top] = x;
    }
    T pop() {
        if (top == -1) { cout << "Stack underflow" << endl; return T(); }
        return arr[top--];
    }
    bool isEmpty() { return top == -1; }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout << "Int stack popping: ";
    while (!s1.isEmpty())
        cout << s1.pop() << " ";
    cout << endl;

    Stack<string> s2;
    s2.push("one");
    s2.push("two");
    s2.push("three");
    cout << "String stack popping: ";
    while (!s2.isEmpty())
        cout << s2.pop() << " ";
    cout << endl;
    return 0;
}
