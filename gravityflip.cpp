#include <bits/stdc++.h>
using namespace std;
#define LOG(x) (cout<<x<<endl)

int main() {

    int n;
    cin>>n;
    
    int s [n];
    for (int j = 0; j < n; j++) {
        cin>>s[j];
    }
    int b [n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = 0;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = s[i]; j > 0; j--) {
            b[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s[i]; j++) {
        }
    }

    for (int i = 0; i < n; i++)  for (int j = 0; j < n; j++) LOG(b[i][j]);
}
