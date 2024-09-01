/*#include<iostream>
using namespace std;
void display()
{
    cout<<"Hello Friends !!!"<<endl;
}
int main()
{
    display();
    return 0;
}
#include<iostream>
using namespace std;
void display()
{
    cout<<" I AM LEARNING FUNCTIONS IN CPP"<<endl;
}
int main()
{
    display();
    return 0;
}
#include<iostream>
using namespace std;
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
int main()
{
    int a=10,b=20,c;
    c=sum(a,b);
    cout<<"Sum of two numbers is "<< c<<endl;
    return 0;
}
#include<iostream>
using namespace std;
void display()
{
    cout<<"HI WELCOME TO WORLD OF PROGRAMMING "<<endl;
}
int main()
{
    display();
    return 0;
}
#include<iostream>
using namespace std;
float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
int main()
{
    float a=20,b=20;
    float c;
    c= add(a,b);
    cout<<"Addition of two numbers is "<<c<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int add(int a,int b)
{
    int z;
    z=a+b;
    return z;
}
int main()
{
    int x=10,y=20,c;
    c=add(x,y);
    cout<<"SUM OF TWO NUMBERS : "<<c<<endl;
    return 0;
}
// function overloading operations 
#include<iostream>
using namespace std;
int add(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
int add(int x,int y,int z)
{
    int c;
    c=x+y+z;
    return c;
}
int main()
{
    int a=10,b=5,c=100,x,y;
    x=add(a,b);
    y=add(a,b,c);
    cout<<"The addition of two numbers with two parameters is "<<x<<endl;
    cout<<"The addition of three numbers with three parameters is "<<y<<endl;
    cout<<"The function overloading is done where the function name is same with different parameters passed in it "<<endl;
    return 0;
}
#include<iostream>
using namespace std;
float add(int x,int y)
{
    cout<<" i am int"<<endl;
    return x+y;
}
float addd(float x,float y)
{
    cout<<"i am float"<<endl;
    return x+y+10;
}
int main()
{
    int a=10,b=5,c=5,d,f;
    d=addd(a,b);
    cout<<"checking which will perform "<<d<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int max(int a, int b)
{
    return a>b?a:b;
}
float max(float a,float b)
{
    return a>b?a:b;
}
int main()
{
    cout<<max(11,33)<<endl;
    cout<<max(0.001f,1.11f)<<endl;
    return 0;
}
// Instead of using two functions we can minimize by using templates
#include<iostream>
using namespace std;
template<class A>
A maxim(A a,A b)
{
    return a>b?a:b;
}
int main()
{
    cout<<"NEW WAY OF WRITING THINGS "<<endl;
    cout<<maxim(100,10)<<endl;
    cout<<maxim(10.5,22.3)<<endl;
    cout<<maxim(123.012f,200.123f)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
template<class t>
t maxxx(t a,t b)
{
    return a>b?a:b;
}
int main()
{
    int x=10,y=100;
    cout<<maxxx(x,y);
    return 0;
}
#include<iostream>
using namespace std;
template<class C>
C minn(C x,C y)
{
    return x>y?x:y;
}
int main()
{
    int x=100,y=20;
    cout<<minn(x,y)<<endl;
    cout<<minn(1234,4321)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int add(int a,int b,int z=0)
{
    return a+b+z;
}
int main()
{
    int x=100,y=200,z=100;
    cout<<add(x,y,z)<<endl;
    cout<<add(12,12)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    
}
#include<iostream>
using namespace std;
int main()
{
    //program to display short circuit
    int a, b, i;
    cout << "enter the values of a and b : " << endl;
    cin >> a >> b;
    i = 0;
    if (a < b && (i++) < b)
    {
        cout << i << endl;
    }
    cout << i << endl;
    return 0;
}
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c;
    c=sum(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<c<<endl;
    return 0;
}
#include<iostream>
using namespace std;


int main()
{
    int n,arr[n];
}*/
