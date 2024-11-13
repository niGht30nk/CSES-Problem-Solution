#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int i = 0, j = n- 1;
    int count = 0;
    

    while(i <= j){
        // pair mil gaaya weight ke equal hain
        if(arr[i] + arr[j] <= x){
            count++;
            i++;
            j--;
        }
        // agar humara x wt se badha hain, matalb j vali postiion pe el jo hain voo single jayega 
        else if(arr[i] + arr[j] > x){
            j--;
            count++;
        }
        // agar choti hain, to hum aage jakar x wt ke equal pair ko uthayenge
        // else{
        //     i++;
        //     count++;
        // }
    }
    cout << count << endl;

    return 0;
    
}



// TLE de raha, O(n2) mein chalra achi approach thi 
// int main() {
//     long long n, x;
//     cin >> n >> x;

//     long long arr[n];
//     for(long long i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     sort(arr, arr + n);
    
//     long long count = 0;
//     int flag = 0;
//     for(long long i = 0; i < n; i++) {
//         long long diff = 0;
//         for(int j = i + 1; j < n; j++) {
//             int currdiff = x - (arr[i] + arr[j]);
//             if(currdiff == diff) {
//                 arr[i] = 0;
//                 arr[j] = 0;
//                 flag = 1;
//                 count++;
//             }
//         }
//         sort(arr, arr + n);
//     }

//     if(flag == 0){
//         if(n%2 == 0){
//             count = n/2;
//         }else{
//             count = n/2 + 1;
//         }
//     }else{
//         for(int i = n - 1; i >= 0; i--) {
//             if(arr[i] != 0) {
//                 count++;
//             }
//         }
//     }
    
//     cout << count << endl;

//     return 0;
// }

