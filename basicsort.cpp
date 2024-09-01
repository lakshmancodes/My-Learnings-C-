/*#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swapping operartion
        int temp;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubble(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void insertionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])  //since j-1 we should have j greater than 1 else the index will become 0
        {
            int temp = arr[j];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
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
    selection_sort(arr, n);
    cout << "Array after sorting " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " \nNEW LINE";
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " + ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high)
    {
        if(arr[low]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
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
    vector <int> arr(n);
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
void largest(vector<int> arr)
{
    int temp=arr[0];
    int len=arr.size();
    for(int i=0;i<len;i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
    cout<<"THE LARGEST :"<<temp;
    int slar=-1;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>=slar && arr[i]>=temp)
        {
            slar=arr[i];
        }
    }
    cout<<"SECOND LARGEST = "<<slar;
}
void secondlar(vector<int> arr)
{

}
void large(vector<int> arr,int n)
{
    int lar=arr[0];
    int seclar=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            seclar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>seclar)
        {
            seclar=arr[i];
        }
    }
    cout<<"SECLAR : "<<seclar;
}
int main()
{
    vector<int> arr={1,2,45,4,35,5};
    largest(arr);
    secondlar(arr);
}

void largest(vector<int> arr)
{
    int temp=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    cout<<" NEW "<<temp;
    int slar=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>slar && arr[i]!=temp)
        {
            slar=arr[i];
        }
    }
    cout<<"SLAR : "<<slar<<endl;
    int n;
    cin>>n;
    large(arr,n);
}
#include<iostream>
#include<vector>
using namespace std;
int check(vector<int> arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
        else
        {
            return false;
        }
    }
    return true;
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
    check(arr,n);

}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={1,2,2,3,4,4,3,1,2};
    int len=arr.size();
    vector<int> temp;
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            temp.push_back(arr[i]);

            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        cout<<temp[i]<<" ";
    }
}*/
/*#include<iostream>
#include<vector>
using namespace std;
void leftshift(int arr[],int n,int d)
{
    d=d%n;
    int temp[d];
    for(int i=0;i<n;i++)
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
    cout<<"Enter the no.of array elements :"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Enter the number of shift places :"<<endl;
    cin>>d;
    cout<<"\nARRAY BEFORE SHIFTS : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    leftshift(arr,n,d);
    cout<<"\nARRAY AFTER SHIFTS : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }


}
void leftrotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
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
    int d;
    cin>>d;
    leftrotate(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector <int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int min =i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min =j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }


}
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void rotatefun(int arr[],int n,int d)
{
     d=d%n;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]= arr[i];
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
void reverse(int arr[],int start,int end)
{
    while(start<=end)
    {
        int tem=arr[start];
        arr[start]=arr[end];
        arr[end]=tem;
        start++;
        end--;
    }
}
void optrotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
void nonzero(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==0)
       {
            j=i;
            break;
       }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
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
    cout<<"rotate :"<<endl;
    int d;
    cin>>d;
    //rotatefun(arr,n,d);
    //optrotate(arr,n,d);
    nonzero(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void non(int arr[],int n)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
}
int linearsearch(int arr[],int n,int nn)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==nn)
        {
            return i;
        }
    }
    return -1;
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
    //non(arr,n);
    int nn;
    cin>>nn;
    cout<<linearsearch(arr,n,nn);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
vector <int> (vector <int> arr1,vector<int> arr2 ,int n,int m)
{

}

int main()
{
    int n;
    cout<<"Set 1:";
    cin>>n;
    vector <int> arr1(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Set 2 :";
    int m;
    cin>>m;
    vector <int> arr2(m);
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    unionop(arr1,arr2,n,m);

}
vector<int> unionarray(vector<int> arr1,vector<int> arr2)
{
    int i=0;
    int j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> temp;
    while(i<n1 && j<n2 )
    {
        if(arr1[i]<=arr2[j])
        {
            if(temp.size()==0||temp.back()!=arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if(temp.size()==0||temp.back()!=arr2[j])
            {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1)
    {
        if(temp.size()==0 || temp.back()!=arr1[i])
        {
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n2)
    {
        if(temp.size()==0 ||temp.back()!=arr2[j])
        {
            temp.push_back(arr2[j]);
        }
        j++;
    }
    return temp;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr1={1, 2, 4, 5, 6};
    vector<int> arr2={2,3,4,55,100};
    vector<int> result=unionarray(arr1,arr2);
    for(int i:result)
    {
        cout<<i<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void insteraa(vector<int> arr1,vector<int> arr2)
{
    for(int i=0;i<arr1.size();i++)
    {
        for(int j=0;j<arr2.size();j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i];
            }
        }
    }
}
vector <int> insect(vector<int> &arr1,int n,vector<int> &arr2,int m)
{
    vector<int> ans;
    int vis[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j] && vis[j]==0)
            {
                ans.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr2[j]>arr1[i])
            {
                break;
            }
        }
    }
    return ans;
}
vector<int> optinster(vector<int> &arr1,int n,vector<int> &arr2,int m)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout<<"input arraay 1 :";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    //insect(arr1,n,arr2,m);
    vector<int> result=optinster(arr1,n,arr2,m);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
vector<int> missing(vector<int> &arr,int n)
{
    int xor1=0;
    int xor2=0;
    int N=n-1;
    for(int i=0;i<N;i++)
    {
        xor1=xor1 ^ (i+1);
        xor2=xor2 ^ arr[i];
    }
    xor1= xor1 ^ n;
    return xor1 ^ xor2;
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
    vector<int> result=missing(arr,n);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int consec1(vector<int> &arr,int n)
{
    int maxin=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count++;
            maxin=max(maxin,count);
        }
    }
    return maxin;
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
    cout<<"THE MAX CONSECUTIVE NUMBERS ARE :" <<consec1(arr,n);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int consec(vector<int> &arr) {
    int xorr = 0;
    for(int i = 0; i < arr.size(); i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << consec(arr) << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int consec(vector<int> &arr)
{
    int xxor=0;
    for(int i=0;i<arr.size();i++)
    {
        xxor=xxor^arr[i];
    }
    return xxor;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        arr.push_back(m);
    }
    cout<<"the number that appears once : " <<consec(arr);
    return 0;
}
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    int n=min(a,b);
    while(n>0)
    {
        if(n==1)
        {
            return 1;
        }
        if(a%n==0 && b%n==0)
        {
            break;
        }
        n--;
    }
    return n;
}
int main()
{
    int a,b;
    cin >> a;
    cout << "enter b :" << endl;
    cin >> b;
    cout << gcd(a, b) << endl;
}

#include<iostream>
using namespace std;
int gcd(int a ,int b)
{
    int n=min(a,b);
    while(n>0)
    {
        if(a%n==0 && b%n==0)
        {
            break;
        }
        n--;
    }
    return n;
}
int main()
{
    int a,b;
    cin>>a;
    cout<<"enter b"<<endl;  
    cin>>b;
    cout<<gcd(a,b);
}*/

#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void selectionsort(int arr[],int n)
{
    
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
    bubblesort(arr,n);
    selectionsort(arr,n);
    cout<<"\nArray after Bubble Sort :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}