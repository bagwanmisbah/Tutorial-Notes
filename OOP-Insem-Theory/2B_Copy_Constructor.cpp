//WAP to demonstrate default parameterised constructor
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    public:
    int rno;
    int age;
    string name;
    string dept;
    student(){}
    student(int rno,int age,string name,string dept)
    {
        this->rno=rno;
        this->age=age;
        this->name=name;
        this->dept=dept;
    }
    student(student &s)
    {
        rno=s.rno;
        age=s.age;
        name=s.name;
        dept=s.dept;
    }
    void display()
    {
        cout<<"Rollno: "<<rno<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"dept: "<<dept<<endl;
        cout<<"name: "<<name<<endl;
    }
};
int main()
{
    student s1(1,14,"misbah","science");
    //s1.display();
    student s2(s1);
    s2.display();
    student s3(2,14,"bagwan","arts");
    s2=student(s3);//calling copy constructor
    s2.display();
    return 0;
}
