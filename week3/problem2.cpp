 #include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int precedence(char op)
{
    if (op == '^')
        return 3;

    if (op == '*' || op == '/' || op == '%')
        return 2;

    if (op == '+' || op == '-')
        return 1;

    return 0;
}

string infixToPrefix(string infix)
{
    stack<char> s;
    string prefix = "";
    reverse(infix.begin(), infix.end());
    for (char &ch : infix)
    {
        if (ch == '(')
            ch = ')';
        else if (ch == ')')
            ch = '(';
    } for (char ch : infix)
    {
        if (isalnum(ch))
        {
            prefix += ch;
        }

        else if (ch == '(')
        {
            s.push(ch);
        }else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                prefix += s.top();
                s.pop();
            }

            s.pop();
        }    else
        {
            while (!s.empty() &&
                   precedence(s.top()) > precedence(ch))
            {
                prefix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }while (!s.empty())
    {
        prefix += s.top();
        s.pop();
    }

    
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main()
{
    string infix;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    cout << "Prefix Expression: "
         << infixToPrefix(infix);

    return 0;
}