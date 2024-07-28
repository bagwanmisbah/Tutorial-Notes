//METHOD OVERRIDING
#include <iostream>
using namespace std;
class A
{
    public:
    int a=100,b=5;
    void put()
    {
        cout<<"From base class : "<<a*b<<endl;
    }
};
class B:public A
{
    public:
    void put()
    {
        cout<<"From derived class : "<<a/b<<endl;
    }
};
int main()
{
    A a;
    B b;
    a.put();
    b.put();
    return 0;
}
// From base class : 500
// From derived class : 20
