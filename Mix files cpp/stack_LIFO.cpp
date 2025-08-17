// all about stack(LIFO) ->last in first out 

#include <iostream>
#include <stack>
using namespace std;
    
int main() {
    stack<int> s;
    stack<int> s1;

    s.push(1);
    s.push(2);
    s.push(3);

    s.top();    //printing top element of stack
    s.pop();    //delete last element of stack

    cout << "\nsize of stack : " << s.size();
    cout << "\nsize of stack1 : " << s1.size();
    s.swap(s1);
    cout << "\nsize of stack : " << s.size();
    cout << "\nsize of stack1 : " << s1.size();

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }    

return 0;
}