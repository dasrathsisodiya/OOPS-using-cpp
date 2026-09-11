#include <iostream>
using namespace std;


class LIST
{
public:
    
    virtual void store(int value) = 0;
    virtual void retrieve() = 0;
};


class stack : public LIST
{
private:
    int arr[100];
    int top;

public:
    stack()
    {
        top = -1;
    }

    
    void store(int value) override
    {
        if (top == 99)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++top] = value;
    }

    
    void retrieve() override
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << "Stack element retrieved: " << arr[top--] << endl;
    }
};


class queue : public LIST
{
private:
    int arr[100];
    int front;
    int rear;

public:
    queue()
    {
        front = 0;
        rear = -1;
    }

    void store(int value) override
    {
        if (rear == 99)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        arr[++rear] = value;
    }

    void retrieve() override
    {
        if (front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Queue element retrieved: " << arr[front++] << endl;
    }
};

int main()
{
    
    stack s;

    s.store(10);
    s.store(20);
    s.store(30);

    cout << "Stack:" << endl;
    s.retrieve();
    s.retrieve();
    s.retrieve();

    cout << endl;

    
    queue q;

    q.store(10);
    q.store(20);
    q.store(30);

    cout << "Queue:" << endl;
    q.retrieve();
    q.retrieve();
    q.retrieve();

    return 0;
}
