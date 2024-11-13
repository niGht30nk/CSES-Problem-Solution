#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    long maxi = LONG_MIN;
    long sum = 0;

    for(int i=0; i<n; i++){
        // yahan pe bus yeah if condition upper neeche karne se, pura ans change ho raha hain
        // we have to do sum = 0, before adding the arr[i]
        if(sum < 0){
            sum = 0;
        }
        sum += arr[i];
        maxi = max(sum, maxi);
    }

    cout << maxi;
    return 0;
}