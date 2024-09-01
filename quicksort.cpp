/*#include<iostream>
#include<vector>
using namespace std;

int partfunc(vector <int> &arr,int low,int high)
{
    int pivot=arr[0];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=arr[pivot] && i<=high-1)
        {
            i++;
        }
        while(arr[j]>arr[pivot] && i>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector <int> &arr,int low,int high)
{
    if(low<high)//minimum size of the array should be more than 1
    {
        int partindex=partfunc(arr,low,high);
        quicksort(arr,low,partindex-1);
        quicksort(arr,partindex+1,high);
    }
}

vector <int> qs(vector <int> arr)
{
    quicksort(arr,0,arr.size()-1);
    return arr;
}
int main()
{
    vector <int> arr={7,6,5,4,3,2,1};
    int n=arr.size();
    cout<<"Array before sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    arr=qs(arr);
    cout<<"Array after sorting :"<<endl;

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"  ";
    }
    quicksort(arr,0,n-1);
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

int partfunc(vector <int> &arr, int low,int high)
{
    int i=low;
    int j=high;
    int pivot =arr[low];
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && i>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
    }
    return j;
}

void quicksort(vector <int> &arr,int low,int high)
{
    if(low<high)
    {
        int pindex=partfunc(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}
vector <int> quick(vector <int> arr)
{
    quicksort(arr,0,arr.size()-1);
    return arr;
}


int main()
{
    vector <int> arr={9,8,7,6,4,3,2,1};
    int n=arr.size();
    cout<<"Array before QUICKSORT : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    arr=quick(arr);
    cout<<"\nARRAY AFTER QUICKSORT :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int partfunc(vector <int> &arr, int low,int high)
{
    int i=low;
    int j=high;
    int pivot =arr[low];
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && i>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
    }
    return j;
}

void quicksort(vector <int> &arr,int low,int high)
{
    if(low<high)
    {
        int pindex=partfunc(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}
vector <int> quick(vector <int> arr)
{
    quicksort(arr,0,arr.size()-1);
    return arr;
}


int main()
{
    vector <int> arr={9,8,7,6,4,3,2,1};
    int n=arr.size();
    cout<<"Array before QUICKSORT : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    arr=quick(arr);
    cout<<"\nARRAY AFTER QUICKSORT :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int func(vector<int> &arr,int low,int high)
{
    int i=low;
    int j=high;
    int pivot =arr[low];
    while(i<j)
    {
        while(pivot>=arr[i])
        {
            i++;
        }
        while(pivot<arr[j])
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
    }
}
void quicksort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        return;
    }
    int pindex=func(arr,low,high);
    quicksort(arr,low,pindex-1);
    quicksort(arr,pindex+1,high);

}
vector<int> quick(vector<int> arr,int n)
{
    quicksort(arr,0,n-1);
    return arr;
}
int main()
{
    int n;
    vector <int> arr(10);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr=quick(arr,n);
}
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (low < high)
    {
        if (arr[left] <= mid && arr[right]<=high)
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
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }

}

void mergesort(vector<int> &arr, int low, int high)
{
    if (low>=high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int functionn(vector<int> &arr,int low,int high)
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
void quicksort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int partindex=functionn(arr,low,high);
        quicksort(arr,low,partindex-1);
        quicksort(arr,partindex+1,high);
    }
}

vector<int> fun(vector<int> &arr,int n)
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
    arr=fun(arr,n);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}*/