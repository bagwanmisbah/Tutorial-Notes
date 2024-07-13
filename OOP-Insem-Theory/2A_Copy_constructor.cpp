#include <iostream>
#include <string.h>
using namespace std;
class code
{
    int id;
    public:
    code() //default constructor
    {
    }
    code(int a)//parameterised constructor
    {
        id=a;
    }
    code(code &x)//copy constructor 
    {
        id=x.id;
    }
    void display()
    {
        cout<<id<<endl;
    }
};
int main() 
{
    code A(100);
    code B(30);
    code C=A;
    A.display();
    B.display();
    return 0;
}

