/*#include<iostream>
using namespace std;
void largest(int arr[],int n)
{
    int lar=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    cout<<"THe largest is "<<lar<<endl;
}
void smallest(int arr[],int n)
{
    int small=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    cout<<"SMALLEST : "<<small;
}
void secondlar(int arr[],int n)
{
    int lar=arr[0];
    int slar=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            slar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>slar)
        {
            slar=arr[i];
        }
    }
    cout<<"SECOND LARGEST IS THE "<<slar;
}
bool checksort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
        else{
            return false;
        }
    }
    return true;

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
    //largest(arr,n);
    //smallest(arr,n);
    //secondlar(arr,n);
    cout<< checksort(arr,n);
}
#include<iostream>
#include<vector>
using namespace std;
vector<int> performsort(vector<int> &arr,int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
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
    arr=performsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int abc(vector<int> &arr,int n)
{
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it : mpp)
    {
        if(it.second>(n/2))
        {
            return it.first;
        }
    }
    return -1;
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
    cout<<abc(arr,n);
}

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int sortt(vector<int> &arr,int n)
{
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second>n/2)
        {
            return it.first;
        }
    }
    return -1;
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
    cout<<sortt(arr,n);
    return 0;
}
//kadence algorithm
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int kadence(vector<int> &arr,int n)
{
    int start=0;
    int ansStart = -1, ansEnd = -1;
    int sum=0;
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum+=arr[i];
        if(sum>max)
        {

            ansStart=start;
            ansEnd=i;
            max=sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"for printing the max subarray :"<<endl;
    for(int i=ansStart;i<=ansEnd;i++)
    {
        cout<<arr[i]<<" ";
    }
    return max;
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
    cout<<kadence(arr,n)<<endl;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums,int n)
    {
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            if(sum<0)
            {
                sum=0;
            }
            if(sum>maxSum)
            {
                maxSum=sum;
            }
        }
        return maxSum;
    }
};

int main()
{
    Solution ab;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<ab.maxSubArray(nums,n);
    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int stocks(vector<int> &arr,int n)
{
    int profit=0;
    int mini=arr[0];
    int cost=0;
    for(int i=1;i<n;i++)
    {
        cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    return profit;
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
    cout<<stocks(arr,n);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int kadence(vector<int> &arr,int n)
{
    int sum=0;
    int start=0;
    int max=arr[0];
    int arrstart=-1,arrend=-1;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum=sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
        if(max<sum)
        {
            arrstart=start;
            arrend=i;
            max=sum;
        }

    }
    for(int i=arrstart;i<=arrend;i++)
    {
        cout<<arr[i]<<" ";
    }
    return max;
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
    cout<<"maxsum"<<kadence(arr,n);
    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int maxstox(vector<int> &arr,int n)
{
    int mini=arr[0];
    int profit=0;
    int cost=0;
    for(int i=1;i<n;i++)
    {

        cost=arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,cost);
    }
    return profit;
}
int main()
{
    cout<<"best time to buy and sell stocks ";
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxstox(arr,n);
    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> nextper(vector<int> &arr,int n)
{
    int index=-1;
    //find breakpoint in the array
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            index=i;
            break;
        }
    }
    for(int i=n-1;i>index;i--)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[index]);
        }
    }


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
    arr=nextper(arr,n);

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int> leader(vector<int> &arr)
{
    int maxi=INT_MIN;
    int n=arr.size();
    vector<int> temp;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            temp.push_back(arr[i]);
        }
        maxi=max(arr[i],maxi);
    }
    sort(temp.begin(),temp.end());
    return temp;
}
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> result=leader(arr);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int kadence(vector<int> &arr,int n)
{
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum<0)
        {
            sum=0;
        }
        if(max<=sum)
        {
            max=sum;
        }
    }
    return max;
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
    cout<<kadence(arr,n);
}

#include<iostream>
#include<vector>
#include<set>
using namespace std;
int consec(vector<int> &arr,int n)
{
    if(n==0)
    {
        return 0;
    }
    int longest=1;
    unordered_set<int> st;

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
    consec(arr,n);
}
#include<iostream>
#include<vector>
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
    int sum=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"the sum of numbers is :"<<sum;
    cout<<"the minimum element :"<<min;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
};
int main()
{
    vector<int> arr ={2,5,8,7};
    Node* y= new Node(arr[0],nullptr);
    cout<<y->data;
    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int findsubarrays(vector<int> & arr,int k)
{
    int cnt=0,sum=0;
    map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
        int remove =sum-k;
        cnt+=mpp[remove];
        mpp[sum]+=1;
    }
    return cnt;
}
int main()
{
    vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
    int k;
    cin>>k;
    cout<<findsubarrays(arr,k);
    return 0;
}

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int findsubarrays(vector<int> & arr,int k)
{
    int cnt=0,sum=0;
    map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<arr.size();i++)
    {
        sum=sum+arr[i];
        int remove=sum-k;
        cnt+=mpp[remove];
        mpp[sum]+=1;
    }
    return cnt;
}
int main()
{
    vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
    int k;
    cin>>k;
    cout<<findsubarrays(arr,k);
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;
int ncr(int row, int col)
{
    int result = 1;
    for (int i = 0; i < col; i++)
    {
        result = result * (row - i);
        result = result / (i + 1);
    }
    return result;
}
void entirerow(int row)
{
    int result = 1;
    cout << result << " ";
    for (int i = 1; i < row; i++)
    {
        result = result * (row - i);
        result = result / (i);
        cout << result << " ";
        // cout<<"\n";
    }
}
// vector<int> entiretriange(int row)
// {
//     int long long ans = 1;
//     vector<int> ansrow;
//     ansrow.push_back(1);
// }
void entiretriange(int row)
{
    int long long ans = 1;
    cout<<ans<<endl;
    for(int i=1;i<=row;i++)
    {
        entirerow(i);
        cout<<endl;
    }

}
int main()
{
    int n;
    int row;
    int column;
    cout << "input the row : ";
    cin >> row;
    cout << "input the col : ";
    cin >> column;
    cout << "output : for " << row << " row and " << column << " column is : " << ncr(row - 1, column - 1) << endl;
    // cout<<"\n";
    cout << "so the entire row in a pascal traingle will be : " << endl;
    entirerow(row);
    entiretriange(row);
    return 0;
}

// majority element floor(n/3)
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> maj(vector<int> arr, int n)
{
    vector<int> list;
    int length = arr.size();
    map<int, int> mpp;
    // int ele=(length/3)+1;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        if (mpp[arr[i]] == length/3)
        {
            list.push_back(arr[i]);
        }
        if(list.size()==n/3)
        {
            break;
        }
    }
    return list;
}
int main()
{
    int n;
    cout<<"enter :"<<endl;
    cin >> n;
    int x;
    cout<<"enter the no. of elements in array"<<endl;
    vector<int> arr= {1, 1, 1, 1, 2, 2, 3, 3, 3};
    arr=maj(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//pairs in an array 
#include<iostream>
using namespace std;

void setarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
        cout<<endl;
    }
}
void substrg(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //setarr(arr,n);
    substrg(arr,n);
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
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res *10 + arr[i]%10;
    }
    cout<<res<<endl;
    if(res%10==0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}