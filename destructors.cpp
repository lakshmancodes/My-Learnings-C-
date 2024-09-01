/*#include<iostream>
using namespace std;

class demo
{
public:
    int *p;
    demo()
    {
        p = new int[5];
        cout<<"this is the constructor of demo "<<endl;
    }
    ~demo()
    {
        cout<<"this is the destructor of demo "<<endl;
        delete []p;

    }
};

void fun()
{
    demo d;   //both the constructor and destructor will be called 
    demo *p;  //when this is declared nothing will happen
    demo *f = new demo();  // only the constructor is called since the memory is allocated in heap  so new means creating in the heap
    delete f; //now the destructor will be called since the object from the heap is deleted

}
int main()
{
    fun();
}

#include<iostream>
using namespace std;
class base
{
public :
    base()
    {
        cout<<"this is the base class constructor"<<endl;
    }
    ~base()
    {
        cout<<"this is the base class destructor"<<endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"this is the derived class constructor"<<endl;
    }
    ~derived()
    {
        cout<<"this is the derived class destructor"<<endl;
    }
};
void fun()
{
    derived *d;
    delete d;
}
int main()
{
    fun();
}

#include<iostream>
using namespace std;
class base
{
public :
    base()
    {
        cout<<"this is the base class constructor"<<endl;
    }
    ~base()
    {
        cout<<"this is the base class destructor"<<endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"this is the derived class constructor"<<endl;
    }
    ~derived()
    {
        cout<<"this is the derived class destructor"<<endl;
    }
};
void fun()
{
    base *p =new derived();// base class constructor followed by derived class constructor
    delete p; //only base class destructor is called 
}
int main()
{
    fun();
}*/
#include<iostream>
using namespace std;
class base
{
public :
    base()
    {
        cout<<"this is the base class constructor"<<endl;
    }
    virtual ~base()  //since this is a virtual destructor it works normally like first derived class destructor followed by base class destructor 
    {
        cout<<"this is the base class destructor"<<endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"this is the derived class constructor"<<endl;
    }
    ~derived()
    {
        cout<<"this is the derived class destructor"<<endl;
    }
};
void fun()
{
    base *p =new derived();// base class constructor followed by derived class constructor
    delete p; //derived class destructor followed by base class destructor 
}
int main()
{
    fun();
}