/*#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter the day number :";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "TODAY IS SUNDAY " << endl;
        break;
    case 2:
        cout << "TODAY IS MONDAY " << endl;
        break;
    case 3:
        cout << "TODAY IS TUESDAY" << endl;
        break;
    case 4:
        cout << "TODAY IS WEDNESDAY " << endl;
        break;
    case 5:
        cout << "TODAY IS THURSDAY " << endl;
        break;
    case 6:
        cout << "TODAY IS FRIDAY" << endl;
        break;
    case 7:
        cout << "TODAY IS SATURDAY " << endl;
        break;
    default:
        cout << "Invalid day number " << endl;
        break;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    cout << "Enter the number you want to find factorial for :";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of the number is " << fact << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int factors, n;
    cout << "Enter the number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
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
    int sum = 0, n;
    cout << "Enter the num :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << "SUM OF FACTORS IS " << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n;
    cout << "enter n :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << "SUM OF FACTORS IS " << sum << endl;
    if (n * 2 == sum)
    {
        cout << "THE NUMBER " << n << " is a perfect number " << endl;
    }
    else
    {
        cout << "THe number is not a perfect number" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << "The number " << n << "is not a prime number" << endl;
    }
    else
    {
        cout << "the number " << n << " is a prime number " << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int frev, rev, num;
    cout << "Enter the number you want to reverse : ";
    cin >> num;
    if (num == 0)
    {
        cout << "INVALID NUMBER " << endl;
    }
    while (num > 0)
    {
        rev = num % 10;
        num = num / 10;
        cout << rev;
        frev = rev;
    }
    cout << "Reverse of the number :" << frev << endl;
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
    int rev, n;
    cin >> n;
    while (n > 0)
    {
        rev = n % 10;
        n = n / 10;

        cout << rev;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n, temp = 0;
    cout << "Enter size of array :";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Now displaying array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\nArray after sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}*/
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
        cout << cube << endl;
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