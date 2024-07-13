//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate friend func w class

//FRIEND FUNCTION (class )
#include<iostream>
using namespace std;
class test
{
    private:
    int a;
    public:
    test()
    {
        a=15;
    }
    friend void display(test t);
};
void display(test t)
{
    cout<<"private variable a: "<<t.a;
}
int main()
{
    test t;
    display(t);
}
