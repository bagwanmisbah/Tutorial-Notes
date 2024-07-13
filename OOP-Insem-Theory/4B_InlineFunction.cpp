//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate INLINE FUNCTION
#include<iostream>
using namespace std;
class tri
{
    public:
    inline float area(float base,float height)
    {
        return (0.5)*base*height;
    }
};
int main()
{
    tri t;
    cout<<t.area(3,4)<<endl;
return 0;
}
