#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    vector<char> v;

    for (char c : str)
    {
        if (c != '+')
            v.push_back(c);
    }

    sort(v.begin(), v.end());

    str = v[0];

    if (v.size() > 1)
    {
        for (int i = 1; i < v.size(); i++)
        {
            str += "+";
            str += v[i];
        }
    }

    cout << str << endl;
}