#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    char s [n];
    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }

    int o = 0;

    for (int i = 0; i < sizeof(s); i++) {
        cout<<i<<endl;
        o = 8;
        if (s[i] == s[i + 1]) {
            cout<<"123"<<endl;
        }
    }


    cout<<0;
}