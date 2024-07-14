//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate POINTERS TO ARRAYS
 #include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=a; //first element of array is stored in p
    for(int i=0;i<5;i++)
    {
        cout<<*p <<endl; //printing value of each one 
        *p++;
    }
  return 0;  
}
