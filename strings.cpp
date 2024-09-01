/*#include<iostream>
using namespace std;
int main()
{
    char *c="lakshman";
    int i;
    for(i=0;c[i]!='\0';i++)
    {
    }
    cout<<i<<" is the length of the string "<<endl;
    return 0;
}
//to upper case
#include<iostream>
using namespace std;
int main()
{
    char c[]="lakshman";
    int i;
    for(i=0;c[i]!='\0';i++)
    {
        c[i]=c[i]-32;
    }
    cout<<i<<endl;
    int n=i;
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<c<<" "<<"!"<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    // swapping form lower case to uppercase
    char a[] = "LaKsHmAN";
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    cout<<a<<endl;
}

//COUNT THE NUMBER OF VOWELS

#include<iostream>
using namespace std;
int main()
{
    string r;
    cin>>r;
    int vc=0;
    int i=0;
    for(i=0;r[i]!='\0';i++)
    {
        if(r[i]=='a'||r[i]=='A'||r[i]=='e'||r[i]=='E'||r[i]=='I'||r[i]=='i'||r[i]=='O'||r[i]=='o'||r[i]=='U'||r[i]=='u')
        {
            vc++;
        }
    }
    cout<<"the number of vowels count is "<<vc<<endl;
}

// count the number of words

#include <iostream>
using namespace std;
int main()
{
    char r[]="I am the light ";
    int word=0;
    for(int i=0;r[i]!='\0';i++)
    {
        if(r[i]==' '&&r[i-1]!=' ')
        {
            word++;
        }
    }
    cout<<"total number of words are "<<word+1;
}

// STRING VALIDATION
#include <iostream>
using namespace std;

int valids(char *r)
{
    int i;
    for (i = 0; r[i] != '\0'; i++)
    {
        if (!(r[i] >= 65 && r[i] <= 90) && !(r[i] >= 97 && r[i] <= 122) && !(r[i] >= 48 && r[i] <= 57))
        {
            return 0;
        }
    }
    return -1;
}
int main()
{
    char r[]="lakshman";
    char s[]="laksh?man";
    //cin >> r;
    int res;
    res=valids(r);
    if(res==0)
    {
        cout<<"invalid string "<<r<<endl;
    }
    else
    {
        cout<<"valid string "<<r<<endl;
    }
}

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    string r;
    cin >> r;
    // int word=0;
    // for(int i=0;r[i]!='\0';i++)
    // {
    //     if(r[i]==' '&&r[i-1]!=' ')
    //     {
    //         word++;
    //     }
    // }
    int l = r.length();
    cout << l << endl;
    int n;
    cin >> n;
    //const char *arr[n];
    vector<string> arr1;
    for (int i = 0; i < n; i++)
    {
        string ab;
        cin>>ab;
        arr1.push_back(ab);
    }
    vector<int> arr2;
    for(int i=0;i<n;i++)
    {
        if(arr1[i].length()==4)
        {
            arr2.push_back(50);
        }
        else if(arr1[i].length()==2)
        {
            arr2.push_back(5);
        }
    }
    int sum=0;

    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
        sum=sum+arr2[i];
    }
    cout<<"\n"<<sum<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"enter string 1 :"<<endl;
    cin>>s1;
    cout<<"enter string 2 :"<<endl;
    cin>>s2;
    vector<int> arr;
    int cnt=0;
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<s2.length();j++)
        {
            if(s1[i]==s2[j])
            {
                continue;
                i++;
            }
            else
            {
                cnt++;
                arr.push_back(s1[i]);
            }
        }
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//program to find the uncommon elements
#include <iostream>
using namespace std;
string func(string a, string b)
{
    int s1[26] = {0}, s2[26] = {0};
    for (auto &x : a)
    {
        s1[x - 97] = 1;
    }

    for (auto &y : b)
    {
        s2[y - 97] = 1;
    }
    string csd = "";
    for (int i = 0; i < 26; i++)
    {
        if(s1[i]^s2[i])
        {
            csd +=char(i+97);
        }
    }
    if(csd=="")
    {
        return "-1";
    }
    else
    {
        return csd;
    }
}
int main()
{
    string a, b;
    cin >> a;
    cout << "enter b :" << endl;
    cin >> b;
    string res = func(a, b);
    cout<<res<<" is the uncommon elements"<<endl;
    return 0;
}

#include<iostream>
using namespace std;
string finc(string a,string b)
{
    int a1[26]={0},a2[26]={0};
    string cfd="";
    for(auto &x : a)
    {
        a1[x-97]=1;
    }

    for(auto &y: b)
    {
        a2[y-97]=1;
    }
    for(int i=0;i<26;i++)
    {
        if(a1[i] ^ a2[i])
        {
            cfd += char(i+97);
        }
    }
    if(cfd!="")
    {
        return cfd;
    }
    else
    {
        return "-1";
    }
}
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    string res=finc(a,b);
    cout<<res<<endl;
}

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    int low = 0;
    int high = str.size() - 1;

    // Keep comparing characters while they are same
    while (low < high) {
        if (str[low] != str[high]) {
            return false; // not a palindrome.
        }
        low++; // move the low index forward
        high--; // move the high index backwards
    }
    return true; // is a palindrome
}

int main()
{
    string str= "abbba";
    string str1 = "abcded";

    cout << str << " is palindrome " << isPalindrome(str) << endl;
    cout << str1 << " is palindrome " << isPalindrome(str1) <<endl;
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

string func(string a,string b)
{
    int a1[26]={0},a2[26]={0};
    for(auto &x:a)
    {
        a1[x-97]=1;
    }
    for(auto &y:b)
    {
        a2[y-97]=1;
    }
    string asd="";
    for(int i=0;i<26;i++)
    {
        if(a1[i] ^ a2[i])
        {
            asd +=char(i+97);
        }
        else
        {
            return "-1";
        }
    }
    return asd;
}

int main()
{
    string a,b;
    cin>>a;
    cout<<"enter B :"<<endl;
    cin>>b;
    string res=func(a,b);
    cout<<res<<endl;
}
// IMPORTANT LEARNING
#include <iostream>
#include <vector>
using namespace std;
string finc(string a, string b)
{
    int a1[26] = {0}, a2[26] = {0};
    string cfd = "";
    for (auto &x : a)
    {
        a1[x - 97] = 1;
    }

    for (auto &y : b)
    {
        a2[y - 97] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a1[i] ^ a2[i])
        {
            cfd += char(i + 97);
        }
    }
    if (cfd != "")
    {
        return cfd;
    }
    else
    {
        return "-1";
    }
}
// C++ program to print all
// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;

// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
vector<string> arr;
void permute(string res, int l, int r, vector<string> &arr)
{

    // Base case
    if (l == r)
    {
        // cout << res << endl;
        arr.push_back(res);
    }
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(res[l], res[i]);

            // Recursion called
            permute(res, l + 1, r, arr);

            // backtrack
            swap(res[l], res[i]);
        }
    }
}

bool isPalindrome(string str, int ab)
{
    int low = 0;
    int high = ab - 1;

    // Keep comparing characters while they are same
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
void palind(vector<string> &arr, int ab)
{
    for (int i = 0; i < ab; i++)
    {
        string ad = arr[i];
        bool ax = isPalindrome(ad, ab);
        if (ax == true)
        {
            cout << "palindrome" << endl;
            break;
        }
    }
    cout << "not a palindrome " << endl;
}

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    string res = finc(a, b);
    cout << res << " is the missing substring " << endl;
    int n = res.size();
    vector<string> arr;
    permute(res, 0, n - 1, arr);
    int ab = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    palind(arr, ab);
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] > 96 && a[i] <= 122)
        {
            a[i] = a[i] - 32;
        }
        else if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
        else
        {
            a[i] = a[i];
        }
    }

    cout<<a<<" is the swapped string "<<endl;
}
#include <iostream>
using namespace std;
int main()
{
    string r;
    cin >> r;
    int hash[26] = {0};
    int i;
    for (i = 0; r[i] != '\0'; i++)
    {
        hash[r[i] - 97] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 1)
        {
            cout << hash[i] << "->" << char(i+97) << endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int longsub(string a)
{
    string sub="";
    int n=a.size();
    int len;
    int maxlen=0;
    
    for(int i=0;i<n;i++)
    {
        int hash[256]={0};
        for(int j=i;j<n;j++)
        {
            maxlen=max(maxlen,j-i+1);
            if(hash[a[i]]==1)
            {
                break;
            }
            hash[a[j]]=1;
        }
    }
    return maxlen;
}
int main()
{
    string a;
    cout<<"Enter the string"<<endl;
    cin>>a;
    cout<<"to find the longest substring :"<<endl;
    cout<<longsub(a);
}
/*#include <iostream>
#include <vector>
#include <algorithm> // for max function
using namespace std;

int longsub(string a) {
    int n = a.size();
    int maxlen = 0;

    for (int i = 0; i < n; i++) {
        vector<int> hash(256, 0); // Reset hash for each new starting point
        for (int j = i; j < n; j++) {
            if (hash[a[j]] > 0) {
                break; // Found a repeating character
            }
            hash[a[j]]++;
            maxlen = max(maxlen, j - i + 1);
        }
    }

    return maxlen;
}

int main() {
    string a;
    cout << "Enter the string:" << endl;
    cin >> a;
    cout << "The length of the longest substring without repeating characters is: " << endl;
    cout << longsub(a) << endl;
    return 0;
}

#include <iostream>
#include <algorithm> // for max function
using namespace std;

int longsub(string a) {
    int n = a.size();
    int maxlen = 0;

    for (int i = 0; i < n; i++) {
        int hash[256] = {0}; // Reset hash array for each new starting point
        for (int j = i; j < n; j++) {
            if (hash[a[j]] > 0) {
                break; // Found a repeating character
            }
            hash[a[j]]++;
            maxlen = max(maxlen, j - i + 1);
        }
    }

    return maxlen;
}

int main() {
    string a;
    cout << "Enter the string:" << endl;
    cin >> a;
    cout << "The length of the longest substring without repeating characters is: " << endl;
    cout << longsub(a) << endl;
    return 0;
}


#include<iostream>
using namespace std;
int longsubstr(string a)
{
    int n=a.size();
    int maxlen=0;
    
    for(int i=0;i<n;i++)
    {
        int hash[256]={0};
        for(int j=i;j<n;j++)
        {
            if(hash[a[j]]>0)
            {
                break;
            }
            maxlen=max(maxlen,j-i+1);
            hash[a[j]]++;
        }
    }
    return maxlen;

}
int main()
{
    string a;
    cin>>a;
    cout<<longsubstr(a);
}

#include<iostream>
using namespace std;
int longsubstr(string a)
{
    int maxi=0;
    for(int i=0;i<a.size();i++)
    {
        int hash[256]={0};
        for(int j=i;j<a.size();j++)
        {
            if(hash[a[j]]>0)
            {
                break;
            }
            maxi=max(maxi,j-i+1);
            hash[a[j]]++;
        }
    }
    return maxi;
}
int main()
{
    string a;
    cin>>a;
    cout<<longsubstr(a);
}*/
#include<iostream>
using namespace std;

bool isPalindrome(string str)
{
    int n=str.size();
    int low = 0;
    int high = n - 1;

    // Keep comparing characters while they are same
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
int main()
{
    string a;
    cin>>a;
    int ans=isPalindrome(a);
    if(ans==1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}

