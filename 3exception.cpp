/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    try
    {
        if(b==0)
        {
            throw 1;
        }
        int c=a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"invalid value for division operation"<<e<<endl;
    }
    cout<<"BYE!"<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int divz(int a, int b) throw(int)
{
    if (b == 0)
    {
        throw 1;
    }
    return a / b;
}
int main()
{
    int a, b;
    cin >> a;
    cout << "enter b :" << endl;
    cin >> b;
    try
    {
        int c = divz(a, b);
    }
    catch (int e)
    {
        cout << " Invalid number for division !" << endl;
    }
    cout<<"BYE"<<endl;
}

#include <iostream>
using namespace std;
int divi(int n, int m)
{
    if (m == 0)
    {
        throw 1;
    }
    else
    {
        return n / m;
    }
}
int main()
{
    int n, m;
    cin >> n;
    cout << "Enter m:" << endl;
    cin >> m;
    try
    {
        cout << divi(n, m);
    }
    catch (int e)
    {
        cout << "invalid m value" << e << endl;
    }
    cout << "bye" << endl;
}

#include <iostream>
using namespace std;
int divi(int n, int m) throw(string)
{
    if (m == 0)
    {
        throw string("YOu are not following the rules");
    }
    else
    {
        return n/m;
    }
}
int main()
{
    int n, m;
    cin >> n;
    cout << "HI" << endl;
    cin >> m;
    try
    {
        cout << divi(n, m) << endl;
    }
    catch (string e)
    {
        cout << "invalid m value " << e << endl;
    }
    cout << "BYE" << endl;
    return 0;
}
#include<iostream>
using namespace std;
class myexception: exception
{

};
int divi(int m,int n) throw(myexception)
{
    if(n==0)
    {
        throw myexception();
    }
    else
    {
        return m/n;
    }
}
int sumi(int m,int n) throw(string)
{
    if(m==0 && n==0)
    {
        throw string("you cannot throw it ");
    }
    else
    {
        return m+n;
    }
}
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    try
    {
        cout<<divi(m,n);
    }
    catch(myexception)
    {
        cout<<"Invalid op"<<endl;
    }

    try
    {
        cout<<sumi(m,n);
    }
    catch(string e)
    {
        cout<<"NO operation performed "<<e<<endl;
        cout<<e<<endl;
    }
    cout<<"end of the program bye !"<<endl;
    return 0;
}

#include <iostream>
using namespace std;
class myexception1 : exception
{
};
class myexception2 : public myexception1
{
};
void divi(int n, int m) //throw(myexception1, myexception2)
{
    if (m == 0)
    {
        throw myexception1();
    }
    else
    {
        throw myexception2();
    }
}
int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    try
    {
        divi(n,m);
    }
    catch (myexception2)
    {
        cout << "Child class" << endl;
    }
    catch (myexception1)
    {
        cout << "PARENT CLASS" << endl;
    }
    return 0;
}


}*/