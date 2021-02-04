#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (cin >> str)
    {
        int pre = 0;
        int sum = 0;
        string temp = "";
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] < '0' || str[i] > '9')
            {
                temp += str[i];
            }
        }
        for (int i = 0; i < str.size(); i++)
        {

            if (str[i] < '0' || str[i] > '9')
            {

                for (int j = 0; j < sum - 1; j++)
                {
                    cout << temp[pre - 1];
                }
                pre++;
                sum = 0;
                cout << str[i];
            }
            else
            {
                sum = sum * 10 + (str[i] - '0');
                // cout << sum << endl;
            }
        }
        for (int j = 0; j < sum - 1; j++)
        {
            cout << temp[temp.size() - 1];
        }
        cout << endl;
    }
    return 0;
}