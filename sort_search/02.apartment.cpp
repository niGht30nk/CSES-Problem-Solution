#include <bits/stdc++.h>
using namespace std;

int main(){

    // n = applicants, m = apparte=ments, k = size
    int n, m, k;
    cin >> n >> m >> k;

    int people[n];
    int house[m];

    for (int i = 0; i < n; i++)
    {
        cin >> people[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> house[i];
    }
    
    // two pointer approach

    sort(people, people+n);
    sort(house, house+m);

    int i = 0, j = 0;
    int count = 0;

    while(i < n && j < m){
        if(people[i] + k >= house[j] && people[i] -k <= house[j]){
            count++;
            i++;
            j++;
        }
        // if it's not lieing in the range
        else{
            // if upper one is big, then below one will never come in the next upper part
            if(people[i] > house[j]){
                j++;
            }else{
                i++;
            }
        } 
    }
    cout << count;
    return 0;

}