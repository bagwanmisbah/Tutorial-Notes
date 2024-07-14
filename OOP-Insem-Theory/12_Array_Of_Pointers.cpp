//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate  ARRAYS of POINTERS
#include<iostream>
using namespace std;
int main()
{
    int *p=new int[3];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>p[i];
    }
    cout<<"Displaying array elements : "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}
// Enter array elements : 
// 1 2 3 
// Displaying array elements: 
// 1
// 2
// 3
