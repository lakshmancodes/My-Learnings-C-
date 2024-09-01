/*#include<iostream>
using namespace std;

class test
{
public:

   static int count;
    test()
    {
        int a=10;
        count++;
    }
};
int test::count=0;


int main()
{
    test t1,t2;
    t1.count=20;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    test t3;
    cout<<t3.count<<endl;
    cout<<test::count<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class test
{
public:
    static int count;
    test()
    {
        count++;
    }
    static int getcount()
    {
        return count;
    }

};
int test::count=0;
int main()
{
    test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=40;
    cout<<t1.getcount()<<endl;
    cout<<t2.getcount()<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    static int admnum;
    string name;
    student(string name1)
    {
        admnum++;
        roll = admnum;
        name = name1;
    }
    void display()
    {
        cout << "name " << name << endl;
        cout<< "Roll : " << roll;
    }
};
int student::admnum= 0;
int main()
{
    student s1("Lakshman");
    s1.display();
}*/
#include<iostream>
using namespace std;
class student 
{
public:
    int roll;
    static int admnum;
    string name;
    student(string name1)
    {
        name=name1;
        admnum++;
        roll=admnum;
    }
    void display()
    {
        cout<<"Name :" << name<<endl;
        cout<<"roll :"<<roll<<endl;
    }
};
int student::admnum=0;
#include<iostream>
using namespace std;
int main()
{
    student s1("lakshman");
    s1.display();
    student s2("lakshman");
    student s3("lakshman");
    student s4("lakshman");
    s2.display();
    s3.display();
}