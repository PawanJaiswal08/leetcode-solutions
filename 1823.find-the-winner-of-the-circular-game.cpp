// 1823. Find the Winner of the Circular Game
// Josephus Problem
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr, int index, int k){
    if(arr.size() == 1)
        return;

    index = (index + k) % arr.size();
    
    arr.erase(arr.begin() + index);
    index--;
    
    solve(arr, index, k);
}

int findTheWinner(int n, int k) {
    vector<int> arr;
    for(int i = 1; i <= n; i++){
        arr.push_back(i);
    }
    int index = -1;
    solve(arr, index, k);
    return arr[0];
}

int main(){
    // Input: n = 5, k = 2
    // Output: 3
    // Explanation: Here are the steps of the game:
    // 1) Start at friend 1.
    // 2) Count 2 friends clockwise, which are friends 1 and 2.
    // 3) Friend 2 leaves the circle. Next start is friend 3.
    // 4) Count 2 friends clockwise, which are friends 3 and 4.
    // 5) Friend 4 leaves the circle. Next start is friend 5.
    // 6) Count 2 friends clockwise, which are friends 5 and 1.
    // 7) Friend 1 leaves the circle. Next start is friend 3.
    // 8) Count 2 friends clockwise, which are friends 3 and 5.
    // 9) Friend 5 leaves the circle. Only friend 3 is left, so they are the winner.
    int n = 4, k = 2;
    cout << findTheWinner(n,k);
    return 0;
}

// for(int i = 0; i < arr.size(); i++){
//     cout << arr[i] << ' ';
// }
// cout<<endl;