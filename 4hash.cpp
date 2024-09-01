#include <iostream>
using namespace std;
/*void check(int arr[],int n)
{
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] +=1;
    }
    for(int i=0;i<n;i++)
    {
        if(hash[i]>=1)
        {
            cout<<hash[i]<<" ";
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
    check(arr,n);
}

int main()
{
    string r;
    cin >> r;
    int i;
    int hash[26] = {0};
    for (i = 0; r[i] != '\0'; i++)
    {
        hash[r[i] - 'a']++;
    }
    int q;
    while (q--)
    {
        char c;
        cin >> c;
        cout<<hash[c-'a'];
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int a=n;
    int r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=(sum*10)+r;
    }
    cout<<sum;
}

int gcd(int a,int b)
{
    int c=min(a,b);
    if(c==1)
    {
        return c;
    }
    while(c>0)
    {
        if(a%c==0 && b%c==0)
        {
            break;
        }
        else
        {
            c=0;
        }
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<gcd(a,b)<<endl;
}*/
int gcd(int a,int b)
{
    int c=min(a,b);
    if(c==0)
    {
        return c;
    }
    while()
}
int main()
{
    int a,b;
    cin>>a;
    cout<<"enter b :"<<endl;
    cin>>b;
    cout<<gcd(a,b);
}