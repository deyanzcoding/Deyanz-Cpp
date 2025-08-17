// program to demonstrate friend class

#include <iostream>
using namespace std;

class B;
class A
{
private:
    int x;

    void getX()
    {
        cout << "Enter value for x : ";
        cin >> x;
    }

    friend class B;
};

class B
{
private:
    int y;

public:
    void getY()
    {
        cout << "Enter value for y : ";
        cin >> y;
    }

    int sum()
    {
        A aa;
        aa.getX();
        getY();
        int res = aa.x + y;

        cout << "Addition of two numbers = ";
        return res;
    }
};

int main()
{
    B bb;
    cout << bb.sum();

    return 0;
}

/*Here we use Friend class so let explain : 
    -> declare the class which we want to make friend (means that we can share private of class A)
    -> Now define the class which have maybe data-members & member function in either private or protected
    -> At last of this class we declare again that function with 'friend' keywork like    ==> friend class A
    -> Now we are ready to make the class which is friend of class A[base]
    -> In this class we well access all the data of class A[base].

    NOTE :- "When we use class A data in friend class[B], so we should use object of class A."
    */