#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, t;
    cin>>s>>t;

    for (int i = 0; i < s.length() / 2; i++) 
        swap(s[i], s[s.length() - i - 1]);

    if (s==t) cout<<"YES";
    else cout<<"NO";

}