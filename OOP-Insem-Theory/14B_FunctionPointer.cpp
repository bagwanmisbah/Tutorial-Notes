//Author :  Misbah Bagwan 21487
//WAP TO DEMONSTRATE FUNCTION POINTER
#include<iostream>
using namespace std;
int main()
{
  void display(float(*)(int), int); //display takes a func pointer of rt float and int radius as argument
float area(int);//simple function to find area 
int r;
cout<<"Enter the radius ”;
cin>>r;
display(area, r);/*function is passed as a parameter to another function*/
return 0;

}

void display(float(*fptr)(int), int r)
{
/*call to pointer to function*/
cout<<"The area of circle is "<<(*fptr)(r);
}
float area(int r)
{
return (3.14*r*r);
}
