CPU Scheduling Simulation in C++

This project includes three C++ programs simulating popular CPU scheduling algorithms:

1. First Come First Serve (FCFS)
2. Shortest Job First (SJF) - Non-Preemptive
3. Round Robin (RR)

Each program:
- Accepts the number of tasks.
- Takes CPU burst times for each task.
- Calculates and outputs:
  - Average Turnaround Time
  - Average Waiting Time
  - Average Response Time

---

1. First Come First Serve (FCFS)

How it Works:
- Tasks are executed in the order they arrive.
- All tasks arrive at time 0.
- No preemption: tasks run to completion.
- Turnaround Time = Completion Time
- Waiting Time = Turnaround Time - Burst Time
- Response Time = Waiting Time (in FCFS)

Example Input:
Enter number of tasks: 4
Enter CPU burst times for each task:
Task 1: 5
Task 2: 3
Task 3: 8
Task 4: 6

Output:
Average Turnaround Time: 12.75
Average Waiting Time: 7.25
Average Response Time: 7.25

---

2. Shortest Job First (SJF) – Non-Preemptive

How it Works:
- Tasks are sorted by burst time (ascending).
- All tasks assumed to arrive at time 0.
- No preemption: once started, a task runs until completion.
- Response Time = Time when task starts execution.

Example Input:
Enter number of tasks: 4
Enter CPU burst times for each task:
Task 1: 6
Task 2: 8
Task 3: 7
Task 4: 3

Output:
Average Turnaround Time: 13
Average Waiting Time: 7
Average Response Time: 7

---

3. Round Robin (RR)

How it Works:
- Each task is given a time slice (quantum).
- Tasks are rotated in a queue until completion.
- If a task is not finished within its quantum, it is requeued.
- Arrival time is assumed to be 0 for all tasks.

Example Input:
Enter number of tasks: 4
Enter CPU burst times for each task:
Task 1: 5
Task 2: 3
Task 3: 1
Task 4: 2
Enter time quantum: 2

Output:
Average Turnaround Time: 8.25
Average Waiting Time: 5.5
Average Response Time: 2.75
