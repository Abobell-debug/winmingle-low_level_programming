# 0x03. C - Debugging

## Description
This project focuses on the essential skill of **Debugging**. In software engineering, debugging is the process of identifying, isolating, and fixing logic errors (bugs) that prevent code from functioning as intended. 

Through these tasks, I practiced:
- Testing code against edge cases (like `0` or Leap Years).
- Resolving infinite loops by analyzing control flow.
- Fixing mathematical logic in comparison operations.
- Navigating and fixing bugs in multi-file C programs.

## Helper Files
- **main.h:** The header file containing all function prototypes and necessary standard library inclusions for this project.

## Tasks and File Descriptions

| Task | File | Description |
| :--- | :--- | :--- |
| **0. Multiple mains** | `0-main.c`, `positive_or_negative.c` | Tested an existing function to ensure it correctly identifies positive, negative, and zero values when integrated into a multi-file project. |
| **1. Like, comment, subscribe** | `1-main.c` | Identified and resolved a dangerous infinite loop by commenting out the problematic code section. |
| **2. 0 > 972?** | `2-largest_number.c` | Debugged a comparison function that failed to find the largest of three integers in certain scenarios (e.g., when the largest number was in the middle or tied). |
| **3. Leap year** | `3-convert_day.c`, `3-print_remaining_days.c` | Fixed a complex date-handling program. The bugs involved incorrect Leap Year math and incorrect total day counts for common years vs. leap years. |

## Learning Highlights
- **Dry-running code:** The process of mentally executing code or using paper and pen to track variable values through each line.
- **Trace-style debugging:** Inserting temporary `printf` statements to see what the computer is "thinking" during execution.
- **Isolating the issue:** Using comments to "turn off" sections of code to find exactly which line is causing the program to fail.

## How to Compile
Each task can be compiled by linking the logic file with its respective test "main" file. For example, for Task 2:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-largest_number.c -o 2-main
