#include <bits/stdc++.h>
using namespace std;

struct data
{
    int id;
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
    int waiting_time;
    int turn_Around_time;
};

int main()
{
    cout << "Name: Ashirwad Mishra\n";

    int n, quantum_time;
    cout << "\nEnter the number of processes: ";
    cin >> n;

    vector<data> process(n);
    cout << "\nEnter arrival time for each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> process[i].arrival_time;
        process[i].id = i;
    }

    cout << "\nEnter burst time for each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> process[i].burst_time;
        process[i].remaining_time = process[i].burst_time;
    }

    cout << "\nEnter quantum time: ";
    cin >> quantum_time;

    queue<int> q;
    vector<bool> in_queue(n, false);
    int current_time = 0, completed = 0;

    // Sort processes by arrival time
    sort(process.begin(), process.end(), [](data a, data b)
    {
        return a.arrival_time < b.arrival_time;
    });

    q.push(0);
    in_queue[0] = true;
    current_time = process[0].arrival_time;

    while (!q.empty())
    {
        int idx = q.front();
        q.pop();

        int exec_time = min(quantum_time, process[idx].remaining_time);
        current_time += exec_time;
        process[idx].remaining_time -= exec_time;

        for (int i = 0; i < n; i++)
        {
            if (process[i].arrival_time <= current_time && !in_queue[i] && process[i].remaining_time > 0)
            {
                q.push(i);
                in_queue[i] = true;
            }
        }

        if (process[idx].remaining_time > 0)
        {
            q.push(idx);
        }
        else
        {
            process[idx].completion_time = current_time;
            process[idx].turn_Around_time = current_time - process[idx].arrival_time;
            process[idx].waiting_time = process[idx].turn_Around_time - process[idx].burst_time;
            completed++;
        }

        if (q.empty())
        {
            for (int i = 0; i < n; i++)
            {
                if (process[i].remaining_time > 0 && process[i].arrival_time > current_time)
                {
                    current_time = process[i].arrival_time;
                    q.push(i);
                    in_queue[i] = true;
                    break;
                }
            }
        }
    }

    double avg_TAT = 0, avg_WT = 0;
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        avg_TAT += process[i].turn_Around_time;
        avg_WT += process[i].waiting_time;
        cout << "P" << i + 1 << "\t" << process[i].arrival_time << "\t"
             << process[i].burst_time << "\t" << process[i].completion_time << "\t"
             << process[i].turn_Around_time << "\t" << process[i].waiting_time << "\n";
    }

    cout << "\nThe average turn around time: " << avg_TAT / n;
    cout << "\nThe average waiting time: " << avg_WT / n << "\n";

    return 0;
}