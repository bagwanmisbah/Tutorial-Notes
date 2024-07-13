//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate POINTERS TO POINTERS
//dynamically allocating multi-dimensional arrays,
//passing a pointer to a pointer to a function, or managing arrays of pointers.
#include <iostream>
using namespace std;
int main()
{
    int a;
    int *p1=&a;
    int **p2;
    p2=&p1;
    cout<<p1<<endl;
    cout<<p2<<endl;
    return 0;
}
