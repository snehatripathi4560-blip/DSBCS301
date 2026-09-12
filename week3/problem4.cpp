#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    return 0;
}
//Fibonacci using Recursion
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
//GCD using Recursion
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " << gcd(a, b);

    return 0;
}

//Sum of Digits using Recursion
#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Sum of digits = " << sumDigits(n);

    return 0;
}