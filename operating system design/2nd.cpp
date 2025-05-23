#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Name: Ashirwad Mishra";
    int n;
    cout << "\nEnter the number of processes: ";
    cin >> n;

    vector<int> arrival_time(n), burst_time(n), completion_time(n), waiting_time(n), turn_Around_time(n);

    cout << "\nEnter arrival time for each process: ";
    for (int i = 0; i < n; i++) cin >> arrival_time[i];

    cout << "\nEnter burst time for each process: ";
    for (int i = 0; i < n; i++) cin >> burst_time[i];

    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int a, int b) 
    {
        return arrival_time[a] < arrival_time[b];
    });

    int current_time = 0;
    for (int i = 0; i < n; i++) 
    {
        int p = idx[i];
        if (current_time < arrival_time[p]) current_time = arrival_time[p];
        waiting_time[p] = current_time - arrival_time[p];
        completion_time[p] = current_time + burst_time[p];
        turn_Around_time[p] = completion_time[p] - arrival_time[p];
        current_time += burst_time[p];
    }

    double avarage_TAT = accumulate(turn_Around_time.begin(), turn_Around_time.end(), 0.0) / n;
    double avarage_WT = accumulate(waiting_time.begin(), waiting_time.end(), 0.0) / n;

    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "P" << i + 1 << "\t" << arrival_time[i] << "\t" << burst_time[i] << "\t"
             << completion_time[i] << "\t" << turn_Around_time[i] << "\t" << waiting_time[i] << "\n";
    }

    cout << "\nThe average turn around time: " << avarage_TAT;
    cout << "\nThe average waiting time: " << avarage_WT;
}