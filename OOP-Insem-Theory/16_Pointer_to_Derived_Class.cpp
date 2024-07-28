#include <iostream>
using namespace std;
class parent
{
    public:
    int age1;
    void display()
    {
        cout<<"Displaying parent age : "<<age1<<endl;
    }
};
class child:public parent
{
    public:
    int age2;
    void display()
    {
        cout<<"Displaying child age : "<<age2<<endl;
    }
};
int main()
{
    parent obj_parent;
    child obj_child;
    parent *p1=&obj_child;
    p1->age1=54;
    //p1->age2=5;//will throw error 
    p1->display();
    //HERE, BASE CLASS POINTER CAN ONLY ACCESS AND MODIFY CONTENTS OF BASE CLASS
    //WE WILL SE HOW DERIVED CLASS CAN ACCESS AND MODIFY BOTH CLASS CONTENTS
    child *c1=&obj_child;
    c1->age1=60;//changing value
    c1->parent::display();
    c1->age2=5;
    c1->display();
    return 0;
}
