#include <iostream>
#include <vector>

using namespace std;

#define MAX_SIZE 5

// A class-based implementation of a Stack data structure.
// This encapsulates the data and operations, which is better than using global variables.
class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    // Constructor to initialize the stack.
    Stack() {
        top = -1; // -1 indicates that the stack is empty.
    }

    // Checks if the stack is full.
    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    // Checks if the stack is empty.
    bool isEmpty() {
        return top == -1;
    }

    // Pushes an element onto the top of the stack.
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        top++;
        arr[top] = value;
        cout << "Pushed " << value << " onto the stack." << endl;
    }

    // Pops an element from the top of the stack and returns it.
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return -1; // Return a sentinel value for error
        }
        int value = arr[top];
        top--;
        cout << "Popped " << value << " from the stack." << endl;
        return value;
    }

    // Returns the top element of the stack without removing it.
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; // Return a sentinel value for error
        }
        return arr[top];
    }

    // Prints all the elements currently in the stack.
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cout << "Creating a stack of size " << MAX_SIZE << endl;
    Stack myStack;

    myStack.push(10);
    myStack.push(15);
    myStack.push(20);
    myStack.printStack();

    myStack.pop();
    myStack.printStack();

    myStack.push(7);
    myStack.push(8);
    myStack.push(9); // This will cause a Stack Overflow

    cout << "\nThe top element is: " << myStack.peek() << endl;

    myStack.printStack();

    return 0;
}