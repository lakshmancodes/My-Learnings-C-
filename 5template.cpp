/*#include <iostream>
using namespace std;

template <class T>
class stack
{
private:
    T *stk;
    int top;
    int size;

public:
    stack(T sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};
template <class T>
void stack<T>::push(T x)
{
    if (top == size - 1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class T>
T stack<T> ::pop()
{
    T x = 0;
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    stack<float> s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    return 0;
}
#include <iostream>
using namespace std;

class stack
{
private:
    int *stk;
    int top;
    int size;

public:
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new int[size];
    }
    void push(int x);
    int pop();
};
void stack ::push(int x)
{
    if (top == size - 1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        top++;
        stk[top]=x;
    }
}
int stack ::pop()
{
    if(top==-1)
    {

    }
}
int main()
{
}

// preprocessor directives
#include <iostream>
using namespace std;
#define msg(x) #x
#define max(x, y) (x > y ? x : y)
#ifndef PI
    #define PI 3.14
#endif
int main()
{
    cout << msg(hello) << endl;
    cout << max(10, 20) << endl;
    cout<<PI<<endl;
    return 0;
}
#include<iostream>
using namespace std;
#define pp(x) #x
#define pi 3.14
#ifndef Pq
    #define Pq 400
#endif
#define max(x,y) (x>y ?x:y)
int main()
{
    cout<<pp(hi)<<endl;
    cout<<pi<<endl;
    cout<<Pq<<endl;
    cout<<max(10,20);
    return 0;
}

#include<iostream>
using namespace std;
#define prints(xx) # xx
#define piee 3.14
#ifndef pq
    #define pq 900
#endif
#define com(x,y) (x>y?x:y)
int main()
{
    cout<<pq<<endl;
    cout<<piee<<endl;
    cout<<prints(lakshman)<<endl;
}

// namespaces are used to remove name conflict between functions and classes
#include <iostream>
using namespace std;
namespace first
{
    void fun()
    {
        cout<<"this is namespace 1"<<endl;
    }
}
namespace second
{
    void fun()
    {
        cout<<"this is namespace 2"<<endl;
    }
}

int main()
{
    first::fun();
    second::fun();

}*/
#include<iostream>
//using namespace std;
using namespace one;
namespace one
{
    void fun()
    {
        cout<<"namespace 1"<<endl;
    }
}
namespace two
{
    void fun()
    {
        cout<<"namespace 2"<<endl;
    }
}
using namespace one;
int main()
{
    //std::cout<<fun()<<endl;
    fun();
    two::fun();
    cout<<"lakshman"<<endl;
}