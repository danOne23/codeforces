#include <bits/stdc++.h>
using namespace std;

int main() {

    int matrix [5][5];
    vector<int> pos;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {

            cin>>matrix[i][j];

            if (matrix[i][j] == 1) {
                pos.push_back(i);
                pos.push_back(j);

            }
        }
    }

    int moves = 0;

    moves += abs(pos[0] - 2);
    moves += abs(pos[1] - 2);

    cout<<moves;

}