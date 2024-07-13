//COMPLEX NUMBER :OBJECTS AS ARGUMENTS 
//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate passing of objects as argument 

#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;
    static int count;
    public:
    void get(int r, int i)
    {
        real=r;
        img=i;
        count++;
    }
    void put()
    {
        cout<<count<<" Complex number is : "<<real<<" + "<<img<<"i"<<endl;
    }
    void add(complex a,complex b)
    {
        real=a.real+b.real;
        img=a.img+b.img;
        count++;
    }
};
int complex::count;
int main()
{
    complex c1,c2,c3;
    c1.get(4,5);
    c1.put();
    c2.get(2,3);
    c2.put();
    c3.add(c1,c2);
    c3.put();
    return 0;
}
// 1 Complex number is : 4 + 5i
// 2 Complex number is : 2 + 3i
// 3 Complex number is : 6 + 8i
