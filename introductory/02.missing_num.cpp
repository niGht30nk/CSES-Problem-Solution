#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // 5

    int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
    // 2 3 1 5

    sort(arr, arr+n-1);

    // 1 2 3 5

    int flag = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] != i+1){
            flag = 1;
            cout << i+1;
            break;
        }
    }
    if(flag == 0){
        cout << n;
    }

    return 0;
}