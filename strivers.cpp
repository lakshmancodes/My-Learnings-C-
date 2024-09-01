/*#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        fun1(n);
    }
    return 0;
}
#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


int main()
{
    int n,a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        fun1(n);
    }
return 0;
}
#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;i++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        fun1(n);
    }
    return 0;
}
#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        fun1(n);
    }
    return 0;
}
#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        fun1(n);
    }
    return 0;
}
#include<iostream>
using namespace std;
void fun1(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        fun1(a);
    }
    return 0;
}
#include<iostream>
using namespace std;
void fun1(int a )
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        fun1(a);
    }
}
#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int a,n;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        fun1(n);
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        //space
        cout<<" ";
        for(int j=0;j<(2*i)-1;j++)
        {
              //stars
              cout<<"* ";
        }
        for(int k=0;k<a;k++)
        {
             //space
             cout<<" ";
        }
       cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

void fun1(int n)
{
    for(int i=0;i<n-i-1;i++)
    {
        cout<<" ";
    }
    for(int j=0;j<2*j+1;j++)
    {
        cout<<"*";
    }
    for(int k=0;k<n-k-1;k++)
    {
        cout<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    fun1(n);
}
#include <iostream>
using namespace std;

int main() {

    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0) {
        for(space = 1; space <= rows-i; ++space) {
            cout <<"  ";
        }

        while(k != 2*i-1) {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int space,rows;
    cin>>rows;
    for(int i=1,k=0;i<=rows;i++,k=0)
    {
        for(space=1;space<=rows-i;space++)
        {
            cout<<" ";
        }
        while(k!=2*i-1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
int main ()
{
    int rows,spaces;
    cin>>rows;
    for(int i=1,k=0;i<=rows;i++,k=0)
    {
        for(spaces=1;spaces<=rows-i;spaces++)
        {
            cout<<" ";
        }
        while(k!=2*i-1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
void fun1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++ )
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void fun2(int n)
{

}
int main()
{
    int n;
    cin>>n;
    fun1(n);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        count = count + 1;
        n = n / 10;
    }
    cout << count << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, las, dig;
    cin >> a;
    b = 0;
    while (a > 0)
    {
        las = a % 10;
        b++;
        a = a / 10;
        cout << las;
    }
    cout << " is the reverse of the number" << endl;
    cout << b << " is the no of digits";
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,las,cc;
    cin>>a;
    cout<<"hi"<<endl;
    cin>>cc;
    b=0;
    while(a>0)
    {
        las=a%10;
        a=a/10;
        b++;
    }
    switch (cc)
    {
        case 1:
            cout<<"Rev of a number : "<<las<<endl;
            break;
        case 2:
            cout<<"The number of digits is "<<b<<endl;
            break;
    }

    return 0;

}
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    b=0;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        cout<<b;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,rev,las;
    cin>>a;
    las=0;
    rev=0;
    while(a>0)
    {
        las=a%10;
        rev=(rev*10)+las;
        a=a/10;
    }
    cout<<rev<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ini;
    cout<<"Enter the number you want to reverse :";
    cin>>a;
    ini=a;
    b=0;
    c=0;
    while(a>0)
    {
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    cout<<"Actual number :"<<ini<<endl;
    cout<<"Reverse number:"<<c<<endl;
    if(ini==c)
    {
        cout<<"THE PALIDROME "<<endl;
    }
    else
    {
        cout<<"NOT A PALINDROME"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,las,c;
    int sum=0;
    int rev=0;
    cin>>a;
    int act=a;
    while(a>0)
    {
        las=a%10;
        a=a/10;
        rev=(rev*10)+las;
        sum=sum+(las*las*las);
    }
    if(act==sum)
    {
        cout<<"It is an armstrong number "<<act<<endl;
    }
    else{
        cout<<"Not an armstrong number"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            //cout<<" Number "<< i <<" is  a factor"<<endl;
            cout<<i<<"\t";
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,las=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            las++;
        }
    }
    if(las==2)
    {
        cout<<"PRIME Number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,rem;
    cin>>a;
    c=0;
    rem=a%10;
    b=a/10;
    //c=b*10;
    while(a>0)
    {
        b=a/10;
        c=b*10;
    }
    if(rem>=5)
    {
        c=(b+1)*10;
        cout<<c<<endl;
    }
    else
    {
        c=(b)*10;
        cout<<c<<endl;
    }
    //cout<<c<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, gcd = 0;
    cout << "enter the 1st num : ";
    cin >> n1;
    cout << "\nEnter the 2nd num :";
    cin >> n2;
    for (int i = 0; i <= min(n1, n2); i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd = i;
        }
    }
    cout << "The gcd of the numbers " << n1 << " and " << n2 << " is :" << gcd << endl;
    return 0;
}
#include<iostream>
using namespace std;
int void1()
{
    int count=0;
    if(count<=5)
    {
        cout<<"Name";
        count++;
        void1();
    }


}
int main()
{
    void1();
}
#include<iostream>
using namespace std;
void a1(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"LAKSHMAN "<<endl;
    a1(i+1,n);
}
int main()
{
    int n,i=1;
    cin>>n;
    a1(i,n);
}
#include<iostream>
using namespace std;
void a2(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<" ";
    a2(i+1,n);
}
int main()
{
    int n,i=1;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    a2(i,n);
}
#include<iostream>
using namespace std;
void a1(int i,int n)
{
    if(n<i)
    {
        return;
    }
    cout<<n<<" ";
    a1(i,n-1);
}
int main()
{
    int n,i=1;
    cin>>n;
    a1(i,n);
}
//Backtracking of function and printing from 1 to n;
#include<iostream>
using namespace std;
void back(int i, int n)
{
    if(i>n)
    {
        return;
    }
    back(i,n-1);
    cout<<n<<" ";
}
int main()
{
    int n,i=1;
    cin>>n;
    back(i,n);
    return 0;
}
//backtracking a function by printing from n to 1
#include<iostream>
using namespace std;
void fun1(int i,int n)
{
    if(i>n)
    {
        return;
    }
    fun1(i+1,n);
    cout<<i<<" ";
}
int main()
{
    int n,i=1;
    cin>>n;
    fun1(i,n);
}
///wrong soln.
#include<iostream>
using namespace std;

void fun1(int i,int n)
{

    if(i>n)
    {
        cout<<"Sum of the "<<n<<" numbers is "<<sum<<endl;
        return ;
    }
    sum=sum+i;
    fun1(i+1,n);

}
int main()
{
    int n,i=1;
    int sum=0;
    Global sum;
    cout<<"Enter the number :";
    cin>>n;
    fun1(i,n);

    return 0;
}
#include<iostream>
using namespace std;
void fun1(int a,int sum)
{
    if(a<1)
    {
        cout<<sum<<endl;
        return;
    }
    fun1(a-1,sum+a);
}
int main()
{
    int a,sum=0;
    cin>>a;
    fun1(a,sum);
    return 0;
}
#include<iostream>
using namespace std;
void fun1(int a,int sum)
{
    if(a<1)
    {
        cout<<"The sum of numbers is "<<sum<<endl;
        return;
    }
    fun1(a-1,sum+a);
}
int main()
{
    int a,sum=0;
    cin>>a;
    fun1(a,sum);
}
#include<iostream>
using namespace std;
void fun1(int a,int sum)
{
    if(a<1)
    {
        cout<<"sum of numbers :"<<sum<<endl;
        return;
    }
    fun1(a-1,sum+a);
}
int main()
{
    int a,sum=0;
    cout<<"Enter the value of n :"<<endl;
    cin>>a;
    fun1(a,sum);
    return 0;
}
#include <iostream>
using namespace std;
int fun1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + fun1(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout << fun1(n) << endl;
}
#include<iostream>
using namespace std;
void fun1(int a,int sum)
{
    if(a<1)
    {
        cout<<sum<<endl;
        return;
    }
    fun1(a-1,sum+a);

}
int main()
{
    int a,sum=0;
    cin>>a;
    fun1(a,sum);
}
#include<iostream>
using namespace std;
int fun1(int a)
{
    if(a==0)
    {
        return 0;
    }
    return a+fun1(a-1);
}
int main()
{
    int a,b;
    cin>>a;
    cout<<fun1(a);
}
//parameterized factorial
#include<iostream>
using namespace std;
void fun2(int n,int fact)
{
    if(n<1)
    {
        cout<<"the factorial of the number is :"<<fact<<endl;
        return;
    }
    fun2(n-1,fact*n);
}
int main()
{
    int n,fact=1;
    cin>>n;
    fun2(n,fact);
    return 0;
}
//function factorial
#include<iostream>
using namespace std;
int fun2(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fun2(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number you want to find the factorial of :"<<endl;
    cin>>n;
    cout<<"the factorial of the number "<<n<<" is : "<<fun2(n);
    return 0;
}
//reversing an array
#include<iostream>
using namespace std;
void fun1(int l,int r)
{
    if(r<l)
    {
        return ;
    }
    swap(arr1[l],arr1[r]);
    fun1(l+1,r-1);

}
int main()
{
    int arr1[5]={1,2,3,4,5};
    fun1(0,4);
}
#include<iostream>
using namespace std;
int fun2(int a)
{
    if(a==0)
    {
        return 1;
    }
    return a*fun2(a-1);
}
int main()
{
    int a;
    cin>>a;
    cout<<fun2(a);
}
#include<iostream>
using namespace std;
void printarray(int ans[],int n)
{
    cout<<"the reversed array is -";
    for(int i=0 ;i<n;i++)
    {
        cout<<ans[i];
    }

}
void arrays(int arr[],int n)
{
    int ans[n];
    for(int i=n-1;i>=0;i--)
    {
        ans[n-i-1]=arr[i];
    }
    printarray(ans,n);

}
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    arrays(arr,n);
    return 0;
}
//Reverse a=n arrray:
#include<iostream>
using namespace std;
void printarrays(int ans[],int n)
{
    cout<<"THE REVERSE OF THE ARRAY IS -";
    for(int i=n-1;i>=0;i++)
    {
        cout<<ans[i];
    }
}
void arrays(int arr[],int n)
{
    int ans[n];
    for(int i=n-1;i>=0;i--)
    {
        ans[i]=arr[i];
    }
    printarrays(ans,n);
}
int main()
{
    int n=5;
    int arr[]={1,2,3,5,4};
    arrays(arr,n);
}
#include<iostream>
using namespace std;
void arrays(int arr[],int n)
{
    int ans[n];
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n=5;
    int arr[]={1,2,3,5,4};
    arrays(arr,n);
}
#include <iostream>
using namespace std;
void printarr(int ans[], int a)
{
    cout << "the reverse of the array by swapping is :";
    for (int i = 0; i < a; i++)
    {
        cout << ans[i];
    }
}
void arrays(int arr[], int a)
{
    int ans[a];
    for (int i = a - 1; i >= 0; i--)
    {
        ans[a - i - 1] = arr[i];
    }
    printarr(ans, a);
}
int main()
{
    int a;
    cout << "Input the number of array elements you want";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    arrays(arr, a);
    return 0;
}
#include <iostream>
using namespace std;
void show(int ans[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
void arrays(int arr[], int n)
{
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[n - i - 1] = arr[i];
    }
    show(ans, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arrays(arr, n);
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void arrays(int i,int arr[],int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    arrays(i+1,arr,n);
}
int main()
{
    int n,arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arrays(0,arr,n);
}
#include <iostream>
using namespace std;
void check(int i, int arr[], int n)
{
//    if (n < n / 2)
//    {
//        return false;
//    }
    if (arr[i] == arr[n - i - 1])
    {
        return;
    }

    check(i + 1, arr, n);
}
int main()
{
    int n,i;
    int arr[n];
    cin >> n;
    cout << "ENTER THE String " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans = check(i, arr, n);
    if (ans == true)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome " << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
bool fun2(int i,string &ab)
{
    if(i>=ab.size()/2)
    {
        return true;
    }
    if(ab[i]!=ab[(ab.size())-i-1])
    {
        return false;
    }
    return fun2(i+1,ab);
}

int main()
{
    int a,b;
    string ab="abcaa";
    int i=0;
    cout<<fun2(i,ab);
    return 0;
}
#include<iostream>
using namespace std;
bool fun2(int i,string &ab)
{
    if(i>=ab.size()/2)
    {
        return true;
    }
    if(ab[i]!=ab[ab.size()-i-1])
    {
        return false;
    }
    return fun2(i+1,ab);
}
int main()
{
    int i=0;
    string ab="malayllam";
    int a =fun2(i,ab);
    if(a==1)
    {
        cout<<"THE STRING :"<<ab<<" is a PALINDROME "<<endl;
    }
    else
    {
        cout<<"THE STRING : "<<ab<<" is a not a PALINDROME "<<endl;
    }
}
#include<iostream>
using namespace std;
bool funct(int i,string &ab)
{
    if(i>=ab.size())
    {
        return true;
    }
    if(ab[i]!=ab[ab.size()-i-1])
    {
        return false;
    }
    return funct(i+1,ab);

}
int main()
{
    int i=0;
    string ab="CANACC";
    bool res=funct(i,ab);
    if(res==true)
    {
        cout<<"\nPALINDROME "<<endl;
    }
    if(res==false)
    {
        cout<<"\n Not a PALINDROME "<<endl;
    }
    return 0;
}
 #include<iostream>
 using namespace std;
 int fun2(int n)
 {
    if(n<=1)
    {
        return n;
    }
    int last=fun2(n-1);
    int slast=fun2(n-2);
    return last+slast;
 }
 int main()

 {
    int n;
    cout<<"Enter the value of N :"<<endl;
    cin>>n;
    cout<<fun2(n)<<endl;
 }
#include <iostream>
using namespace std;
int f(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}
int main()
{
    int n;
    cin >> n;
    cout << "FIBO OF " << n << " is " << f(n);
    return 0;
}
#include<iostream>
using namespace std;
bool fun2(int i,string &a)
{
    if(i>=a.size())
    {
        return true;
    }
    if(a[i]!=a[a.size()-i-1])
    {
        return false;
    }
    return fun2(i+1,a);

}
int main()
{
    string a="MALAYALAM";
    int i=0;
    bool ans=fun2(i,a);
    if(ans==1)
    {
        cout<<"PALINDROME "<<endl;
    }
    else{ cout<<"NOT A PALINDROME "<<endl;}
    return 0;
}
#include <iostream>
using namespace std;
int f(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}
int main()
{
    int n;
    cin >> n;
    cout << "THE FIBO OF : " << n << " is " << f(n);
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Precomputation
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash arr[   ]
    }




    int numbers;
    cin>>numbers;
    while(numbers--)
    {
        int number;
        cin>>number;
    }
    return 0;
}


//HASHING
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //hashcode
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }


    int num;
    cout<<"Enter the number you want to verify :";
    cin>>num;
    int verify;

    while(num--)
    {
        cin>>verify;
        cout<<hash[verify]<<endl;
    }
    return 0;

}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //hashcode
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

    int num;
    cout<<"enter the number you want to verify :"<<endl;
    cin>>num;
    int verify;
    while(num--)
    {
        cin>>verify;
        cout<<hash[verify]<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //hashcode
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }


    int num;
    cout<<"Enter the numbers you want to check :";
    cin>>num;
    int verify;
    while(num--)
    {
        cin>>verify;
        cout<<hash[verify]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    string ab;
    cout<<"Enter the string :";
    cin>>ab;

    //hashcode
    int hash[256]={0};
    for(int i=0;i<ab.length();i++)
    {
        hash[ab[i]]++;
    }

    int n;
    cout<<"How many characters you want to check with :";
    cin>>n;
    char verify;

    while(n--)
    {
        cin>>verify;
        cout<<hash[verify]<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a;
    string s;
    cout<<"Enter the string :";
    cin>>s;

    //hashcode
    int hash[26]={0};
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]-'A']++;
    }
    cout<<"enter the number of characeters you want to check with :";
    cin>>a;
    char verify;
    while(a--)
    {
        cin>>verify;
        cout<<hash[verify-'A']<<endl;
    }
}
#include<iostream>
using namespace std;
int main()
{
    string ab;
    cout<<"enter the string :";
    cin>>ab;

    //hashcode
    int hash[256]={0};
    for(int i=0;i<ab.length();i++)
    {
        hash[ab[i]]++;
    }

    int a;
    cin>>a;
    while(a--)
    {
        char ver;
        cin>>ver;
        cout<<hash[ver]<<endl;
    }
    return 0;
}

//MAPPER

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //USING MAPPER INSTEAD OF HASHCODE
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    int num;
    cin>>num;
    while(num--)
    {
        int veri;
        cin>>veri;
        cout<<mpp[veri]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //hashcode
    int hash[12]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }

    int num;
    cin>>num;
    while(num--)
    {
        int verify;
        cin>>verify;
        cout<<hash[verify]<<endl;
    }
    return 0;

}

//using mapper
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    //mappercode
    map <int,int>mpp;
    for(int i=0;i<a;i++)
    {
        mpp[arr[i]]++;
    }

    cout<<"Enter the number of options you want :";
    int num;
    cin >>num;
    while(num--)
    {
        int berify;
        cin>>berify;
        cout<<"the element has occured "<<mpp[berify]<<" times"<<endl;
    }
    //iterate in the map
    for(auto itera : mpp)
    {
        cout<<itera.first<<"-->"<<itera.second<<endl;
    }
    return 0;
}
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    int num;
    cout<<"Enter the number of verifications you need :"<<endl;
    cin>>num;
    while(num--)
    {
        int verify;
        cout<<"Enter the number you want to check ";
        cin>>verify;
        cout<<"The number of times the  "<<verify <<" repeats is "<<mpp[verify]<<endl;
    }

    //iterate map

    for(auto i:mpp)
    {
        cout<<i.first<<"-->"<<i.second<<endl;
    }
        return 0;

}*/

#include <iostream>
using namespace std;
int main()
{
    string a1;
    cin >> a1;

    int hash[26] = {0};
    for (int i = 0; i < a1.length(); i++)
    {
        hash[a1[i] - 'A']++;
    }

    int num;
    cin >> num;
    while (num--)
    {
        char verify;
        cin >> verify;
        cout << hash[verify - 'A'] << endl;
    }
    return 0;
}