
##Problem Analysis:
The given code represents a simple calculator program that performs basic arithmetic operations on numeric values. Here's a brief problem analysis:

1.Initialization of Variables: kutir (operand), operation (operator), and witet (result).
User Input:

2.The program prompts the user to enter the first operand (witet) and enters a loop that continues until the user inputs '0'.
Main Loop:

3.Inside the loop, the user is prompted to enter an operation (+, -, *, /, =, or '0' to exit).
The program then switches based on the entered operation.
Operation Handling:

4.If '0' is entered, the loop is exited.
If '=' is entered, the current result (witet) is displayed.
For other operations (+, -, *, /):
The user is prompted to enter the next operand (kutir).
The program performs the corresponding arithmetic operation on witet based on the entered operator.
Division by Zero Check:

5.Before performing division, the code checks if the divisor (kutir) is not equal to zero to avoid division by zero errors.
Displaying Results:

6.The final result (witet) is displayed once the loop exits.

##pseudo code
Initialize variables:

float kutir
char operation
float witet
Prompt user to enter the first kutir:

Output: "Enter the first kutir:"
Input: witet
Start a loop that continues until the user enters '0':

Begin loop:

Output: "Enter the operation (+, -, *, /, =) or '0' to exit:"

Input: operation

Switch on operation:

Case '0':

Exit the loop if the user enters '0'.
Case '=':

Display the current result if the user enters '='.
Output: "Current result is: " + witet
Default:

Prompt user to enter the next kutir:

Output: "Enter the next kutir:"
Input: kutir
Switch on operation:

Case '+':
Perform addition: witet += kutir
Case '-':
Perform subtraction: witet -= kutir
Case '*':
Perform multiplication: witet *= kutir
Case '/':
Check for division by zero:
If kutir is not equal to 0:
Perform division: witet /= kutir
Else:
Output: "Division by zero is Undefined."
Default:
Output: "Enter a valid operation"
Exit the inner loop if operation is '0'.

Continue the outer loop while operation is not '0'.

Display the final result:

Output: "The final result is: " + witet
##flowchart
![Flowchart](ETS0814_15_LEMESA_ELIAS/Activity_3.1/mermaid-diagram-2023-12-04-221949.png)



  N-->P[Display: 'Division by zero is Undefined.'];
  J-->Q[Display: 'Enter a valid operation'];
  D-->R[Exit outer loop];
  C-->B;
  R-->S[Display: 'The final result is: ' + wite];
```
