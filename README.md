This is a menu-driven calculator program written in C that performs basic arithmetic operations along with additional features like memory storage and calculation history.
The program runs in a loop and allows users to continuously perform calculations until they choose to exit.
⚙️ Features
🧮 Basic Operations
Addition
Subtraction
Multiplication
Division
🧠 Memory Functions
Store value in memory
Recall memory value
Clear memory
📜 History Tracking
Stores last 10 results
Displays previous calculations
🔁 Continuous Execution
Runs in a loop until user exits
🏗️ How It Works
1. Menu System
The program uses a while(1) loop to repeatedly show options like:

1. Add
2. Subtract
3. Multiply
4. Divide
...
User selects an option using choice.
2. Input Handling
C
float a, b;
scanf("%f %f", &a, &b);
Takes two numbers from user
Uses float for decimal support
3. Operation Logic
Each operation is handled using conditions (if / switch):
Example:
C
result = a + b;
Division includes a safety check:
C
if (b != 0)
4. Memory System
C
float memory = 0;
Store:
C
memory = result;
Recall:
C
printf("%f", memory);
5. History Feature
C
float history[10];
int count = 0;
Stores results in an array
Keeps only last 10 values
Uses index tracking (count)
📂 Example Output

===== CALCULATOR =====
1. Add
2. Subtract
3. Multiply
4. Divide
5. Memory Store
6. Memory Recall
7. Show History
8. Exit

Enter choice: 1
Enter numbers: 5 3
Result = 8


📊 Concepts Used
Loops (while)
Conditional statements (if/switch)
Arrays
Functions (if added later)
User input/output
Memory handling logic
🔮 Future Improvements
You can upgrade this project by adding:
Scientific calculator (sin, cos, log)
File handling (save history permanently)
GUI using libraries
Keyboard shortcuts
Expression parsing (like 2+3*5)
