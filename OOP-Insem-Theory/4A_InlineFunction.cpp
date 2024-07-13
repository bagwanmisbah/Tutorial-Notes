//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate Inline Function
#include<iostream>
using namespace std;
class number
{
    public:
    inline double mult(double a,double b)
    {
        return a*b;
    }
    inline int cube(int a)
    {
        return a*a*a;
    }
};
int main()
{
    number n;
    cout<<n.mult(12,12)<<endl;
    cout<<n.cube(2)<<endl;
return 0;
}
