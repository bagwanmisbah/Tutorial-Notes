//WAP TO DEMONSTRATE DEFAULT PARAMETERISED CONSTRUCTOR
#include <iostream>
#include <string>
using namespace std;
class emp
{
    int eid;
    float sal;
    string name;
    int age;
    public:
    emp(){} //default constructor 
    emp(int e,float s,string n,int a=30)  //parameterized 
    {
        eid=e;
        sal=s;
        name=n;
        age=a;
    }
    void put()
    {
        cout<<eid<<endl;
        cout<<sal<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    emp e1;
    e1=emp(5,250.0,"ABC");
    e1.put();
    emp e2(4,900.0, "DEF"); //constructor with default arguments
    e2.put();
    return 0;
}
