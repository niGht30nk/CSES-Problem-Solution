#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;

    // don't do one in the while loop
    while(n > 1){
        cout << n << " ";
        if(n % 2 == 0){
            n = n/2;
        }else{
            n = n*3 + 1;
        }  
    }

    // for printing one 
    cout << n;

    return 0;
}