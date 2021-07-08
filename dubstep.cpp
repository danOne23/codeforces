#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> v(s.begin(), s.end());
    vector<char> v2;

    int vSize = v.size();

    for (int i = 0; i < vSize; i++)
    {
        if (v[i] == 'W' && v[i + 1] == 'U' && v[i + 2] == 'B' && i < vSize - 2)
        {
            v2.push_back(' ');
            i += 2;
        }
        else
            v2.push_back(v[i]);
    }

    while (v2[0] == ' ')
    {
        v2.erase(v2.begin());
    }

    string out(v2.begin(), v2.end());
    cout << out << endl;
}