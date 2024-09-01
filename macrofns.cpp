/*#include<iostream>
using namespace std;
#define WAIT cout<<"lakshman"
int main()
{
    WAIT;
    return 0;
}
#include<iostream>
using namespace std;
#define nest(a) cout<<a<<endl

int main()
{
    nest("helo ! Lakshman");
}
#include<iostream>
using namespace std;

#define wait int main()\
{\
    cout<<"hi macro"<<endl;\
}
wait

#include<iostream>
using namespace std;
int main()
{
    auto i=0;
    cout<<i<<endl;
    cout<<typeid(i).name();
}

#include<iostream>
using namespace std;

int longsubarray(int arr[],int target)
{
    int n=9;
    int left=0;
    int right=0;
    int sum=0;
    int maxlen=0;
    while(right<n)
    {
        sum=sum+arr[right];
        if(sum==target)
        {
            maxlen=max(maxlen,right-left+1);
        }
        while(left<right && sum>target)
        {
            sum-=arr[left];
            left++;
        }
        right++;
    }
    return maxlen;
}*/
#include<iostream>
using namespace std;
int lenOfLongSubarr(int A[],  int N, int K) 
{ 
    int left=0,right=0;
    int sum=0;
    int maxlen=0;
    while(right<N)
    {
        sum=sum+A[right];
        if(sum==K)
        {
            maxlen=max(maxlen,right-left+1);
        }
        while(left<right && sum > K)
        {
            sum-=A[left];
            left++;
        }
        right++;
    }
    return maxlen;
}
int main()
{
    int arr[9]={1,2,3,1,1,1,1,3,3};
    int k;
    cin>>k;
    int n=9;
    cout<<lenOfLongSubarr(arr,n,k);
}
