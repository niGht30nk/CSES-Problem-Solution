#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    array<int, 2> movie[t]; 

    for (int i = 0; i < t; i++) {
        int start_time, end_time;
        cin >> start_time >> end_time;

        movie[i][0] = end_time;  // Store end time first.
        movie[i][1] = start_time;  // Store start time.
    }

    sort(movie, movie+t);

    // {{end, start}} --> array ban gayi
    // start time >= end time then only count++ 

    int count = 1;
    int last_movie = movie[0][0];

    for (int i = 1; i < t; i++)
    {
        // we have to keep track of the last watched movie, so that it compare with the last watched movie 
        // not with the ak index peeche valli movie, kiunki humne sorting isme, end time se kari hain
        if(last_movie <= movie[i][1]){
            count++;
            last_movie = movie[i][0];
        }
    }

    cout << count;
    

    return 0;
}