//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate Friend function with 2 classes

#include <iostream>
using namespace std;
class Secondnum; //IMPORTANT TO DECLARE OTHER CLASS AS WELL,REMOVE TO UNDERSTAND ERROR AND WHY IT IS NECESSARY🌷
class Firstnum
{
    int a;
    public:
    friend void cmp(Firstnum n1,Secondnum n2);
    void get(int a1)
    {
        a=a1;
    }
};
class Secondnum
{
    int b;
    public:
    friend void cmp(Firstnum n1,Secondnum n2);
    void get(int b1)
    {
        b=b1;
    }
};
void cmp(Firstnum n1,Secondnum n2) //DEFINING FRIEND FUNCTION PASSING OBJECTS OF BOTH CLASSES
{
    if (n1.a>n2.b)
    {
        cout<<n1.a<<" is greater"<<endl;
    }
    else if(n2.b>n1.a)
    {
        cout<<n2.b<<" is greater"<<endl;
    }
    else 
    {
        cout<<"both are equal"<<endl;
    }
}
int main()
{
    Firstnum num1;
    Secondnum num2;
    num1.get(28);
    num2.get(8);
    cmp(num1,num2);
    return 0;
}
//28 is greater
