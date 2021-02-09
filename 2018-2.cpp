#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        int tag = 0;
        for (int i = 0; i < str2.size(); i++)
        {
            for (int j = 1; j < str2.size(); j++)
            {
                if ((i + j) <= str2.size() && str1.find(str2.substr(i, j)) != str1.npos)
                {
                    if (tag < j)
                    {
                        tag = j;
                    }
                }
            }
        }
        float d = (float)tag / ((float)str1.size() + (float)str2.size());
        printf("%.2lf\n", d);
    }
    return 0;
}