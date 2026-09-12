 #include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    string postfix;

    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    stack<int> s;

    for (char ch : postfix)
    {
       
        if (isdigit(ch))
        {
            s.push(ch - '0');
        }

        else
        {
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            int result;

            switch (ch)
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;

                case '^':
                    result = pow(a, b);
                    break;
            }

            s.push(result);
        }
    }

    cout << "Result = " << s.top();

    return 0;
}