/*#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        //swwap
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swapp
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            //swap
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
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
    //selectionsort(arr,n);
    //bubblesort(arr,n);
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//MERGE SORT
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
        
        if(arr[left] <=arr[right])
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
    //now assign the temp array to arr
    for(int i=low;i<=high;i++)
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
    mergesort(arr,0,n-1);
    cout<<"Array after mergesort :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//quicksort
#include<iostream>
#include<vector>
using namespace std;
int func(vector<int> &arr,int low,int high)
{
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(arr[i]<=pivot && i<=high-1)
    {
        i++;
    }
    while(arr[j]>pivot && j>=low+1)
    {
        j--;
    }
    if(i<j)
    {
        swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}
void quicksort(vector <int> &arr,int low,int high)
{
    if(low<high)  ///we will sort the array only if there is more than 1 element so like a start condition
    {
        int partiindex=func(arr,low,high);
        quicksort(arr,low,partiindex-1);
        quicksort(arr,partiindex+1,high);
    } 
}
vector<int> quick(vector<int> &arr,int n)
{
    quicksort(arr,0,arr.size()-1);
    return arr;
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
    arr=quick(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
//quicksort
#include<iostream>
using namespace std;
void largestt(int arr[],int n)
{
    int large=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=large)
        {
            large=arr[i];
        }
    }
    cout<<large<<" is the largest";
}
void second(int arr[],int n)
{
    int large=arr[0];
    int slar=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=large)
        {
            slar=large;
            large=arr[i];
        }
        else if(arr[i]<large && arr[i]>slar)
        {
            slar=arr[i];
        }
    }
    cout<<slar<<"is the second largest"<<endl;
}
void secondd(int arr[],int n)
{
    int lar=arr[0];
    int slar=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=lar)
        {
            lar=arr[i];
            slar=lar;
        }
        else if(arr[i]<lar && arr[i]>slar)
        {
            cout<<"the second largest is"<<slar<<endl;
        }
    }
}
void rotate(int arr[],int n,int times)
{
    times=times%n;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=times;i<n;i++)
    {
        arr[times-i]=temp[times];
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
    largestt(arr,n);
    second(arr,n);
    secondd(arr,n);
    cout<<"enter the number of times you want to rotate the array :"<<endl;
    int times;
    cin>>times;
    rotate(arr,n,times);
}