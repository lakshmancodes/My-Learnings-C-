#include <iostream>
using namespace std;
/*class Rectangle
{
public:
    int length=50;
    int breadth;
    int area(int length, int breadth)
    {
        return length * breadth;
    }
    int perimeter(int length,int breadth)
    {
        return 2 * (length + breadth);
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle a1, a2;
    cout << a1.area(10, 20) << endl;
    ;
    a1.length = 10;
    a1.breadth = 10;
    cout << a1.area() << endl;
    Rectangle *ptr = new Rectangle();
    ptr->length = 100;
    ptr->breadth = 1000;
    cout << ptr->area() << endl;
    Rectangle r1;
    Rectangle *ptr1 = &r1;
    ptr->length = 2;
    ptr->breadth = 2;
    cout<<ptr->area()<<endl;
    cout<<r1.area(10,10)<<endl;
    cout<<r1.length<<"+"<<endl;
    cout<<a1.perimeter(10,20);
}

class lakshman
{
private:
    int length;
    int breadth;
public:
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void setLength(int l)
    {
        length=l;
        length=100;
    }
    int getLength()
    {
        return length;
    }
    void setBreadth(int b)
    {
        if(b<0)
        {
            breadth=0;
            cout<<"invalid input";
        }
        else
        {
            breadth=b;
        }

    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{
    lakshman l;
    l.setLength(10);
    l.setBreadth(10);
    cout<<l.area();
}

class property
{
private:
    int length;
    int breadth;
public:
    int area()
    {
        return length*breadth;
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
};
int main()
{
    property p;
    p.setLength(100);
    p.setBreadth(100);
    cout<<p.area();
    return 0;
}
class rectang
{
private:
    int length;
    int breadth;
public:

    // rectang()
    // {
    //     length=1;
    //     breadth=1;
    // }
    rectang(int l=1,int b=1)
    {

        length=l;
        breadth=b;
    }
    rectang(rectang &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }


};

int main()
{
    rectang r1(1,1);
    rectang r2(10,2);
    rectang r3(r1);

    //r1.setlength(10);
    //r1.setbreadth(2);
    cout<<r1.area()<<endl;
    cout<<r2.area();
}

#include <iostream>
using namespace std;
class employee
{
private:
    int empid;
    string name;

public:
    employee(int eid, string ename)
    {
        empid = eid;
        name = ename;
    }
    int getempid()
    {
        return empid;
    }
    string enmame()
    {
        return name;
    }
};

class fulltimeemp : public employee
{
private:
    int salary;

public:
    fulltimeemp(int eid,string ename,int sal ):employee(eid,ename)
    {
        salary=sal;
    }
    int getsalary()
    {
        return salary;
    }
};

class partimeemp : public employee
{
private:
    int wage;
public:
    partimeemp(int eid,string ename,int wages):employee(eid,ename)
    {
        wage=wages;
    }
    int getwage()
    {
        return wage;
    }
};

int main()
{
    fulltimeemp e1(01,"JOhn",40000);
    partimeemp e2(02,"Rick",50000);
    cout<<"salary of "<<e1.enmame()<<" is "<<e1.getsalary()<<endl;
    cout<<"salary of "<<e2.enmame()<<" is "<<e2.getwage()<<endl;
}

#include <iostream>
using namespace std;

class base
{
public:
    void fun1()
    {
        cout << "fun1 of base" << endl;
    }
};
class derived : public base
{
public:
    void fun2()
    {
        cout << "fun2 of derived" << endl;
    }
};
int main()
{
    base *d2;
    derived d1;
    base *ptr = &d1;
    d2 = new derived();
    d2->fun1();
    d2->fun2();
    d1.fun1();
    d1.fun2();
}

#include<iostream>
using namespace std;

class base
{
public:
    void fun2()
    {
        cout<<"THIS IS base fun1"<<endl;
    }
    void lakshman()
    {
        cout<<"something is there in this "<<endl;
    }
};

class derived: public base
{
public:
    void fun1()
    {
        cout<<"this is the derived fun1"<<endl;
    }
};


int main()
{

    base d1;
    base *ptr1= new derived();
    //ptr1->fun1();
    derived d2;
    //derived *ptr2= new base();

    d2.fun2();
    d2.fun1();
    d2.lakshman();
    return 0;
}*/

#include <iostream>
using namespace std;
class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
    float length ;
    float breadth ;
public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};
class circle : public shape
{
private:
    float radius;
public:
    circle(int r)
    {
        radius=r;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
    float perimeter()
    {
        return 6.28*radius;
    }
};

int main()
{
    int a,b;
    cout<<"enter a :"<<endl;
    cin>>a;
    cout<<"enter b :"<<endl;
    cin>>b;
    shape *ptr = new rectangle(a, b);
    cout<<"the area of rectangle is "<<ptr->area()<<endl;
    cout<<"the perimeter of rectangle is "<<ptr->perimeter()<<endl;
    int r;
    cout<<"enter the radius :"<<endl;
    cin>>r;
    ptr= new circle(r);
    cout<<"the area of the circle will be "<<ptr->area()<<endl;
    cout<<"the circumference of the circle will be "<<ptr->perimeter();
    return 0;
}
