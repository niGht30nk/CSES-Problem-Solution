#include <bits/stdc++.h>
using namespace std;

// hashmap approach keeping track of all the num line of coming and exiting time of customers

int main(){
    int t;
    cin >> t;

    int customer[t][2];

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> customer[i][j];
        }            
    }
    int arrival[t];
    int leaving[t];

    for (int i = 0; i < t; i++)
    {
        arrival[i] = customer[i][0];
        leaving[i] = customer[i][1];
    }

    sort(arrival, arrival+t);
    sort(leaving, leaving+t);
    int i = 0, j = 0;

    int curr = 0;
    int max_cust = 0;
    while(i < t && j < t){
        if(arrival[i] < leaving[j]){
            i++;
            curr++;
            max_cust = max(curr, max_cust);
        } else{
            j++;
            curr--;
        }
    }
    cout << max_cust;

    return 0;
}
// int main(){

//     int t ;
//     cin >> t;

//     map<int, int> mp;

//     while(t-- >0){

//         int a, b;
//         cin >> a >> b;

//         // intializing coming with 1 and exiting with -1 so that, the value one will give the max of all after sort
//         mp.insert(pair <int, int> (a, 1));
//         mp.insert(pair <int, int> (b, -1));

//     }
//     int maxCustomer = 0;
//     int curr = 0;

//     for(auto i = mp.begin(); i != mp.end(); i++){
//         curr += i->second;
//         maxCustomer = max(curr, maxCustomer);
//     }

//     cout << maxCustomer;

//     return 0;
// }
// two pointer approach bhi hain
// jisme sort karliya arrival and leaving ko, 
// then normally check kara, arrival vala bada hain, to to curr++ and i++ kardo and max update kardo
// agar arrrival kam hain to curr-- kardo, and j++ kardo 