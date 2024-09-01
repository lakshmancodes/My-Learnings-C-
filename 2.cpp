/*#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int mid, key, l, h, n;
    cout << "enter a number :";
    cin >> n;
    l = 0;
    h = n - 1;
    cout << "Now enter the array elements in the ascending order : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to search in the array :";
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            cout << "The element " << key << " found at the index " << mid << endl;
            return 0;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else if (a[mid] > key)
        {
            h = mid - 1;
        }
    }
    cout << "ELEMENT " << key << " not found " << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int n, max;
    cout << "enter the number of elements you want in your array : ";
    cin >> n;
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int x : a)
    {
        if (max > x)
        {
            cout << max << " is the highest of all " << endl;
        }
        else if (max < x)
        {
            max = max + 1;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, b;
    int a[] = {};
    cout << "Enter number of array elements  :";
    cin >> n;
    cout << "Input array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>)
    }
    cout << "MAXIMUM NUMBER IS " << max << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int l, h, mid, key, n;
    cout << "Enter the array elements size : ";
    cin >> n;
    l = 0;
    h = n - 1;
    cout << "Now enter the array elements in ascending order : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "NOW ENTER THE ELEMENT YOU WANT TO SEARCH : " << endl;
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Element found in the index " << mid << endl;
            return 0;
        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
    }
    cout << "Element " << key << " not found " << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int n, max;
    max = a[0];
    cout << "enter the number of array elements : ";
    cin >> n;
    cout << "NOW INPUT THE ARRAY ELEMENTS :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "The maximum of the array elements is " << max << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i >= j)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ROWS YOU WANT IN A MATRIX :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) >= n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE VALUE OF N :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// MULTIDIMENSIONAL ARRAY
#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {{2}, {3}};
    int b[2][3] = {{2, 3, 4}};
    int c[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j]<<" ";
            cout<<"\t";
            cout << b[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,2},{1,2,3}};
    int b[2][3]={};
    int c[2][3]={};
    cout<<"DISPLAYING MATRIX A :"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nDISPLAYING MATRIX  B :"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nAddition of two matrices : A + B "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// PROGRAM TO DISPLAY SUM OF ELEMENTS OF AN ARRAY
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int n, sum = 0;
    cout << "enter the number of elements you want in an array : ";
    cin >> n;
    cout << "Now enter the arrray elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum of elements of array is " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int n, sum = 0;
    cout << "enter the number of elements you want in an array : ";
    cin >> n;
    cout << "Now enter the arrray elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(auto x: a)
    {
        sum = sum + x;
    }
    cout << "Sum of elements of array is " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {18, 23, 53, 87, 44, 21, 31};
    int sum = 0;
    for (auto x : a)
    {
        sum = sum + x;
    }
    cout << "SUM OF ELEMENTS OF ARRAY : " << sum << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={};
    int x,y;
    cout<<"Enter the array elements for matrix dimension 2X3 :"<<endl;
    for(auto& x:a)
    {
        for(auto& y:x)
        {
            cin>>y;
        }
    }
    cout<<"Displaying the array elements : "<<endl;
    for(auto & x:a)
    {
        for(auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[2][3],b[2][3];
    cout<<"TO input values into matrix a :";
    for(auto& x: a)
    {
        for(auto& y: x)
        {
            cin>>y;
        }
    }
    cout<<"To input values into matrix b : ";
    for(auto& p:b)
    {
        for(auto& q: p)
        {
            cin>>q;
        }
    }
}
#include<iostream>
using namespace std;
int main()
{
    int a[2][3],b[2][3],c[2][3];
    cout<<"For entering values into array A :"<<endl;
    for(auto& x: a)
    {
        for(auto& y: x)
        {
            cin>>y;
        }
    }
    cout<<"FOR ENTERING VALUES INTO ARRAY B :"<<endl;
    for(auto& p:b)
    {
        for(auto& q :p)
        {
            cin>>q;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"the result after addition of two matrices a and b are :"<<endl;
    for(auto& k : c)
    {
        for(auto& l:k)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[]={};
    int sum=0,n;
    float avg=0;
    cout<<"Enter the number of array elements : ";
    cin>>n;
    cout<<"Now enter the array elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    cout<<"The sum of entered array elements  :"<<sum<<endl;
    cout<<"The sum of average of the entered array elements  :"<<avg<<endl;
    return 0;
}
//Program for linear search
#include<iostream>
using namespace std;
int main()
{
    int a[]={};
    int key,n;
    cout<<"Enter the number of elements you want in an array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"The array element "<<key<<" is present in the key "<<i<<" "<<endl;
            return 0;
        }
    }
    cout<<" Element not found "<<endl;
    return 0;
}
//Program for Binary Search
#include<iostream>
using namespace std;
int main()
{
    int a[]={};
    int l,h,mid,n,search;
    cout<<"Enter the number of elements in an array : ";
    cin>>n;
    cout<<"NOW INPUT THE ARRAY ELEMENTS in ascending order : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l=0;
    h=n-1;
    cout<<"Enter the element you want to search : ";
    cin>>search;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(search==a[mid])
        {
            cout<<"The element you are searching is available in the index :"<<mid<<endl;
            return 0;
        }
        else if(search>a[mid])
        {
            l=mid+1;
        }
        else if(search<a[mid])
        {
            h=mid-1;
        }
    }
    cout<<"Element you entered is not found "<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int num,rev;
    cout<<"Enter the number you want to reverse : ";
    cin>>num;
    while(num>0)
    {
        rev=num%10;
        num=num/10;
        cout<<rev<<" ";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int num, rev;
    cout << "Enter the number ";
    cin >> num;
    while (num > 0)
    {
        rev = num % 10;
        num = num / 10;
        rev = (num * 10) + rev;
    }
    cout << "The reverse of the number is : " << rev << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],r1,c1,r2,c2;
    cout<<"Enter the dimensions for the matrix a :";
    cin>>r1>>c1;
    cout<<"Enter the dimensions for the matrix b :";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"Matrix multiplication not possible ";
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            for()
        }
    }
}
#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], mul[10][10] = {};
    cout << "ENTER THE DIMENSIONS OF THE A MATRIX :";
    cin >> r1 >> c1;
    cout << "Enter the dimensions of the B MATRIX :";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible " << endl;
        return 0;
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter the element a" << i + 1 << j + 1 << " in matrix A :";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter the element b" << i + 1 << j + 1 << " in matrix B :";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[10][10] = 0;
            for (int k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Displaying matrix A :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Displaying matrix B :" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "OUTPUT  MATRIX : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mul[10][10] = {};
    int r1, c1, r2, c2;
    cout << "Enter the dimensions of the matrix A :";
    cin >> r1 >> c1;
    cout << "Enter the dimensions of the matrix B :";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "MATRIX MULTIPLICATION IS NOT VALID " << endl;
        return 0;
    }
    cout << " NOW Enter the elements of Matrix A : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Matrix A a" << i + 1 << j + 1 << " :";
            cin >> a[i][j];
        }
    }
    cout << "DISPLAYING MATRIX A :" << endl;
    for (int i = 0; i < r1; i++)
    {
        cout << "\t";
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "NOW ENTER THE ELEMENTS OF MATRIX B :" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "MATRIX B b" << i + 1 << j + 1 << " :";
            cin >> b[i][j];
        }
    }
    cout << "DISPLAYING MATRIX B :" << endl;
    for (int i = 0; i < r2; i++)
    {
        cout << "\t";
        for (int j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "NOW DISPLAYING THE MATRIX AFTER MULTIPLICATION : " << endl;
    for (int i = 0; i < r1; i++)
    {
        cout<<"\t";
        for (int j = 0; j < c2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mul[10][10] = {};
    int r1, c1, r2, c2;
    cout << "Enter the matrix A dimensions :";
    cin >> r1 >> c1;
    cout << "Enter the matrix B dimensions :";
    cin >> r2 >> c2;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "IN MATRIX A a" << i + 1 << j + 1 << " :";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "IN MATRIX B b" << i + 1 << j + 1 << " :";
            cin >> b[i][j];
        }
    }
    cout << "Displying matrix A :" << endl;
    for (int i = 0; i < r1; i++)
    {
        cout << "\t";
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Displaying Matrix B :" << endl;
    for (int i = 0; i < r2; i++)
    {
        cout << "\t";
        for (int j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "NOW WE WILL PERFORM MULTIPLICATION OPERATION >>>" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "\nDisplaying matrix after multiplication :" << endl;
    for (int i = 0; i < r1; i++)
    {
        cout << "\t";
        for (int j = 0; j < c2; j++)
        {
            cout << mul[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mul[10][10] = {};
    int r1, c1, r2, c2;
    cout << "Enter the dimensions of matrix A :" << endl;
    cin >> r1 >> c1;
    cout << "Enter the dimensions of Matrix B :" << endl;
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible " << endl;
    }
    cout << "Enter elements of Matrix A :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "enter the element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }
    cout << "DISPLAYING MATRIX A :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Displaying Matrix B :" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Now multiplying two Matrices : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Displying the Matrix after multiplication :" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],mul[10][10]={};
    int r1,c1,r2,c2;
    
}

#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cout<<"enter array size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the sum :"<<endl;
    int val;
    cin>>val;
    for(int i=0;i<n;i++)
    {
        int sum=arr[i];
        if(sum==val)
        {
            cout<<i<<" is the index"<<endl;
        }
        else
        {
            for(int j=i+1;j<n;j++)
            {
                sum=sum+arr[j];
                if(sum==val)
                {
                    cout<<i<<" and "<<j<<" are the index"<<endl;
                    cnt++;
                }
            }
        }
    }
    if(cnt==0)
    {
        cout<<"no subarrray with equal to sum "<<endl;
    }
    return 0;
}*/
#include<iostream>
#include<fstream>
using namespace std;
// int main()
// {
//     ofstream ofs("my.txt",ios::trunc);
//     ofs<<"hi this is Lakshman"<<endl;
//     ofs<<"new line"<<endl;
//     ofs<<"who is your fav person and why ?"<<endl;
//     ofs.close();
// }
template <typename T>
class Array 
{
private:
    T *ptr;
    int size;
public:
    Array(T hack_arr[], int s);
    void print();
};
template <typename T>
Array<T>::Array(T hack_arr[], int s) 
{

    ptr = new T[s];
    size = s;
    for(int i = 0; i < size; i++)
        ptr[i] = hack_arr[i];
}
template<typename T>
void Array<T>::print()
{
    for(int i=0;i<size;i++)

    {
        cout<<" "<<*(ptr + i);
    }
}
int main()
{
    int hack_arr[5] = {4,6,2,9,1};
    Array<int> a (hack_arr,3);
    a.print();
    return 0;
} 


