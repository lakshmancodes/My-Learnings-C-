/*#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}

#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int x=3;
    fun(x);
}
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}
#include<iostream>
using namespace std;
class Employee
{

}
int main()
{

}

#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
   return 0;
}
int main()
{
    int a=5;
    fun(a);
    cout<<fun(a)<<endl;
    return 0;

}
#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        int static x=0;
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int a=5;
    fun(a);
    cout<<fun(a)<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return (n - 1) + x;
    }
    return 0;
}
int main()
{
    fun(10);
    cout << fun(10) << endl;
    return 0;
}


#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    fun(n);
    cout<<fun(n)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
void toh(int n,int a,int b,int c)//from a to c using b
{
    if(n>0)//base condition 
    {
        toh(n-1,a,c,b);// initially move from a to b using c source auxiliary destination 
        cout<<a <<" to "<<c<<endl;
        toh(n-1,b,a,c);//here we move the tower from b to c using a source auxiliary destination
    }
}
int main()
{
    int n;
    cin>>n;
    toh(n,1,2,3);//tower numbers 1,2,3
    return 0;
}*/

#include<iostream>
using namespace std;
void toh(int n,int a,int b,int c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cin>>n;
    toh(n,1,2,3);
    return 0;
}