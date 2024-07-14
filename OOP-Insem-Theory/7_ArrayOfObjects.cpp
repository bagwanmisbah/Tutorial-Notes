//AUTHOR :  MISBAH BAGWAN 21487
//WAP to demonstrate ARRAY OF OBJECTS
#include <iostream>
#include <string>
using namespace std;
class stud
{
    public:
    int rno;
    float per;
    void getdata()
    {
        cout<<"Enter rollno and marks : "<<endl;
        cin>>rno>>per;
    }
    void putdata()
    {
        cout<<"Rollno : "<<rno<<endl;
        cout<<"Percentage : "<<per<<endl;
    }
};
int main()
{
    stud s[2];
    for(int i=0;i<2;i++)
    {
        s[i].getdata();
    }
    for(int i=0;i<2;i++)
    {
        s[i].putdata();
    }
    return 0;
}
