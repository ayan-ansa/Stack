#include <iostream>
using namespace std;
#define MAX 5
int stack[MAX], top = -1, element;
void push()
{
    if (top == MAX - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "Enter the element";
        cin>>element;
        top++;
        stack[top] = element;
        cout << "Element inserted" << endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        top--;
        cout << "Deleted element is " << stack[top] << endl;
    }
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << "\t";
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout << "1.Push" << endl
             << "2.Pop" << endl
             << "3.Display" << endl
             << "4.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Wrong input";
            break;
        }
    }
    return 0;
}