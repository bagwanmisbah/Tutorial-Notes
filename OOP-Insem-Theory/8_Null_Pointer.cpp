//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate NULL POINTER CONCEPT
//NULL POINTER
#include <iostream>
using namespace std;
int main () 
{
   int  *ptr = NULL;
   if(ptr)
   {
   cout << "This stmt will not be executed " ;
   }
   else if(!ptr)
   {
   cout << "This stmt will  be executed "  ;
   }
  cout << "The value of ptr is " << ptr ;
   return 0;
}
