
#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element)
{
    // basecase
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverseStack(s);
    
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
}