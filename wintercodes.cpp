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
        while (j > 0 && arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j + 1] = arr[j];
            arr[j] = temp;
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
}*/
