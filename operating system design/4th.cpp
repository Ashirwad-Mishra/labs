#include <bits/stdc++.h>
using namespace std;

struct Process {
    int id;
    int arrival;
    int burst;
    int remaining;
    int start = -1;
    int complete;
    int waiting;
    int turnaround;
};

int main() {
    cout << "Name: Ashirwad Mishra\n";
    cout << "Roll No: 220101020\n";

    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> p(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter Arrival Time and Burst Time for Process " << i + 1 << ": ";
        cin >> p[i].arrival >> p[i].burst;
        p[i].id = i + 1;
        p[i].remaining = p[i].burst;
    }

    int time = 0, completed = 0;
    vector<bool> isCompleted(n, false);

    while (completed < n) {
        int idx = -1;
        int minRemaining = INT_MAX;

        // Find process with shortest remaining time that has arrived
        for (int i = 0; i < n; ++i) 
        {
            if (p[i].arrival <= time && p[i].remaining > 0) 
            {
                if (p[i].remaining < minRemaining || 
                    (p[i].remaining == minRemaining && p[i].arrival < p[idx].arrival)) 
                    {
                    minRemaining = p[i].remaining;
                    idx = i;
                }
            }
        }

        if (idx != -1) {
            if (p[idx].start == -1) p[idx].start = time;

            p[idx].remaining--;
            time++;

            if (p[idx].remaining == 0) 
            {
                p[idx].complete = time;
                p[idx].turnaround = p[idx].complete - p[idx].arrival;
                p[idx].waiting = p[idx].turnaround - p[idx].burst;
                isCompleted[idx] = true;
                completed++;
            }
        } 
        else 
        {
            time++;
        }
    }

    // Print table
    cout << "\nProcess\tArrival\tBurst\tStart\tComplete\tWaiting\tTurnaround\n";
    double totalWT = 0, totalTAT = 0;

    for (const auto& proc : p) 
    {
        cout << "P" << proc.id << "\t" << proc.arrival << "\t" << proc.burst << "\t"
             << proc.start << "\t" << proc.complete << "\t\t"
             << proc.waiting << "\t" << proc.turnaround << "\n";

        totalWT += proc.waiting;
        totalTAT += proc.turnaround;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT / n << "\n";
    cout << "Average Turnaround Time: " << totalTAT / n << "\n";

    return 0;
}
