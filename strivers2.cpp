/*#include<iostream>
using namespace std;


//selection sort program
void selectionsort(int arr[],int a)
{
    for(int i=0;i<=a-2;i++)
    {
        int min=i;
        for(int j=i;j<=a-1;j++)
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
int main()
{
    int a;
    cin>>a;
    int arr[a];
    //to get array input
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,a);

    cout<<"Array after sorted :"<<endl;
    //to print the sorted array;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        //swapping operation 
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}



int main()
{
    int n;
    cout<<"Enter the number of array elements :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selectionsort(arr,n); 
    cout<<"Array after the selection sort :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
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
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selectionsort(arr,n);
    cout<<"ARRAY AFTER SORTING :"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

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
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
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

    bubblesort(arr,n);

    cout<<"Array after performing bubble sort:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
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
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        //swAP;
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

}

//void selectionsort(int arr[],int n)
//{
  //  for
//}


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
    cout<<"Array after bubble sort :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Array after selection sort :";
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        //swapping
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

void bubblesort(int arr[],int n)
{
    for(int i=n-1;i>=0;i++)
    {
        for(int j=i;j<n-1;j++)
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
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
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

void bubblesort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j<n-1;j++)
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
void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1] >arr[j])
        {
            //swap
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Now input array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Selection Sort :"<<endl;
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nBubble sort :";
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    insertionsort(arr,n);
    cout<<"insertion sort :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}


#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        //swapping
        int temp=arr[min];
        arr[min]=arr[i+1];
        arr[i+1]=temp;
    }
}

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
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

void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 &&arr[j-1] > arr[j])
        {
            //swap;
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
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Selection sort :"<<endl;
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Bubble sort: ";
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Insertion sort :";
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}

#include<iostream>
using namespace std;

void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        //swap
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
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

void insertion(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 &&arr[j-1] >arr[j])
        {

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
    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
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
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
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
void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1] >arr[j])
        {
            //swap 
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
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
    selectionsort(arr,n);
    cout<<"Array after sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    insertionsort(arr,n);
    cout<<"5After insertion sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        
    }
}

#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        
    }
}
int main()
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
}
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    cout<<"Array after sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nTHE LARGEST ELEMENT IN THE ARRAY IS : "<<arr[n-1]<<endl;
    cout<<"THE SMALLEST ELEMENT IN THE ARRAY IS  : "<<arr[0]<<endl;
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;
void largest(int arr[],int n)
{
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>min)
        {
            min=arr[i];
        }
    }
    cout<<min<<endl;
}
void smallest(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[max]>arr[i])
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
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
    largest(arr,n);
    smallest(arr,n);
}
