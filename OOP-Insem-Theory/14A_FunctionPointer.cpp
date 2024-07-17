//Author :  Misbah Bagwan 21487
//WAP TO DEMONSTRATE FUNCTION POINTER
#include <iostream>
using namespace std;

int add(int a,int b)
{
     return a+b;
}
float get(float f)
{
    return f;
}
float area(float r)
{
    const float pi=3.14;
    return pi*r*r;
}
int main()
{
    int(*ptr)(int a,int b);//declaration
    ptr=&add;//initialization 
    cout<<ptr(3,4)<<endl;
    
    float (*fptr)(float)=&get;
    cout<<fptr(89.107)<<endl;
    
    float (*circle)(float)=&area;
    cout<<circle(5);
    
    return 0;
}
