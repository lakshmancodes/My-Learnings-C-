/*#include <iostream>
using namespace std;
int main()
{
    int x = 10; // dATA VARIABLE
    int *p;     // pointer declaration
    p = &x;     // pointer initialization
    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl; // pointer dereferencing
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 3, 4, 5};
    int *p = new int[10];
    cout << a[4] << endl;
    cout << p[0] << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int *p= new int [5];
    p[0]=1;
    p[10]=10;
    cout<<p[0]<<endl;
    cout<<p[10]<<endl;
    cout<<p[3]<<endl;
    delete []p;
    p=nullptr;
    cout<<p[0]<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int * p = new int [5];
    p[0]=10;
    p[1]=11;
    cout<<p[1]<<endl;
    cout<<p[4]<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    int a;
    a=10;
    int *p=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=new int[5];
    cout<<p[0]<<endl;
    delete[]p;
    p=NULL;
    cout<<p<<endl;
    return 0;
}*/
// ARRAY SIZE IF ONCE ALLOCATED CANNOT BE CHANGED AGAIN LIKE IF IT IS CREATED IN STACK IT IS IMMPOSIBLE TO MODIFY IT'S SIZE
// BUT USING THE POINTERS IT IS POSSIBLE TO MODIFY BY CREATING THE ARRAY MEMORY ALLOCATION IN THE HEAP MEMORY BEFORE THAT DELETION OF THE PREVIOUS ARRAY IS MUST.
/*#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array element Size you want to have :"<<endl;
    cin>>size;
    int a[size];
    cout<<sizeof a<<endl;
    cout<<"Since it is integer it is multiplied by 4 "<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    //int *p=new int [10];
    //p[0]=10;
    //cout<<sizeof p<<endl;
    //delete []p;
    //p=nullptr;
    int size ;
    cout<<"Enter the array element size : "<<endl;
    cin>>size;
    int *p=new int[size];
    int *a[size];
    int b[size];
    cout<<sizeof p<<endl;
    cout<<sizeof a<<endl;
    cout<<sizeof b<<endl;
    delete []p;
    p=nullptr;
    p[10]=100;
    cout<<p[10]<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int A[5] {2,4,6,8,10};
    int *p=A;
    cout<<*p<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={10};
    int b=100;
    int *b=&b
    int *p=&a;
    cout<<*p<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    //this is for a single element case
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,4,6,8,10};
    int *p=a;//this is for dereferencing
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<p-2<<endl;
    cout<<*(p+2)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,3,4,5,6};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        cout<<i[a]<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={11,22,33,44,55};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,34,5,56};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,45,6};
    int *p=a;
    int *q=&a[4];
    cout<<*p<<endl;
    cout<<q-p<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p=&x;
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    //create memory in heap
    int arr[5]={1,2,3,4,5};
    int *p= new int[5];
    p[0]=10;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    delete []p;
    p=nullptr;
}*/

// suppose you hav ealdready created a dynamic array and want to change the size of it
// usually this is not possible because of the property fo the array
// whereas using pointers and heap memory it is poosible to change the array size during runtime
#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << " ";
    }
    delete[] p;
    cout << p[0]; // so the memory from heap is deallocated and only the pointer created in stack exists ie. just the ptr
    cout << p[10];
    p = new int[40];
    p[40]=100;
    cout<<p[40];
}