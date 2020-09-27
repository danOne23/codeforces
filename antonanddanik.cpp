#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a=0, d=0;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 0; i < n; i++) {
        if (s[i]=='D') d++;
        else a++;
    }

    if (a<d) cout<<"Danik";
    else if (d<a) cout<<"Anton";
    else cout<<"Friendship";
}