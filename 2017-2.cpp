#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int tag, n;
    while (cin >> str >> tag >> n)
    {
        vector<string> v;
        string x;
        for(int i = 0;i < n;i++){
            cin >> x;
            v.push_back(x);
        }
        if(!tag){
            transform(str.begin(),str.end(),str.begin(),::tolower);
            for (int i = 0; i < v.size(); i++)
            {
                transform(v[i].begin(),v[i].end(),v[i].begin(),::tolower);
                if (v[i].find(str)!=v[i].npos)
                {
                    cout << v[i] << endl;
                }
            }
        }
        else
        {
           for (int i = 0; i < v.size(); i++)
            {
                if (v[i].find(str)!=v[i].npos)
                {
                    cout << v[i] << endl;
                }
            }
        }
        
    }
    return 0;
}