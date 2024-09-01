/*#include<iostream>
using namespace std;
int lowerbound(int arr[],int target,int n)
{
    //int n=arr.length();
    int low=0;
    int high=n-1;
    int ans=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<=target)
        {
            ans=arr[mid];
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,5,6,9};
    int n=sizeof(arr)/sizeof(int);

    int target;
    cin>>target;
    cout<<"the lowerbound of the array is "<<lowerbound(arr,target,n);
}*/
// first and last occurence of a element

#include <iostream>
using namespace std;

int firstoccurence(int arr[], int target, int n)
{
    int low = 0;
    int high = n - 1;
    int temp = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            temp = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return temp;
}

int lastoccurence(int arr[], int target, int n)
{
    int low = 0;
    int high = n - 1;
    int temp = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            temp = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return temp;
}
int main()
{
    int arr[] = {2, 8, 8, 8, 8, 8, 11, 13};
    int target;
    cin >> target;
    int n = sizeof(arr) / sizeof(int);
    int a= firstoccurence(arr, target, n);
    int b= lastoccurence(arr, target, n);
    cout << "THe first occurence of the element is " << firstoccurence(arr, target, n) << " position" << endl;
    cout << "The last occurence of the element is " << lastoccurence(arr, target, n) << " position" << endl;
    // to find the the number of occurences of the element 

    cout<<(a+b)-1<<" is the number of occurences of the element "<< target<<endl;
    return 0;
}
