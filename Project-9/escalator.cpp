//  escalator 
#include <iostream>
using namespace std;


class StackBase{
public:
    virtual void push(int value) = 0;   
    virtual void pop() = 0;
    virtual void top() = 0;
    virtual bool empty() = 0;
    virtual bool full() = 0;
};
class Stack : public StackBase{
private:
    int *arr;     
    int capacity; 
    int topIndex; 

public:
    
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }

    // Push 
    void push(int value) override {
        if (full()) {
            cout << "Stack is full. Cannot push " << value << endl;
        } else {
            arr[++topIndex] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    // pop 
    void pop() override {
        if (empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            cout << arr[topIndex--] << " popped from stack." << endl;
        }
    }

    //  top
    void top() override {
        if (empty()) {
            cout << "Stack is empty. No top element." << endl;
        } else {
            cout << "Top element is: " << arr[topIndex] << endl;
        }
    }

    // function for check empty
    bool empty() override {
        return (topIndex == -1);
    }

    // function for check full
    bool full() override {
        return (topIndex == capacity - 1);
    }

    
    ~Stack() {
        delete[] arr;
    }
};
int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    Stack s(size);

    int choice, value;
    do {
        cout << "******* Stack Menu *******"<<endl;
        cout << "1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display Top"<<endl;
        cout<<"4. Check if Empty"<<endl;
        cout<<"5. Check if Full"<<endl;
        cout<<"6.Exit: 0 "<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.top();
            break;
        case 4:
            cout << (s.empty() ? "Stack is empty." : "Stack is not empty.") << endl;
            break;
        case 5:
            cout << (s.full() ? "Stack is full." : "Stack is not full.") << endl;
            break;
        case 0:
            cout << "You choose -Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
