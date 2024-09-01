/*#include<iostream>
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
    for(int )
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}
void sortarr(int arr[],int n)
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
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    sortarr(arr,n);
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a=(arr[i]*10)+arr[i];
        }
        else
        {
            b=(arr[i]*10)+arr[i];
        }
    }
    cout<<a+b<<endl;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    string a = "";
    string b = "";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a += to_string(arr[i]);
        } else {
            b += to_string(arr[i]);
        }
    }
    cout << a << endl; 
    cout << b << endl;
    int start = stoi(a);
    int end = stoi(b);
    cout << (start + end) << endl;
    return 0;
}*/
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
    
}