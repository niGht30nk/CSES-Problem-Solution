#include <bits/stdc++.h>
using namespace std;

int main(){

    string DNA ;
    cin >> DNA;

    int maxi = 1, curr = 1;
    for (int i = 0; i < DNA.length()-1; i++) {
        if(DNA[i] == DNA[i+1]){
            curr++;
            maxi = max(maxi, curr);
        }
        else{
            curr = 1;
        }
    }
    cout << maxi;

    return 0;
}