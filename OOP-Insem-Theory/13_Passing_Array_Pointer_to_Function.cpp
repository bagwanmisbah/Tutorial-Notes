//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate 

//PASSING ARRAY POINTER TO A FUNCTION
// Write a program to find the sum of an array Arr by passing an array to a
// function using pointer.
#include <iostream>
using namespace std;
int add(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+*(a+i);
    }
    return sum;
}
int main()
{
    int a[]={1,2,3,4,5};
    int res=add(a,5);
    cout<<"sum : "<<res<<endl;
    return 0;
}
sum : 15
