// // program to experiment of parameterize constructor copy.. jutfews4ygvbyu9

#include <iostream>
using namespace std;

class A
{
    public:
    string name;
    int age;
        A()
        {
            cout<<"enter name "<<endl;
            cin>>name;
            cout<<"enter age"<<endl;
            cin>>age;
        }
};

class B
{
    public:
    string name;
    int age;
    B(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
};

int main()
{
    A obj;
    B obj2("deyan",19);

    obj(obj2); 
    
    return 0;
}
