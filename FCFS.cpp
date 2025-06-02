#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int currentTime = 0;
    double totalTurnaround = 0, totalWaiting = 0, totalResponse = 0;

    cout << "Enter number of tasks: ";
    cin >> n;
    vector<int> burst(n);
    cout << "Enter CPU burst times for each task:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Task " << i + 1 << ": ";
        cin >> burst[i];
    }

    for (int i = 0; i < n; ++i) {
        totalResponse += currentTime;
        totalWaiting += currentTime;
        currentTime += burst[i];
        totalTurnaround += currentTime;
    }

    cout << "Average Turnaround Time: " << totalTurnaround / n << endl;
    cout << "Average Waiting Time: " << totalWaiting / n << endl;
    cout << "Average Response Time: " << totalResponse / n << endl;
    return 0;
}
