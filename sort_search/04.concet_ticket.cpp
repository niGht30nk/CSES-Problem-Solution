#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;

    // int prices[n];
    // we use multi-set for sorting and duplicates
    
    multiset<int> prices;
    int customer[m];

    for(int i = 0; i<n; i++){
        int temp;
        cin >> temp;
        prices.insert(temp);
    }

    for(int i = 0; i<m; i++){
        cin >> customer[i];
    }

    // no need to sort as multiset handles that in itself
    // sort(prices, prices + n);

    for(int i=0; i<m; i++){
        
        // logn time complexity, binary search hi han ak taraf se
        // yeah puri ak search hain
        multiset<int> :: iterator itr = prices.upper_bound(customer[i]); // customer[i] is target here 

        // if upper bound is in the first index 
        if(itr == prices.begin()){
            cout << -1 << endl;
        }
        else{
            itr--;
            cout << (*itr) << endl;
            prices.erase(itr);
        }

    }
    return 0;
}