//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate Static Data Member

#include <iostream>
using namespace std;
class student
{
    int rno;
    static int count; //by default value =0//cant init here
    public:
    void get()
    {
        cout<<"Enter rollno :";
        cin>>rno;
        count++;
    }
    void put()
    {
        cout<<"Rollno of "<<count<<" Student is "<<rno<<endl;
    }
};
int student::count; // can init here 
int main()
{
    int size=3;
    student s[size];
    for(int i=0;i<size;i++)
    {
        s[i].get();
        s[i].put();
    }
    return 0;
}
/*Enter rollno :1
Rollno of 1 Student is 1
Enter rollno :2
Rollno of 2 Student is 2
Enter rollno :3
Rollno of 3 Student is 3*/
