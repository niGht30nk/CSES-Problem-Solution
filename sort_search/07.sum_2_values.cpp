#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int, int> mp;

    int idx1 = -1, idx2 = -1;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        int rem = x - arr[i];
        if (mp.find(rem) != mp.end()) { 
            idx1 = i + 1; // 1-based index for current element
            idx2 = mp[rem]; 
            flag = 1;
        }
        mp[arr[i]] = i + 1;
    }
    if(flag == 0){
        cout << "IMPOSSIBLE";
        return 0;
    }
    
    cout << idx1 << " " <<  idx2;

    return 0;
}