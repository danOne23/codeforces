#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n, r, s;
    cin>>n;
    cin>>m;
    s = m*n;
    r = s % 2;
    cout<<(s-r)/2;

}