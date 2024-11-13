#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long arr[n];
    for(long long i=0; i<n; i++){
        cin >> arr[i];
    }

    long long min_ans = 0;
    long long curr = 0;
    for(long long i=1; i<n; i++){
        curr = arr[i-1]-arr[i];
        if(curr > 0){
            min_ans += curr;
            arr[i] = arr[i]+curr;
        }
    }

    cout << min_ans;

    return 0;
}