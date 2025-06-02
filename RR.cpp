#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, quantum;
    cout << "Enter number of tasks: ";
    cin >> n;
    vector<int> burst(n);
    cout << "Enter CPU burst times for each task:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Task " << i + 1 << ": ";
        cin >> burst[i];
    }
    cout << "Enter time quantum: ";
    cin >> quantum;

    vector<int> remaining = burst, waiting(n, 0), response(n, -1), turnaround(n);
    queue<int> q;
    for (int i = 0; i < n; ++i) q.push(i);

    int time = 0;
    while (!q.empty()) {
        int i = q.front();
        q.pop();

        if (response[i] == -1) response[i] = time;

        int exec = min(quantum, remaining[i]);
        time += exec;
        remaining[i] -= exec;

        if (remaining[i] > 0) q.push(i);
        else turnaround[i] = time;
    }

    for (int i = 0; i < n; ++i) waiting[i] = turnaround[i] - burst[i];

    double totalT = 0, totalW = 0, totalR = 0;
    for (int i = 0; i < n; ++i) {
        totalT += turnaround[i];
        totalW += waiting[i];
        totalR += response[i];
    }

    cout << "Average Turnaround Time: " << totalT / n << endl;
    cout << "Average Waiting Time: " << totalW / n << endl;
    cout << "Average Response Time: " << totalR / n << endl;
    return 0;
}
