#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // arr[i] = 5 4 2 3 1

    int index[n+1];
    for (int i = 0; i < n; i++) {
        index[arr[i]] = i;
    }
    // index[i] = 5->0 , 4->1, 2->2, 3->3, 1->4
    // index[] = 4 2 3 1 0
    //           1 2 3 4 5

    int ans = 1;
    for (int i = 1; i < n; i++) {
        if(index[i] > index[i+1]){
            ans++;
        }
    }
    
    cout << ans;

}

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int sort_arr[n];
//     for(int i = 0; i<n; i++)
//     {
//         sort_arr[i] = arr[i];
//     }

//     sort(sort_arr, sort_arr+n);

//     int ans = 0;
//     int ptr = 0;
//     while(ptr < n){
//         for(int i = 0; i < n; i++)
//         {
//             if(arr[i] == sort_arr[ptr]){
//                 ptr++;
//             }
//         }
//         ans++;
//     }

//     cout << ans;
    
//     return 0;
// }