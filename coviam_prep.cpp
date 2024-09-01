// reversing a number

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int revnum=0;
    while(n>0)
    {
        int last_dig=0;
        last_dig =n%10;
        n=n/10;
        revnum=(revnum*10)+last_dig;
    }
    cout<<revnum;
}
// two sum problem
#include <iostream>
#include <map>
using namespace std;

void brutetwosum(int arr[], int n, int target)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
            }
            else
            {
                cnt++;
            }
        }
    }
    if (cnt==0)
    {
        cout << "-1,-1" << endl;
    }
}
void bettertwosum(int arr[], int n, int target)
{
    map<int, int> mpp;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int complement = target - num;
        if (mpp.find(complement) != mpp.end())
        {
            cout << mpp[complement] << " " << i << endl;
            cnt++;
        }
        mpp[arr[i]] = i;
    }
    if (cnt == 0)
    {
        cout << "better -> -1,-1" << endl;
    }
}
int main()
{
    int n;
    cout << "enter the size of the array :" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target you wish to get :" << endl;
    int target;
    cin >> target;
    brutetwosum(arr, n, target);
    bettertwosum(arr, n, target);
}
//reverse a number
#include<iostream>
using namespace std;
int reverse(int num)
{
    int sign=1,rev=0;
    if(num<0)
    {
        sign=-1;
    }
    num=abs(num);
    while(num>0)
    {
        int rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;
    }
    cout<<rev*sign<<endl;
    return rev*sign;
}
void palindrome(int n)
{

}
int main()
{
    int n;
    cin>>n;
    int a= reverse(n);
    palindrome(n);
}
#include<iostream>
using namespace std;
int main()
{
    int m, n, sum;
    cout << "Enter the values of m and n :" << endl;
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
    }
    cout << "GCD OF TWO NUMBERS" << m << endl;
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"all the factors of n are "<<n<<endl;
    for(int i=0;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(n/i!=i)  //this is for the second factor
            {
                cout<<n/i<<endl;
            }
        }
    }
}

//all the factors of a number in minimal TC
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    vector<int> new_arr;
    for(int i=0;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            new_arr.push_back(i);
            if(n/i!=i)
            {
                cout<<n/i<<" ";
                new_arr.push_back(n/i);
            }
        }
    }
    cout<<"\nTo get the sorted array of facrtors"<<endl;
    sort(new_arr.begin(),new_arr.end());
    for(int i=0;i<new_arr.size();i++)
    {
        cout<<new_arr[i]<<" ";
    }
}

//prime numbers are number which exactly has two factors;

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
            if(n/i!=i)
            {
                cnt++;
            }
        }
    }
    if(cnt==2)
    {
        cout<<"the number "<< n <<" is a prime number"<<endl;
    }
    else
    {
        cout<<" the number "<< n <<" is not a prime number "<<endl;
    }
}
//GCD of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i<<" ";
            break;
        }
    }
}
//GCD of two numbers
#include <iostream>
using namespace std;
int main()
{
    int m, n, sum;
    cout << "Enter the values of m and n :" << endl;
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
    }
    cout << "GCD OF TWO NUMBERS" << m << endl;
    return 0;
}

//seclection sort
#include<iostream>
using namespace std;
void selectionsort(int arr[])
{
    for(int i=0;i<5;i++)
    {
        int min=i;
        for(int j=i;j<5;j++)
        {
            if(arr[j]<arr[min])
            {
                min=arr[j];
            }
        }
        //swap
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main()
{

    int arr[5]={5,4,3,2,1};
    selectionsort(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
//bubble sort
#include<iostream>
using namespace std;
void bubblesort(int arr[])
{
    for(int i=4;i>=0;i--)
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
    int arr[]={5,4,3,2,1,0};
    bubblesort(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void insertionsort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int j=i;
        while(j>0 && arr[j]>arr[j+1])
        {
            //swap
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
    }
}
int main()
{
    int arr[]={1,2,46,5,3,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
// MERGE SORT

#include <iostream>
#include<vector>


using namespace std;
void merge(vector<int> &arr,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<arr[right])
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
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    mergesort(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
//second largest element 
#include<iostream>
using namespace std;
int secondlar(int arr[],int n)
{
    int lar=arr[0];
    int slar;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            slar=lar;
            lar=arr[i];
        }
        else if(lar>arr[i] && arr[i]>slar)
        {
            slar=arr[i];
        }

    }
}
int main()
{
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    secondlar(arr,n);
}
#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int lar=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    return lar;
}
int secondlar(int arr[],int n,int lar)
{
    int slar=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>slar && arr[i]!=lar)
        {
            slar=arr[i];
        }
    }
    return slar;
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
    int lar=largest(arr,n);
    cout<<lar<<endl;
    int slar=secondlar(arr,n,lar);
    cout<<"the second largest element :"<<slar<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,21,441,2,3};
    int lar=arr[0];
    int slar=INT16_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>lar)
        {
            slar=lar;
            lar=arr[i];
        }
        else if(arr[i]> slar && slar< lar)
        {
            slar=arr[i];
        }
    }
    cout<<slar;
}
//remove duplicates from an array 
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> st;
    int arr[6]={1,100,20,3,4,4};
    for(int i=0;i<6;i++)
    {
        st.insert(arr[i]);
    }
    cout<<"to display all the elements of the set "<<endl;
    int index=0;
    for(auto it: st)
    {
        arr[index]=it;
        index++;
    }
    for(int i=0;i<index;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={0,1,1,2,3,3,4};
    int i=0;
    int siz=0;
    for(int j=1;i<7;j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
        cout<<"new ->"<<i<<" "<<endl;
        
    }
}
//rotate the array d places
#include<iostream>
using namespace std;
void leftrotate(int arr[],int d, int n)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[8]={1,2,3,4,5,6,7,8};
    int d;
    cin>>d;
    d=d%n;
    cout<<"the original array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftrotate(arr,d,n);
    
    cout<<"array after left rotate :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//bruteforce to find the element that appears once
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,1,2,2,3,3,4,4};

    for(int i =0;i<8;i++)
    {
        int cnt=0;
        int num=arr[i];
        for(int j=0;j<8;j++)
        {
            if(num==arr[j])
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            cout<<num<<endl;
            break;
        }
1
    }
}
//better soln using hashing to find the element that appears once
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,1,2,3,3,4,4};
    //find the max element 
    int maxi=arr[0];
    for(int i=0;i<7;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
}

//remove duplicates from an array

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> st;
    int arr[5]={1,22,3,4,4};
    for(int i=0;i<5;i++)
    {
        st.insert(arr[i]);
    }
    cout<<"to print all the elements from the set"<<endl;
    int index=0;
    for(auto it: st)
    {
        arr[index]=it;
        index++;
    }
    for(int i=0;i<index;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/

#include<iostream>
#include<stack>
using namespace std;
bool validparenth(string a)
{
    stack<char> st;
    for(auto it : a)
    {
        if(it=='(' ||it=='{'||it=='[')
        {
            st.push(it);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else
            {
                char ab=st.top();
                if(ab=='(' && it==')' || ab=='{' && it=='}' || ab=='[' && it==']')
                {
                    continue;
                }
            }
        }

    }
    return st.empty();
}
int main()
{
    string a;
    cout<<"enter a string "<<endl;
    cin>>a;
    bool res= validparenth(a);
    if(res==true)
    {
        cout<<"it is a valid string "<<a;
    }
    else
    {
        cout<<"it is not a valid string"<<a;
    }
}
