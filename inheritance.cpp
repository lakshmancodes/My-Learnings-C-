#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "non param of base " << endl;
    }
    Base(int x)
    {
        cout << "Param of base " << x << endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Non param derived" << endl;
    }
    Derived(int a)
    {
        cout << "Param of derived " << a << endl;
    }
    Derived(int a, int x) : Base(x)//to call the parameterized constructor of base class that is base
    {
        cout << "To call the param of base with passing " << a << " and " << x << " parameters" << endl;
    }
};

int main()
{
    Derived d;
    Derived a(10);
    Derived as(10, 20);
}
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    int area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        // length=0;
    }
    void setBreadth(int b)

    {
        if (breadth > 0)
            breadth = b;

        // breadth=0;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(10);
    cout << r.area() << endl;
    cout << r.getBreadth()<< " is THE BREADTH " << endl;
    cout << r.getLength() << " is the LEngth" << endl;
}
#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,breadth;
public:
    int area()
    {
        return length*breadth;
    }
    float perimeter(int l,int b)
    {
        return 2*(length+breadth);
    }
    void setLength(int l)
    {
        if(l>0)
        {
            length=l;
        }
        else
        {
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else
        {
            breadth=0;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};

int main()
{
    Rectangle r1;
    r1.setBreadth(11);
    r1.setLength(10);
    cout<<r1.getBreadth()<<endl;
    cout<<"area "<<r1.area()<<endl;
    cout<<"Perimeter"<<r1.perimeter(10,10);
}
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    int area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
    void setLength(int l)
    {
        if(length>0)
            length=l;
        else
            length=0;
    }
    void setBreadth(int b)
    {
        if(breadth>0)
            breadth=b;
        else
            length = 0;

    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

};
int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(10);
    cout<<"The area of rectangle"<<r1.area()<<endl;
    cout<<"The perimeter of rectangle"<<r1.perimeter()<<endl;
    cout<<"The length set is "<<r1.getLength()<<endl;
    cout<<"the breadth set is "<<r1.getBreadth()<<endl;
}
#include<iostream>
using namespace std;
class Employee
{
    private:
        int eid;
        string name;
    public:
        Employee(int e,string n)
        {
            eid=e;
            name=n;
        }
        int getEmployeeid()
        {
            return eid;
        }
        string getEmployeename()
        {
            return name;
        }

};
class Fulltimeempl : public Employee
{
    private:
        int salary;
    Fulltimeempl :Employee()
    {
        salary=sal;
    }
};t56tf6reds\

class Parttimeempl : public Employee
{
    private:
        int wage;
};

int main()
{
    Employee a;
}
#include<iostream>
using namespace std;
class Employee
{
    private:
        int eid;
        string name;
    public:
        Employee(int e,string n)
        {
            eid=e;
            name=n;
        }
        int getEmployeeID()
        {
            return eid;
        }
        string getEmployeeName()
        {
            return name;
        }
};
class FulltimeEmployee: public Employee
{
    private:
        int salary;
    public :

}
#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
            {
                cout<<"I am non param base"<<endl;
            }
        Base(int x)
        {
            cout<<"I am param of base"<<x<<endl;
        }
};
class Derived:public Base
{
    public:
        Derived()
        {
            cout<<"I am non param of derived"<<endl;
        }
        Derived(int z)
        {
            cout<<z<<endl;
        }
        Derived(int x,int y):Base(x)
        {
            cout<<"I am param of derived"<<y<<endl;
        }

};

int main()
{
    int x;
    //Derived d;
    Base b();
    //Derived a(10,20);
}

#include<iostream>
using namespace std;
class  base
{
public:
    base()
    {
        cout<<"default base"<<endl;
    }
    base(int x)
    {
        cout<<"param of base "<<x<<endl;
    }

};

class derived : public base
{
public:
    derived()
    {
        cout<<"default derived"<<endl;
    }
    derived(int x):base(x)
    {
        cout<<"default derived "<<x<<endl;
    }

    derived(int x,int y):base(x)
    {
        cout<<"param of base "<<y<<endl;
    }
};

int main()
{
    derived r(10,20);
    cout<<"\n\n\n";
    derived x(10);
}

#include <iostream>
using namespace std;

class parent
{
public:
    int a;

protected:
    int b;

private:
    int c;

public:
    void fun()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class child : private parent
{
public:
    void fun()
    {
        a = 10;
        b = 20;
        int c = 30;
    }
};

class grandchild : public child
{
public:
    void fun()
    {
        a = 10;
        b = 20;
        // c=30;
    }
};
int main()
{
    child h;
    h.a = 10;
    h.b = 20;
    h.c = 30;
}

#include<iostream>
using namespace std;
class base
{
public:
    void display(int x)
    {
        cout<<"THIs is display of base "<<endl;
    }
};
class derived:public base
{
public:
    void display()
    {
        //cout<<"this is display of derived"<<endl;
    }
};
int main()
{
    derived d;
    d.base::display(10);
}*/


//USE OF VIRTUAL FUNCTIONS 
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


