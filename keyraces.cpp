#include <bits/stdc++.h>
using namespace std;

int main() {

    int s;
    cin>>s;
    int v [2];
    cin>>v[0];
    cin>>v[1];
    int t [2];
    cin>>t[0];
    cin>>t[1];
    
    int r [2] = {t[0] * 2 + s * v[0], t[1] * 2 + s * v[1]};

    if (r[0] < r[1]) cout<<"First";
    else if (r[0] > r[1]) cout<<"Second";
    else cout<<"Friendship";

}