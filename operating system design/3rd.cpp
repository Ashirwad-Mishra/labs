#include <bits/stdc++.h>
using namespace std;
// SJF Scheduling Algorithm
// This program implements the Shortest Job First (SJF) scheduling algorithm for CPU scheduling.
struct Process 
{
    int id;
    int AT;
    int BT;
    int startTime;
    int completionTime;
    int waitingTime;
    int TAT;
    bool completed;
};

int main() {
    cout << "Name: Ashirwad Mishra\n";
    cout << "Roll No: 220101020\n";

    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++) 
    {
        cout << "Enter Arrival Time and Burst Time for Process " << i + 1 << ": ";
        cin >> processes[i].AT >> processes[i].BT;
        processes[i].id = i + 1;
        processes[i].completed = false;
    }

    int currentTime = 0;
    int completed = 0;
    vector<int> waitingTimes, TATs;

    while (completed < n) 
    {
        int idx = -1;
        int minBurst = INT_MAX;

        for (int i = 0; i < n; i++) 
        {
            if (!processes[i].completed && processes[i].AT <= currentTime) 
            {
                if (processes[i].BT < minBurst) 
                {
                    minBurst = processes[i].BT;
                    idx = i;
                }
            }
        }

        if (idx != -1) 
        {
            processes[idx].startTime = currentTime;
            processes[idx].completionTime = currentTime + processes[idx].BT;
            processes[idx].TAT = processes[idx].completionTime - processes[idx].AT;
            processes[idx].waitingTime = processes[idx].TAT - processes[idx].BT;
            processes[idx].completed = true;
            currentTime = processes[idx].completionTime;

            waitingTimes.push_back(processes[idx].waitingTime);
            TATs.push_back(processes[idx].TAT);
            completed++;
        } 
        else 
        {
            currentTime++; // no process has arrived yet, move time forward
        }
    }

    // Display
    cout << "\nProcess\tArrival\tBurst\tStart\tComplete\tWaiting\tTurnaround\n";
    for (auto &p : processes) 
    {
        cout << "P" << p.id << "\t" << p.AT << "\t" << p.BT << "\t"
             << p.startTime << "\t" << p.completionTime << "\t\t"
             << p.waitingTime << "\t" << p.TAT << "\n";
    }

    double avgWT = accumulate(waitingTimes.begin(), waitingTimes.end(), 0.0) / n;
    double avgTAT = accumulate(TATs.begin(), TATs.end(), 0.0) / n;

    cout << "\nAverage Waiting Time: " << avgWT << "\n";
    cout << "Average Turnaround Time: " << avgTAT << "\n";

    return 0;
}