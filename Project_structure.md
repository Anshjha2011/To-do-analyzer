worklog/
│
├── src/
│   ├── main.c
│   ├── time_utils.c
│   ├── file_utils.c
│   ├── task.c
│   ├── analysis.c
│
├── include/
│   ├── time_utils.h
│   ├── file_utils.h
│   ├── task.h
│   ├── analysis.h
│
├── logs/
│
└── Makefile

Module Responsibilities
🔹 time_utils

Handles:
Getting current time
Formatting time/date
Calculating durations
No file logic here.

🔹 file_utils

Handles:
Creating daily log file
Appending task to CSV
Checking if file exists
Creating logs folder if needed

No timing logic here.

🔹 task module

Handles:
Creating a task
Starting timer
Stopping timer
Filling struct

This isolates business logic.

🔹 analysis module

Handles:
Reading CSV files
Calculating totals
Generating summary CSV
Possibly exporting data for gnuplot
