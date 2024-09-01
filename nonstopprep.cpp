#include<iostream>
using namespace std;

class base
{
public:
    virtual void display()     // addition of virtual means that the functiin is virtual and the derived class fn. is called
    {
        cout<<"this is base display"<<endl;
    }
};
class derived:public base
{
public:
    void display()
    {
        cout<<"this is derived display"<<endl;
    }
};
int main()
{
    derived d;
    base *p=&d;
    p->display();
}