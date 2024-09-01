/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter valid two numbers to perform division operation :" << endl;
    cin >> a;
    cin >> b;
    if (b == 0)
    {
        cout << "Invalid input :(" << endl;
    }
    else
    {
        cout << "A/B=" << a / b << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout << "Enter the time range between 0 and 23 :" << endl;
    cin >> hour;
    if ((hour >= 9) && (hour <= 18))
    {
        cout << "It is working hour" << endl;
    }
    else
    {
        cout << "it is liesure time " << endl;
    }
    return 0;
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age :" << endl;
    cin >> age;
    if ((age >= 18 && (age <= 50)))
    {
        cout << "YOUNG AgE " << endl;
    }
    else if ((age < 18 && (age >= 5)))
    {
        cout << "You are a child" << endl;
    }
    else
    {
        cout << "You are old" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "A program to check the greatest of 3 numbers " << endl;
    cout << "\nenter value for a :";
    cin >> a;
    cout << "\nEnter value for b :";
    cin >> b;
    cout << "\nEnter value for c : ";
    cin >> c;
    if ((a > b) && (a > c))
    {
        cout << "A is the greatest " << endl;
    }
    else
    {
        if (b > c)
        {
            cout << "B is the greatest " << endl;
        }
        else
        {
            cout << "C is the greatest" << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d;
    cout << "enter values of a,b and c :" << endl;
    cin >> a >> b >> c;
    d = ((b * b) - (4 * a * c));
    if (d == 0)
    {
        cout << "Roots are real and equal " << endl;
    }
    else if (d > 0)
    {
        cout << "roots are real and unequal" << endl;
        cout << (-b / (2 * a));
    }
    else
    {
        cout << "Roots are imaginary";
    }
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    // program to display short circuit
    int a, b, i;
    cout << "enter the values of a and b : " << endl;
    cin >> a >> b;
    i = 0;
    if (a < b && (i++) < b)
    {
        cout << i << endl;
    }
    cout << i << endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin > a >> b;
    if (int k = 10; a < k)
    {
        cout << "a is lesser than k";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "enter the day number :" << endl;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "It is Monday " << endl;
        break;
    case 2:
        cout << "It is tuesday " << endl;
        break;
    case 3:
        cout << "It is Wednesday " << endl;
        break;
    case 4:
        cout << "It is Thursday" << endl;
        break;
    case 5:
        cout << "It is Friday" << endl;
        break;
    case 6:
        cout << "It is Saturday" << endl;
    case 7:
        cout << "It is Sunday " << endl;
        break;
    default:
        cout << "Invalid number " << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, option;
    cout << "I am writing a menu driven program" << endl;
    cout << "MENU" << endl;
    cout << "1.Addition\n"
         << "2.Subraction\n"
         << "3.Multiplication\n"
         << "4.Division\n"
         << endl;
    cout << "Enter the option :" << endl;
    cin >> option;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        cout << "the addition of 2 numbers :" << c << endl;
        break;
    case 2:
        c = a - b;
        cout << "The subraction of 2 numbers :" << c << endl;
        break;
    case 3:
        c = a * b;
        cout << "The multiplication of 2 numbers " << c << endl;
        break;
    case 4:
         c = a / b;
        cout << "The divisioin of 2 numbers is " << c << endl;
        break;
    default:
        cout << "Invalid option " << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int amount;
    float disc;
    float total_amount;
    disc = 0;
    cout << "Enter the input amount " << endl;
    cin >> amount;
    if (amount < 100)
    {
        cout << "NO DISCOUNT " << endl;
    }
    else if ((amount >= 100) && (amount < 500))
    {
        cout << "You get a discount of 10 %" << endl;
        disc = 0.10 * amount;
        cout << "Discount price : " << disc << endl;
    }
    else if ((amount >= 500))
    {
        cout << "You get a discount of 20 %" << endl;
        disc = 0.20 * amount;
        cout << "Discount Price : " << disc << endl;
    }
    total_amount = amount - disc;
    cout << "The total bill amount to be payed " << total_amount << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year you want to check : " << endl;
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "It is a leap year" << endl;
            else
                cout << "it is not a leap year" << endl;
        }
        else
        {
            cout << year << "is a leap year" << endl;
        }
    }
    else
    {
        cout << year << "is not a leap year" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Enter the number you want to display" << endl;
    cin >> n;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the number a :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i = 0, n;
    cout << "Enter n " << endl;
    cin >> n;
    while (i < 10)
    {
        cout << "HELLO WORLD" << endl;
        i++;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i = 0, n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    do
    {
        cout << i << "\t10Hello World" << endl;
        i++;
    } while (i <= n);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the multiplication number : " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << n << "X" << i << "=" << n * i << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of n numbers is " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int fact = 1, n, i;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    if (n == 0)
    {
        fact = 0;
        cout << "The factorial of 0 is " << fact << endl;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "THE factorial of " << n << " is " << fact << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int num, facts;
    cout << "Enter the value of num :" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int fact, i, num;
    cout << "Enter the number for you want to find factors :" << endl;
    cin >> num;
    cout << "The factors of the number are : " << endl;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter value for N :" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
            cout << i << "\t";
        }
    }
    cout << "\n The sum of factors :" << sum << endl;
    if ((2 * n) == sum)
    {
        cout << "It is a perfect number " << endl;
    }
    else
    {
        cout << "it is not a perfect number" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, i, count = 0;
    cout << "Enter the number you want to check :" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "The number " << n << " is a prime number";
    }
    else
    {
        cout << "It is not a prime number ";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, rev, temp;
    cout << "Enter the number :" << endl;
    cin >> n;
    while (n > 0)
    {
        rev = n % 10;
        n = n / 10;
        cout << rev << endl;
    }
    if (n == 0)
    {
        cout << "invalid number" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, rev, count;
    cout << "Enter the number you want to reverse : " << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "INVALID NUMBER !" << endl;
    }
    while (n > 0)
    {
        rev = n % 10;
        n = n / 10;
        cout << rev << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int tot = 0, n, b, cube = 0;
    cout << "Enter the number : " << endl;
    cin >> n;
    int m = n;
    while (n > 0)
    {
        b = n % 10;
        n = n / 10;
        cube = (b * b) * b;
        tot = tot + cube;
    }
    cout << "The addition of consecutive cube numbers is " << tot << endl;
    if (m == tot)
    {
        cout << "It is a amstrong number" << endl;
    }
    else
    {
        cout << "It is not a amstrong number " << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, sum = 0;
    cout << "ENter a number :" << endl;
    cin >> a;
    b = a;
    if (a == 0)
    {
        cout << "The NUMBER 0 is an armstrong number " << endl;
    }
    while (a > 0)
    {
        c = a % 10;
        a = a / 10;
        sum = sum + (c * c * c);
    }
    cout << "The addition of consecutive cube digits is  " << sum << endl;
    if (b == sum)
    {
        cout << "the entered number " << b << "is a armstrong number" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, rev, cub, sum = 0;
    cout << "Enter the number : " << endl;
    cin >> n;
    int m = n;
    while (n > 0)
    {
        rev = n % 10;
        n = n / 10;
        sum = sum + (rev * rev * rev);
    }
    cout << "Sum of the consecutive digits of the cube is " << sum << endl;
    if (m == sum)
    {
        cout << " Hence " << m << " is an armstrong number " << endl;
    }
    else
    {
        cout << "It is not an armstrong number" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0;
    cout << "Enter a number : " << endl;
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = (rev * 10) + r;
    }
    cout << "THE REVERSE OF THE ENTERED NUMBER IS " << rev << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, r, sum;
    cout << "Enter a number n :" << endl;
    cin >> n;
    int m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = (rev * 10) + r;
    }
    if (m == rev)
    {
        cout << "The given number " << m << " is a palindrome" << endl;
    }
    else
    {
        cout << "the given number " << m << " is not a palindrome" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, r, rr, rrev = 0;
    cout << "Enter a number " << endl;
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = (rev * 10) + r;
    }
    cout << "THE NUMBER AFTER REVERSING one time " << rev << endl;
    while (rev > 0)
    {
        rr = rev % 10;
        rev = rev / 10;
        rrev = (rrev * 10) + rr;
        switch (rr)
        {
        case 1:
            cout << "One " << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five " << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
        default:
            cout << "zero" << endl;
            break;
        }
    }
    cout << "THE NUMBER AFTER REVERSING two times " << rrev << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, rev, r;
    cout << "ENTER A NUMBER :" << endl;
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    cout << "Sum of digits : " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int m, n, sum;
    cout << "Enter the values of m and n :" << endl;
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
    }
    cout << "GCD OF TWO NUMBERS" << m << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, r, rev, sum = 0;
    cout << "Enter a number you want to check : ";
    cin >> n;
    int m = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = (sum * 10) + r;
    }
    cout << "THE NUMBER AFTER REVERSING is " << sum << endl;
    if (m == sum)
    {
        cout << "THE NUMBER " << m << " is a palindrome " << endl;
    }
    else
    {
        cout << "The Number " << m << "is not a palindrome" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[6] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }
    cout << a[6] << endl;
    cout << a[1] << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {0, 1,0};
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float A[] = {11.2f, 2.0f, 98, 34, 52};
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    for (int x : a)
    {
        cout << x << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float A[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    for (float x : A)
        cout << x << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {4.3f, 24, 67, 31, 63, 96};
    for (float x : a)
        cout << x << endl;
    for (int i = 0;i<6; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    char a[] = {'A', 'b', 66, 89};
    for (int x : a)
        cout << x << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 7, 19, 23, 11, 563};
    for (auto &x : a)
    {
        cout << ++x << "\t";
    }
    cout << "\n\t\n";
    for (auto x : a)
    {
        cout << x << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {18, 23, 53, 87, 44, 21, 31};
    int sum = 0;
    for (auto x : a)
    {
        sum = sum + x;
    }
    cout << "SUM OF ELEMENTS OF ARRAY : " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 9, 8, 7, 6};
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        sum = sum + a[i];
    }
    cout << "THE SUM OF ELEMENTS OF THE ARRAY : " << sum;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 9, 8, 7, 6};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {

        sum = sum + a[i];
    }
    cout << "THE SUM OF ELEMENTS OF THE ARRAY : " << sum;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {12, 84, 33, 54, 28, 90, 100, 44};
    int max = a[0];
    for (int x : a)
    {
        if (x > max)
        {
            max = x;
        }
    }
    cout << "THE MAX ELEMENT OF THE ARRAY is  :" << max << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {123, 432, 555, 63, 245};
    int max = a[2];
    for (int i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "The highest number of the given array elements is  " << max << endl;
    return 0;
}
// LINEAR SEARCH
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int n, search;
    cout << "Enter the number of elements you wish to have in the array :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to search :";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            cout << "THE ELEMENT " << search << "is present in the " << i << " index" << endl;
            return 0;
        }
        else
        {
            cout << "the element you are searching is not available " << endl;
            return 0;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int search, n;
    cout << "Enter the number of elements you want in your array :" << endl;
    cin >> n;
    cout << "NOW ENTER THE ARRAY ELEMENTS : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to search :" << endl;
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            cout << "THE ELEMENT " << search << " is present in the " << i << " index" << endl;
            return 0;
        }
    }
    cout << search << " Is Not found in the array  " << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int r, rev = 0, n;
    cout << "Enter the number " << endl;
    cin >> n;
    int m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = (rev * 10) + r;
    }
    cout << "THE REVERSE OF THE NUMBER : " << m << " is " << rev << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int n, search;
    cout << "ENTER THE NUMBER OF ARRAY ELEMENTS : ";
    cin >> n;
    cout << "NOW INPUT THE " << n << " elements into the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to search :";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            cout << "The element " << search << " is available in the " << i << " location " << endl;
            return 0;
        }
    }
    cout << "the element " << search << " is not available in the array " << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[] = {};
    int l, h, n, search, mid;
    cout << "Enter the number of array elements : ";
    cin >> n;
    l = 0;
    h = n - 1;
    cout << "Now enter the array elements in ascending order : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> search;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (search == a[mid])
        {
            cout << "the value you are searching is " << a[mid] << " and is available in " << mid << " index" << endl;
            return 0;
        }
        else if (search < a[mid])
        {
            h = mid - 1;
        }
        else if (search > a[mid])
        {
            l = mid + 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,1,1},{2,2,2}};
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a[2][3] = {};
    for (auto &x : a)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}*/
