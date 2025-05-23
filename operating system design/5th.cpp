#include <bits/stdc++.h>
using namespace std;

class PriorityScheduling
{
    struct Process
    {
        int id, AT, BT, priority;
        int CT = 0, WT = 0, TAT = 0;
        bool completed = false;
    };

    vector<Process> processes;
    int n;
    double average_TAT = 0, average_WT = 0;

public:
    PriorityScheduling(int n, vector<int> at, vector<int> bt, vector<int> prio)
    {
        this->n = n;
        for (int i = 0; i < n; i++)
        {
            processes.push_back({i + 1, at[i], bt[i], prio[i]});
        }
    }

    void calculate()
    {
        int current_time = 0, completed = 0;

        while (completed < n)
        {
            int idx = -1;
            int highest_priority = INT_MAX;

            for (int i = 0; i < n; i++)
            {
                if (!processes[i].completed && processes[i].AT <= current_time &&
                    processes[i].priority < highest_priority)
                {
                    highest_priority = processes[i].priority;
                    idx = i;
                }
            }

            if (idx == -1)
            {
                current_time++;
                continue;
            }

            Process &p = processes[idx];
            p.CT = current_time + p.BT;
            p.TAT = p.CT - p.AT;
            p.WT = p.TAT - p.BT;
            p.completed = true;

            current_time = p.CT;
            completed++;
        }
    }

    void calculate_average()
    {
        for (const auto &p : processes)
        {
            average_TAT += p.TAT;
            average_WT += p.WT;
        }

        average_TAT /= n;
        average_WT /= n;
    }

    void display()
    {
        cout << "\nProcess\tAT\tBT\tPriority\tCT\tTAT\tWT\n";

        for (const auto &p : processes)
        {
            cout << "P" << p.id << "\t" << p.AT << "\t" << p.BT << "\t" << p.priority
                 << "\t\t" << p.CT << "\t" << p.TAT << "\t" << p.WT << "\n";
        }

        cout << "\nThe average Turn Around Time: " << average_TAT;
        cout << "\nThe average Waiting Time: " << average_WT << "\n";
    }

    void run()
    {
        calculate();
        calculate_average();
        display();
    }
};

int main()
{
    cout << "Name: Ashirwad Mishra\n";
    cout << "Roll No: 2300320100055\n";

    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<int> at(n), bt(n), prio(n);

    cout << "\nEnter arrival time for each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> at[i];
    }

    cout << "\nEnter burst time for each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> bt[i];
    }

    cout << "\nEnter priority for each process (lower number = higher priority): ";
    for (int i = 0; i < n; i++)
    {
        cin >> prio[i];
    }

    PriorityScheduling scheduler(n, at, bt, prio);
    scheduler.run();

    return 0;
}