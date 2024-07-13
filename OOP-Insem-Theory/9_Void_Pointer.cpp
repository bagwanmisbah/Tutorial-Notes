//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate void pointer concept
#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    void *ptr = &a;
    // The void pointer 'ptr' is cast to an integer pointer
    // using '(int*)ptr' Then, the value is dereferenced
    // with `*(int*)ptr` to get the value at that memory
    // location
    cout << *(int*)ptr << endl;
 
    return 0;
}
