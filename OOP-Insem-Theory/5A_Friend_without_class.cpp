//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate Friend Without Class 😮
#include<iostream>
using namespace std;
class sample
{
    int a;
    int b;
    public:
    void setvalue()
    {
        a=25;
        b=40;
    }
    friend int mean(sample s)
    {
        return (s.a+s.b)/2;
    }
};
int main()
{
    sample x;
    x.setvalue();
    cout<<mean(x)<<endl;
return 0;
}
