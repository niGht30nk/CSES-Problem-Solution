#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long arr[n];
    long sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    long avg_len = sum/n;

    int min_cost = 0;
    for(int i=0; i<n; i++){
        min_cost += abs(arr[i] - avg_len);
    }
    cout << min_cost;
    return 0;
}

// int main(){
//     long long n;
//     cin >> n;

//     long long arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     sort(arr, arr+n);

//     // middle of the sorted array gives the length we want to make 
//     // so then, we can calculate the min cost generated 
//     int len = (n-1)/2;

//     long long min_cost = 0;
//     for(int i=0; i<n; i++){
//         min_cost += abs(arr[i] - arr[len]);
//     }

//     cout << min_cost;

//     return 0;
// }

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     int mini = INT_MAX;
//     int maxi = INT_MIN;

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//         mini = min(arr[i], mini);
//         maxi = max(arr[i], maxi);
//     }

//     // int low = mini;
//     // int high = maxi;

//     int ans = INT_MAX;
//     for(int i=mini; i<= maxi; i++){
//         int sum = 0;
//         for(int j=0; j<n; j++){
//             sum += abs(arr[j] - i);
//         }
//         ans = min(sum, ans);
//     }

//     cout << ans;

//     return 0;
// }