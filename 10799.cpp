#include <iostream>
#include <stack>
#include <string>
using namespace std;

string str;

int main()
{
    int result = 0;
    stack<char> st;

    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            st.push(str[i]);
        else
        {
            st.pop();
            if (str[i - 1] == '(')
                result += st.size();
            else
                result++;
        }
    }

    cout << result << endl;
    return 0;
}