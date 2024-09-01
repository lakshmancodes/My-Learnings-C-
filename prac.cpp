/*int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if((2*n)==sum)
    {
        cout<<"perfect number ";
    }
    else{
        cout<<"Not a perfect number"<<endl;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"it is a prime number"<<endl;
    }
    else{
        cout<<"not a prime "<<endl;
    }
    return 0;
}
//reverse a number
int main()
{
    int n;
    cin>>n;
    int rev;
    while(n>0)
    {
        rev=n%10;
        n=n/10;
        cout<<rev;
    }
}
//to find the armstrong number
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int m=n;
    int rev;
    int cube;
    int tot=0;
    while(n>0)
    {
        rev=n%10;
        n=n/10;
        cube=(rev * rev) * rev;
        tot=tot+cube;
    }
    cout<<"the sum of consecutive cube numbers is "<<tot<<endl;
    if(tot==m)
    {
        cout<<"THe number "<< m<< " is an armstrong number "<<endl;
    }
    else{
        cout<<"the number is not an armstrong number "<<endl;
    }
    return 0;
}

//to reverse a number
int main()
{
    int n;
    cin>>n;
    int rev;
    int r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }

    cout<<rev<<endl;
}

int main()
{
    int n;
    cin>>n;
    int rev=0;
    int r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    cout<<rev;
}

//selection sort
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);

    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

int gcd(int a, int b)
{
    int res=min(a,b);
    if(res==0)
    {
        return 0;
    }
    while(res>0)
    {
        if(a%2==0 && b%2==0)
        {
            break;
        }
        else
        {
            res=0;
        }
    }
    return res;
}
int main()
{
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the 2nd number"<<endl;
    cin>>b;
    cout<<gcd(a,b);
}
#include<iostream>
using namespace std;
int rev(int n)
{
    int rev=0;
    int r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    return rev;
}



int gcd(int a,int b)
{
    int asd=min(a,b);
    while(asd>0)
    {
        if(asd%2==0)
        {
            break;
        }
        else
        {
            asd=0;
        }
    }
    return asd;
}
int primes(int n)
{
    int res;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(i%n==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        res=1;
    }
    else
    {
        res=0;
    }
    return res;
}
void insertionsort(int arr[],int n)
{
    int n=6;
    for(int i=0;i<n;i++)
    {
        int j=0;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp=arr[j];
            arr[j]=
        }
    }
}
int main()
{
    //program to reverse a number
    int n;
    cin>>n;
    cout<<rev(n)<<endl;
    cout<<gcd(10,20)<<endl;
    cout<<primes(n);
    int arr[]={3,2,1,4,6,2};
    insertionsort(arr);
}

#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
    }
}

int main()
{
    int arr[] = {2, 3, 41, 2, 31, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << n << endl;
    insertionsort(arr, n);
    cout << "array after sorting " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void arrmerge(vector<int> &arr,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<high;i++)
    {
        arr[i]=temp[i-low];
    }
}   


void mergesort(vector<int> &arr,int low,int high)
{

    if(low>=high)
    {
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,high);
    arrmerge(arr,low,mid,high);
    
}




int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"array after sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;
void mergee(vector<int> &arr,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[mid])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    if()
    {

    }

}
void mergesort(vector<int> &arr,int low,int high)
{
    if(low<=high)
    {
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,high);
    mergee(arr,low,mid,high);

}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
}

int fun(int mid,int n)
{
  int ans=mid;
  while(n>0)
  {
    ans=ans*mid;
    n--;
  }
  return mid;
}


int NthRoot(int n, int m) 
{
  int a=1;
  for(int i=1;i<=n;i++)
  {
    a=a*n;
  }
  if(a>m)
  {
    return -1;
  }
  int low=1;
  int high=n;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(mid)
  }

  int low=1;
  int high=m;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(fun(mid,n)==m)
    {
      return mid;
    }
    else if(fun(mid,n)<m)
    {
      low=mid+1;

    }
    else
    {
      high=mid-1;
    }
  }
  return -1;
}

int func(int mid,int n,int m)
{
  long long ans=1;
  for(int i=1;i<=n;i++)
  {
    ans=ans*mid;
    
    if(ans>m)
    {
      return 2;
    }
  }
  if(ans==m)
  {
    return 1;
  }
  return 0;
}

int NthRoot(int n, int m) 
{
  int low=1;
  int high=m;
  while(low<=high)
  {
    int mid=(low+high)/2;
    int midn=func(mid,n,m);
    if(midn==1)
    {
      return mid;
    }
    else if(midn==0)
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return -1;
}

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout <<"VALUE OF X :" <<x << endl;
    cout <<"VALUE OF y"<< y << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=2;
    vector<int> arr;
    while(a<=n)
    {
        for(int j=2;j<;j++)
        {
            if(a%j==0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            arr.push_back(a);
            continue;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<" ";
    }
    return 0;
}

//replace index with the corresponding value

#include<iostream>
#include<vector>
using namespace std;
vector <int> fun1(int arr[],int n)
{
    vector<int> newbee={-1};
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        newbee[temp]=i;
    }
    return newbee;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"|"<<" ";
    }

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
    }
    vector<int> result;
    result=fun1(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}*/

//function call by referece working
#include<iostream>
using namespace std;
void fun(const int &a,int &b)
{
    cout<<"value of x inside void "<<a<<endl;
    b++;
    cout<<"value of y inside void "<<b<<endl;
    //a++;
}
int main()
{
    int x,y;
    x=10;
    y=20;
    fun(x,y);
    cout<<"values of x and y in main "<<x<<" "<<y<<endl;
}