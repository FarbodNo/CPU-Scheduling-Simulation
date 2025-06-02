#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    double totalT = 0, totalW = 0, totalR = 0;
    int currentTime = 0;
    vector<int> waiting(n), turnaround(n), response(n);

    cout << "Enter number of tasks: ";
    cin >> n;
    vector<pair<int, int>> burst(n);
    cout << "Enter CPU burst times for each task:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Task " << i + 1 << ": ";
        cin >> burst[i].first;
        burst[i].second = i;
    }

    sort(burst.begin(), burst.end());

    for (auto& [b, idx] : burst) {
        waiting[idx] = currentTime;
        response[idx] = currentTime;
        currentTime += b;
        turnaround[idx] = currentTime;
    }

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
