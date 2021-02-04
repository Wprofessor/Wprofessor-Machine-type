#include <bits/stdc++.h>
using namespace std;
int sum(int x)
{
    int ok = 0;
    while (x)
    {
        ok += x % 10;
        x /= 10;
    }
    return ok;
}
vector<int> solve_factor(int x)
{
    int n2 = x;
    vector<int> store;
    for (int i = 2; i * i <= n2; i++) //根号n复杂度
    {
        while (n2 % i == 0)
        {
            n2 = n2 / i;
            store.push_back(i);
        }
    }
    if (n2 != 1)
        store.push_back(n2); //当n为质数
    return store;
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        int sum1, sum2;
        sum1 = sum(n);
        vector<int> v = solve_factor(n);
        int sum_store = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum_store += sum(v[i]);
        }
        if (sum_store == sum1)
            cout << "yes" << endl;
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}