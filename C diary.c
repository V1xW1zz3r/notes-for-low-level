// Format specifiers:
// %d - int, bool (boolean)
// %s - string
// %c - char (character). If the char stores a number or similar, using %c can display the ASCII character. To display the numerical value, use %d.
// %f - float, %lf - double (long float). In "scanf": for double use %lf, for float use %f. For "printf" it generally doesn't matter.
// %".num"f -  Specifies decimal precision, showing "num" digits after the decimal point.
// %(num1)".num2"f -  Field width and precision. "num1" sets the minimum width of the output field (padding with spaces if needed). Use "-num1" for left-alignment.

//-------------------------------
// Constants:
// Add 'const' in front of a variable declaration (e.g., const int, const float, const char). This makes the variable's value immutable (unchangeable) after initialization.

int main(){
	float num1 = 2;
	num1 = 3;
	printf("%f", num1);

	return 0;
} // Result: 3

int main(){
	const float num1 = 2;
	num1 = 3; // This line will cause a compilation error.
	printf("%f", num1);

	return 0;
} // Result: Compilation error

//-------------------------------
// Arithmetic Operations:
// Addition (+)
// Subtraction (-)
// Multiplication (*)
// Division (/)
// Increment (++)  a++; (If 'a' was 5, after a++, 'a' becomes 6)
// Decrement (--)  b--; (If 'b' was 2, after b--, 'b' becomes 1)
// Modulus (%) -  Returns the remainder of a division.
int a = 5;
int b = 2;
int c = a % b;
printf("%d", c); // Output: 1 (because 5 divided by 2 has a remainder of 1)

// Shorthand assignment operators:
// x = x + 1; is equivalent to x += 1;  This shorthand applies to all arithmetic operators.
int d = 10;
d = d + 4; // Equivalent to d += 4;
d += 4;    // Shorthand for d = d + 4;
// x (argument) = (int) ...  (This line is unclear and seems incomplete. It's likely referring to type casting, but needs clarification)

//-------------------------------
// Strings:
// To create a string:
// char name[];  (Declaration only, not recommended without initialization or size)
// char name[] = "name"; (String literal initialization)
// char name[number]; (Declaration with a fixed size buffer. 'number' represents the maximum number of bytes this string can hold, including the null terminator.)
// If the input string exceeds the allocated buffer size, it can cause a buffer overflow, which is a security risk.
// scanf function is used to get input from the user.
// scanf("%s", name); // Note: No '&' is needed before 'name' when using scanf with a char array, as the array name itself decays to a pointer to the first element.

char cool[] = "Nick";
char name[10];
printf("Hi my name is %s, what's your name?\n", cool);
scanf("%s", name);
printf("My name is %s\n", name);

// Handling strings with spaces:
// If the string input might contain spaces, like "Jay Vulgan", use the "fgets" function instead of scanf("%s").
char name_with_space[20]; // Allocate more space for names with spaces
int clear_buffer_char;
while ((clear_buffer_char = getchar()) != '\n' && clear_buffer_char != EOF); // Clear input buffer before fgets to prevent issues

fgets(name_with_space, 20, stdin); // Read up to 19 characters (plus null terminator) from standard input into name_with_space.
name_with_space[strlen(name_with_space)-1] = '\0'; // Remove the trailing newline character that fgets usually includes.

//-------------------------------
// Math Functions:
// Include the math library: #include <math.h>

// sqrt = square root
double A = sqrt(9); // A will be 3.0
// pow = number raised to a power, i.e., number^power
double B = pow(3, 4); // B will be 81.0 (3 to the power of 4)
// round = rounds to the nearest integer
int C = round(3.14); // C will be 3
// ceil = rounds the number up to the nearest integer (ceiling)
int D = ceil(3.14); // D will be 4
// floor = rounds the number down to the nearest integer (floor)
int E = floor(3.95); // E will be 3
// fabs = absolute value (makes negative numbers positive)
double F = fabs(-200); // F will be 200.0000
// log (natural logarithm, base e)
double G = log(3); // G will be approximately 1.098612
// sin (sine, angle in radians)
double H = sin(45.0 * M_PI / 180.0); // H will be sin(45 degrees), M_PI is defined in math.h for Pi, convert degrees to radians.
// cos (cosine, angle in radians)
double I = cos(45.0 * M_PI / 180.0); // I will be cos(45 degrees)
// tan (tangent, angle in radians)
double J = tan(45.0 * M_PI / 180.0); // J will be tan(45 degrees)

//-------------------------------
// Circumference and Area Calculation of a Circle:
#include <stdio.h>
#include <math.h> // Include for M_PI

int main(){

const double PI = M_PI; // Use M_PI from math.h for more accurate Pi value
double radius;
double circumference;
double area;

printf("\nEnter the radius of the circle: ");
scanf("%lf", &radius); // %lf for double input

circumference = radius * 2 * PI;

printf("\nThe circumference is: %lf\n", circumference); // Use %lf for printing double

area = radius * radius * PI;

printf("The area of the circle is: %lf\n", area); // Use %lf for printing double
return 0;
}

//-------------------------------
// If Statements:
#include <stdio.h>
#include <string.h> // Include for string functions

int main(){
	int clear_buffer_char;
    int age;
    char name[25] ="";
    char answer[25] ="";

    printf("\nHey, just checking up. What's your age? ");
    scanf("%d", &age);
	printf("\nHow may I address you? ");
    while ((clear_buffer_char = getchar()) != '\n' && clear_buffer_char != EOF); // Clear input buffer before fgets
    fgets(name, 25, stdin);
    name[strcspn(name, "\n")] = 0; // Remove trailing newline

	printf("Hello %s", name);

	if (age >= 20) // Comparison: greater than or equal to 20
	{
    /* Code to execute if age is 20 or older */
        printf("\nYou are an adult.");
	}
	else if (age < 20 && age >= 13) // You can have multiple "else if" conditions before the final "else"
	{
	// Code to execute if age is between 13 and 19 (teenager)
        printf("\nYou are a teenager.");
	}
	else{
	/* Code to execute if none of the above conditions are true (age is less than 13) */
        printf("\nYou are a child.");
	}
	return 0;
}

//-------------------------------
// Switch Statements:
// Switch statements are often clearer than long if-else if chains, especially when checking for equality against multiple constant values.
// **Note:** Add ":" after each 'case' label and 'break;' to prevent fall-through to the next case.

#include <stdio.h>

int main(){
float GPA;
    printf("\nHow well did you do this semester? Enter GPA from 1.0-4.0: ");
    scanf("%f", &GPA);

    int int_GPA = (int)(GPA * 10); // Scale GPA by 10 to use integers in switch case

    switch(int_GPA){ // Switch statements work with integer types (char, int, etc.), not directly with floating-point numbers like 'double' or 'float' for ranges. Use if-else for ranges with doubles/floats if needed.
        case 40: // Cases can also be characters, e.g., case 'A': (needs single quotes)
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        printf("\nWow, really impressive %.1f!", GPA);
    break; // 'break' is essential to exit the switch after a case is matched. Without 'break', execution will "fall through" to the next case.
    	case 33:
    	case 32:
    	case 30: // Note: Case 31 is missing.
        printf("\nThat's alright, keep going.");
    break;
    	case 29:
    	case 28:
    	case 27:
    	case 26:
    	case 25:
    	case 24:
    	case 23:
    	case 22:
    	case 21:
    	case 20:
        printf("\nHmm, someone needs to work harder!");
    break;
    	case 19:
    	case 18:
    	case 17:
    	case 16:
    	case 15:
    	case 14:
    	case 13:
    	case 12:
    	case 11:
    	case 10:
        printf("\nWow, really impressive... YOU FAILED!");
    break;
    default: // 'default' case handles any value that doesn't match any of the 'case' labels.
        printf("Invalid input, please enter a GPA between 1.0 and 4.0.");
    }
    return 0;
}

// Yoda Notation (Condition on the Left):
// In Yoda notation, the constant value is placed on the left side of the comparison operator.
// Some programmers use this style to prevent accidental assignment (e.g., if (ret = 30) instead of if (ret == 30)).
// However, it can be less readable for some.

int somefunc() {
    return 30; // Example function returning 30
}

int main() {
    int ret = somefunc();
    //scanf("%d", &somefunc); // scanf is for reading input, not for function names. This line is incorrect and should be removed.

    if (30 == ret){ // Yoda notation: Comparing if 'ret' is equal to 30.
        printf("I wrote code like Yoda!");
    }
    return 0;
}

// Temperature Conversion Program:
#include <stdio.h>
#include <ctype.h> // Include for toupper() function (character type functions)

int main(){
    char unit;
    float temp;

    printf("\nTemperature converter. Enter unit (C) for Celsius or (F) for Fahrenheit: ");
    scanf("%c", &unit);

    unit = toupper(unit); // Convert the input unit to uppercase for case-insensitive comparison.

    if (unit == 'C') // Compare character with a character literal using single quotes ('C').
    {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);
        float ansF = (temp * 9.0/5.0) + 32.0;     // Formula for Celsius to Fahrenheit. Use floating-point numbers (e.g., 9.0, 5.0, 32.0) for accurate calculations.
        printf("\nTemperature in Fahrenheit: %.3fF\n", ansF); // Display result with 3 decimal places.
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        float ansC = ((temp - 32.0) * 5.0) / 9.0; // Formula for Fahrenheit to Celsius
        printf("\nTemperature in Celsius: %.3fC\n", ansC); // Display result with 3 decimal places.
    }
    else
    {
       printf("\nInvalid input. Please enter 'C' or 'F'.\n");
    }

    return 0;
}

// Small Calculator Program:
#include <stdio.h>
#include <stdlib.h> // For exit() function if needed
#include <math.h>   // For pow() function

int main(){
    char operator;
    double fnum;
    double snum;
    double result;

    printf("\nEnter an operator (+, -, /, *, ^): ");
    scanf(" %c", &operator); // Space before %c to consume any leading whitespace (like newline from previous input).
    printf("\nEnter the first number: ");
    scanf("%lf", &fnum);
    printf("\nEnter the second number: ");
    scanf("%lf", &snum);


    switch (operator)
    {
    case '+':
        result = fnum + snum;
        printf("\nThe result is: %.2lf\n", result); // Display result with 2 decimal places.
        break; // For addition

    case '-':
        result = fnum - snum;
        printf("\nThe result is: %.2lf\n", result); // For subtraction
        break;

    case '/':
        if (snum == 0) {
            printf("\nError: Division by zero!\n");
            // Consider exiting the program or handling the error differently
            // exit(1); // Example of exiting with an error code
            break;
        }
        result = fnum / snum;
        printf("\nThe result is: %.2lf\n", result); // For division
        break;

    case '*':
        result = fnum * snum;
        printf("\nThe result is: %.2lf\n", result); // For multiplication
        break;

    case '^':
        result = pow(fnum, snum); // Use pow() for exponentiation
        printf("\nThe result is: %.2lf\n", result); // For exponentiation
        break;

    default:
        printf("\nError: Invalid operator. Please enter +, -, /, *, or ^.\n");
        break;
    }

    return 0;
}

// Logical Operators (AND (&&), OR (||), NOT (!)):
#include <stdio.h>
#include <stdbool.h> // Include for boolean type '_Bool' or 'bool' (if supported)

int main(){
    float temp; // Temperature
    bool notsunny = true; // 'bool' is more readable than '_Bool', and requires stdbool.h. Initialize to 'true' meaning it's not sunny.

    printf("\nWhat's the temperature outside? ");
    scanf("%f", &temp);

    if ((temp >= 15 && temp <= 40) || !notsunny) // Condition: (temperature between 15 and 40 degrees Celsius inclusive) OR (it IS sunny)
    { // '!' is the NOT operator. '!notsunny' is true if 'notsunny' is false (meaning it IS sunny).
      // Original comment was confusing about "NOT NOT sunny".  It's simply "NOT notsunny" which means "is sunny".
        printf("\nThe weather is great.\n");
    }
    else
    {
        printf("\nThe weather is not great.\n");
    }
    return 0;
}

// Functions:
// Functions are blocks of reusable code.
// The 'main' function is the entry point of every C program.

// Default main function structure:
int main()
{
    return 0; // 0 indicates successful program execution.
}

// Example of a simple reusable function:
void reuse() { // 'void' return type means the function doesn't return any value.
    printf("I'm just a 2019 guy\n");
    printf("2019!\n");
    printf("2019!\n");
    printf("2019!\n");
}

int main_reuse_example() { // Renamed main to avoid conflict with other main functions in this file.
    reuse(); // Calling the 'reuse' function.
    reuse();
    reuse();
    return 0;
}

// Functions with parameters (arguments):
// To make functions more flexible, you can pass values to them as arguments.

void reuse_with_times(int times) {                 // Added an integer parameter 'times' to the 'reuse_with_times' function.
    for (int i = 0; i < times; i++) {   // Loop 'times' number of times.
        printf("I'm just a 2019 guy\n");
        printf("2019!\n");
        printf("2019!\n");
        printf("2019!\n");
    }
}

int main_reuse_times_example() { // Renamed main
    reuse_with_times(1);     // Call 'reuse_with_times' and pass the value 1 as the 'times' argument.
    reuse_with_times(2);     // Call 'reuse_with_times' and pass the value 2.
    reuse_with_times(3);     // Call 'reuse_with_times' and pass the value 3.
    return 0;     // The 'reuse_with_times' function is called a total of 6 times across these three calls, based on the sum of arguments (1+2+3).
}

// Arguments (Parameters):
// Arguments allow you to pass variables or values into functions, making them more versatile.
// Variables declared inside a function have local scope and are not directly accessible outside the function, unless passed as arguments or returned.

void reuse_with_name_year(char name[], int year) // Function now takes a char array 'name' and an integer 'year' as parameters.
{
        printf("I'm just a %d %s\n", year, name);
        printf("%d!\n", year);
        printf("%d!\n", year);
        printf("%d!\n", year);

}

int main_reuse_args_example() { // Renamed main
    char name[] = "guy";
    int year = 2019;
    reuse_with_name_year(name, year); // Pass the 'name' array and 'year' integer as arguments to the 'reuse_with_name_year' function.

    return 0;
}

// Return Statement:
// 'return' statement is used to send a value back from a function to the calling code.
// Functions can return values of various data types (int, double, char, etc.). 'void' return type means no value is returned.

int square(int x) // Function 'square' now has a return type of 'int', indicating it will return an integer value.
{
    //int result = x * x;
    //return result;
    return x * x;           // Calculate and return the square of 'x'. This is a more concise way to do the same as the commented-out lines.
}

int main_return_example() { // Renamed main
    int x = square(4); // Call 'square' with argument 4. The returned value (16) is assigned to 'x'.
    printf("The result is: %d\n", x); // Output: The result is: 16
    return 0;     // 0 indicates successful program execution.
}

// Further Examples of Return Values:
double multiply(double x, double y) // Function 'multiply' returns a 'double' value (product of two doubles).
{
    return x * y;
}

int main_multiply_example() { // Renamed main
    double x;   // Declare 'x' and 'y' as doubles.
    double y;
    printf("Enter the first number: ");
    scanf("%lf", &x);
    printf("Enter the second number: ");
    scanf("%lf", &y);

    double result = multiply(x, y); // Call 'multiply' and store the returned product in the 'result' variable.
    printf("The result is: %.2lf\n", result); // Display the result with 2 decimal places.
    return 0;     // 0 for success.
}

// Ternary Operator:
// A concise way to write simple if-else statements in a single line.
// Structure: (condition) ? value_if_true : value_if_false

int findMax(int x, int y)
{
    return (x > y) ? x : y; // If 'x > y' is true, return 'x'; otherwise, return 'y'.
}

int main_ternary_example() { // Renamed main
    int max = findMax(9, 4); // Call 'findMax' to get the maximum of 9 and 4.
    printf("The maximum is: %d\n", max); // Output: The maximum is: 9

    return 0;
}

// Function Prototypes:
// Function prototypes declare a function before it is defined, telling the compiler about the function's name, return type, and parameters.
// This allows you to call a function before its full definition appears in the code, and helps with compiler error checking.

void reuse_prototype(char name[], int year); // Function prototype declaration for 'reuse_prototype'.

int main_prototype_example() { // Renamed main
    char name[] = "guy";
    int year = 2019;
    reuse_prototype(name, year); // Call 'reuse_prototype'.

    return 0;
}

void reuse_prototype(char name[], int year) // Function definition (implementation) comes after 'main'.
{
        printf("I'm just a %d %s\n", year, name);
        printf("%d!\n", year);
}

// String Functions:
// To use string functions, include the string library: #include <string.h>
#include <string.h>
#include <stdio.h> // For printf

int main_string_funcs_example() { // Renamed main
    char string1[] = "Cool";
    char string2[] = "Guy";
    char string3[50]; // Buffer for string operations

    // String manipulation functions (examples):
    // strlwr(string1);              // Converts string1 to lowercase (Note: strlwr is not standard C, consider using tolower in a loop for portability).
    // strupr(string1);              // Converts string1 to uppercase (Note: strupr is also non-standard, use toupper in a loop).
    strcpy(string3, string1);       // Copies string1 to string3.
    strcat(string3, string2);      // Appends string2 to the end of string3 (string3 now contains "CoolGuy").
    printf("strcat: %s\n", string3);

    strcpy(string3, string1);
    strncat(string3, string2, 1);  // Appends the first '1' character from string2 to string3 (string3 now contains "CoolG").
    printf("strncat: %s\n", string3);

    strcpy(string1, string2);      // Copies string2 to string1 (string1 now contains "Guy").
    printf("strcpy: string1 is now \"%s\"\n", string1);

    strncpy(string1, "Original", 2); // Copies the first '2' characters from "Original" to string1 (string1 now contains "Or" + rest of previous string).
    printf("strncpy: string1 is now \"%s\"\n", string1);

    strcpy(string1, "Cool"); // Reset string1 for next example
    strset(string1, '?');         // Sets all characters in string1 to '?' (string1 now contains "????"). (Note: strset is non-standard).
    printf("strset (non-standard): string1 is now \"%s\"\n", string1);

    strcpy(string1, "Cool"); // Reset string1
    strnset(string1, 'a', 1);     // Sets the first '1' character in string1 to 'a' (string1 now contains "aool"). (Note: strnset is also non-standard).
    printf("strnset (non-standard): string1 is now \"%s\"\n", string1);

    strcpy(string1, "Cool"); // Reset string1
    strrev(string1);              // Reverses string1 (string1 now contains "looC"). (Note: strrev is non-standard).
    printf("strrev (non-standard): string1 is now \"%s\"\n", string1);

    strcpy(string1, "Cool"); // Reset string1

    // String information functions:
    int length = strlen(string1); 	         // Returns the length of string1 (excluding the null terminator).
    printf("strlen: Length of string1 is %d\n", length);

    int comparison_result_strcmp = strcmp(string1, string2);  // Compares string1 and string2 lexicographically. Returns 0 if equal, negative if string1 comes before string2, positive if string1 comes after.
    printf("strcmp: Comparison result (Cool vs Guy) is %d\n", comparison_result_strcmp);

    int comparison_result_strncmp = strncmp(string1, string2, 2); // Compares the first '2' characters of string1 and string2.
    printf("strncmp: First 2 chars comparison result (Cool vs Guy) is %d\n", comparison_result_strncmp);

    strcpy(string1, "COOL"); // Uppercase version of "Cool"
    int comparison_result_strcmpi = strcmpi(string1, string2);    /* Compares string1 and string2 ignoring case (case-insensitive comparison).
								(Note: strcmpi is non-standard, use stricmp or _stricmp for Windows, or implement manually for cross-platform).*/
    printf("strcmpi (non-standard, case-insensitive): Comparison result (COOL vs Guy) is %d\n", comparison_result_strcmpi);


    return 0;
}

// For Loops:
// For loops are used to repeatedly execute a block of code a specific number of times.

int main_for_loop_example() { // Renamed main
    for (int i = 1; i <= 10; i+=2) // Loop initialization: i=1; condition: i<=10; increment: i+=2 (i increases by 2 in each iteration).
    {
        printf("cool %d\n", i); // This will print "cool" followed by the value of 'i' in each iteration (1, 3, 5, 7, 9).
    }

    return 0;
}

// Do-While Loop:
// A do-while loop is similar to a while loop, but it guarantees that the loop body executes at least once before checking the loop condition.

int main_do_while_example() { // Renamed main
    int number = 0;
    int sum = 0;

    do{ // The code block inside 'do' will execute at least once.
        printf("Enter a positive number (or non-positive to stop): ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number; // Add the positive number to the 'sum'.
        }

    }while (number > 0); // The loop continues as long as 'number' is greater than 0.
    printf("Sum of positive numbers entered: %d\n", sum);
    return 0;
}

// Nested Loops: A loop inside another loop.
// Nested loops are often used for processing 2D data structures like matrices or grids.

int main_nested_loop_example() { // Renamed main
    int rows;
    int cols;
    char symbol;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols); // After hitting enter in scanf, a newline character ('\n') is left in the input buffer.

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol); // Add a space before %c in scanf format string to consume any leading whitespace (including the newline from previous input).

    for (int i = 1; i <= rows; i++) // Outer loop iterates through rows.
    {
        for (int j = 1; j <= cols; j++) // Inner loop iterates through columns for each row.
        {
            printf("%c", symbol); // Print the specified 'symbol' for each column in the current row.
        }
        printf("\n");   // After printing all columns in a row, move to the next line to start a new row.
    }

    return 0;
}

// Continue Statement:
// The 'continue' statement skips the rest of the current iteration of a loop and proceeds to the next iteration.

int main_continue_example() { // Renamed main
    for (int i = 0; i >= -10; i--) // Loop from 0 down to -10.
    {
        if (i == 0 || i == -3) // Check for multiple conditions using OR operator '||'. Original comment used comma ',' which is incorrect here.
        {
            continue; // If 'i' is 0 or -3, skip the rest of the current iteration and go to the next value of 'i'.
        }
        printf("%d\n", i); // Print 'i' unless it's 0 or -3.
    }
    return 0;
}

// Arrays:
// Arrays are used to store collections of elements of the same data type in contiguous memory locations.

int main_array_example() { // Renamed main
    double prices[5]= {4.0, 8.0, 9.0, 20.5, 43.0}; // Declare and initialize an array 'prices' of 5 doubles. Array indices are from 0 to 4.

    for (int i = 0; i < 5; i++) // Loop through the array elements using an index 'i' from 0 to 4.
    {
        if (i >= 5) // This condition will never be true inside the loop as 'i' is controlled to be less than 5. This check is redundant and can be removed.
        {
            printf("Oops, something went wrong\n");
            break; // 'break' would exit the loop prematurely, but this branch is never reached.
        }
        printf("The price of cheese %d: $%.2lf\n", i+1, prices[i]); /* Print the price of each cheese, using index 'i' to access array elements. Display prices with 2 decimal places. 
	(Note: Changed "cheese%d" to "cheese %d" and added +1 to 'i' for 1-based indexing in output, which is more user-friendly.) */
    }

    return 0;
}

// For Loop with Array and Sizeof Operator:
#include <stdio.h>

int main_sizeof_array_example() { // Renamed main
    double prices[]= {4.0, 8.0, 9.0, 20.5, 43.0}; // Array size is automatically determined by the number of initializers.

    printf("The size (in bytes) of the 'prices' array is: %zu\n", sizeof(prices)); // 'sizeof(prices)' gives the total size of the array in bytes. Use %zu for size_t type.
    // 'sizeof' operator returns the size of a variable or data type in bytes. For 'double', it's typically 8 bytes.

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) // Calculate the number of elements in the array dynamically using 'sizeof'.
    // sizeof(prices) - total size of array, sizeof(prices[0]) - size of one element (double). Division gives number of elements.
    {
        printf("The price of cheese %d: $%.2lf\n", i+1, prices[i]); // Print prices, similar to previous example.
    }

    return 0;
}

// 2D Arrays (Multidimensional Arrays):
// A 2D array is an array of arrays, often used to represent tables, grids, or matrices.

int main_2d_array_example() { // Renamed main
    /*int nums[2][3] = // The first dimension is like rows, the second dimension is like columns.
    {
        {1, 2, 3},
        {4, 5, 6}
    };              // Second bracket specifies the maximum size of columns: 3. The first bracket (rows) size is optional if initialized.
    */

    // 'int' typically occupies 4 bytes.
    int nums[2][4]; // Declare a 2D array 'nums' with 2 rows and 4 columns. Indices start from 0 (nums[0][0] is the first element).
    int rows = sizeof(nums)/sizeof(nums[0]);          // Calculate the number of rows: Total size of 'nums' divided by the size of one row.
    int columns = sizeof(nums[0])/sizeof(nums[0][0]); // Calculate the number of columns: Size of one row divided by the size of one element in a row.
    printf("Number of rows: %d\n", rows);
    printf("Number of columns: %d\n", columns);

    nums[0][0] = 1; // Initialize elements of the 2D array.
    nums[0][1] = 2;
    nums[0][2] = 3;
    nums[0][3] = 4;
    nums[1][0] = 5;
    nums[1][1] = 6;
    nums[1][2] = 7;
    nums[1][3] = 8;

    printf("2D Array 'nums':\n");
    for (int i = 0; i < rows; i++) // Outer loop iterates through rows.
    {
        for (int j = 0; j < columns; j++) // Inner loop iterates through columns for each row.
        {
            printf("%d ", nums[i][j]); // Print the element at row 'i' and column 'j', followed by a space.
        }
        printf("\n"); // After printing all columns in a row, move to the next line.
    }

    return 0;
}

// Example of sizeof calculation for 2D array (moved to be inline with 2D array example for better context):
/*
// The sizeof calculation in a 2D array (table)
int main() {
    int nums[3][3];  // A 3x3 array of integers (like a table)

    // Calculate the number of rows:
    //   Total size of the array / size of one row
    int rows = sizeof(nums) / sizeof(nums[0]);
    // sizeof(nums) is the total size of the 3x3 array (36 bytes if int is 4 bytes)
    // sizeof(nums[0]) is the size of the first row (3 integers = 12 bytes)
    // So, 36 / 12 = 3 rows

    // Calculate the number of columns:
    //   Size of one row / size of one element in a row
    int columns = sizeof(nums[0]) / sizeof(nums[0][0]);
    // sizeof(nums[0]) is the size of the first row (12 bytes)
    // sizeof(nums[0][0]) is the size of a single integer (4 bytes)
    // So, 12 / 4 = 3 columns

    printf("Number of columns: %d\n", columns); // Prints 3
    printf("Number of rows: %d\n", rows);       // Prints 3

    return 0;
}
*/

// Array of Strings:
// An array of strings is essentially a 2D array of characters. Each row represents a string.
#include <stdio.h>
#include <string.h>

int main_array_strings_example() { // Renamed main
    char yname[25];
    char names[][10]={"Corley", "", "May", "Jason"}; // 'names' is an array of strings, each string can be up to 9 characters + null terminator (total 10 bytes).
    // A string array conceptually looks like: { "Corley", "", "May", "Jason" }. Each string is stored as a char array.
    // In memory, it's a contiguous block of memory allocated for 4 strings of 10 chars each. Uninitialized parts are not guaranteed to be empty, but often filled with null bytes.

    printf("\nEnter your name: ");
    fgets(yname, 25, stdin);     // Use fgets for safer input to read strings that might contain spaces. Reads up to 24 characters + null terminator.
    yname[strcspn(yname, "\n")] = '\0'; // Remove the trailing newline character from fgets input if present.
    // Use strncpy instead of strcpy to prevent buffer overflows when copying strings into fixed-size buffers.
    strncpy(names[1], yname, 9); // Copy up to 9 characters from 'yname' to 'names[1]'. Leave space for null terminator.
    names[1][9] = '\0'; // Manually add a null terminator at the end to ensure 'names[1]' is a valid C string and to prevent buffer overflow if yname was close to 9 chars.
    // Null terminator is crucial for C-style strings to mark the end of the string.

    printf("List of names:\n");
    for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++) // Iterate through the array of strings.
    // (Total size of the 'names' array in bytes) / (Size of one row/string in bytes) = Number of strings in the array.
    /*
    sizeof(names) would be 40 (4 rows * 10 bytes/row).
    sizeof(names[0]) would be 10 (10 bytes/row - size of one string).
    40 / 10 = 4 (number of strings).
    */
    {
        printf("%s\n", names[i]);
    }
    printf("You are on the list!\n");
    return 0;
}

// Swapping Values of Two Variables:
#include <stdio.h>
#include <string.h>

int main_swap_variables_example() { // Renamed main
    char x[15] = "Ice";     // Initialize char arrays (strings). Original example used ints, now using strings to demonstrate string swapping.
    char y[15] = "Water";
    char temp[15];          // Temporary char array 'temp' for swapping.

    printf("Before swap: x = \"%s\", y = \"%s\"\n", x, y);

    strcpy(temp, x);        // temp = x; Copy the value of 'x' to 'temp'. For strings, use strcpy (or strncpy for safety).
    strcpy(x, y);           // x = y; Copy the value of 'y' to 'x'.
    strcpy(y, temp);        // y = temp; Copy the value of 'temp' (original 'x') to 'y'.

    printf("After swap: x = \"%s\", y = \"%s\"\n", x, y);
    return 0;
}

// Bubble Sort: Sorting an Array
// Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
#include <stdio.h>

void sort(int array[], int size) // Sorting function. Takes an integer array and its size as input.
{
    for (int i = 0; i < size -1; i++)   // Outer loop iterates 'size - 1' times.
    {
        for (int j = 0; j < size -i -1; j++) // Inner loop iterates through unsorted part of the array. In each pass of outer loop, the largest element bubbles to the end, so we reduce inner loop iterations.
        {
            if (array[j] > array[j+1])  // Compare adjacent elements. For ascending order, check if array[j] is greater than array[j+1]. Change to '<' for descending order.
            {
                int temp = array[j];    // Swap array[j] and array[j+1] if they are in the wrong order.
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) // Function to print an array.
{
   printf("Sorted array: ");
   for (int i = 0; i < size; i++)
   {
    printf("%d ", array[i]); // Print each element followed by a space. Use %c if the array is of char type and you want to print characters based on ASCII values.
   }
   printf("\n");
}

int main_bubble_sort_example() { // Renamed main
    int array[] = {68, 67, 65, 70, 73, 78, 77, 69, 75, 87};
  //char charArray[] = {'d', 'c', 'a', 'f', 'i', 'n', 'm', 'e', 'k', 'w'};    // Also works with char arrays (strings). Need to change data type in sort function and printArray if using char array directly.
    int size = sizeof(array)/sizeof(array[0]);  // Calculate the size of the array dynamically.

    printf("Original array: ");
    printArray(array, size);

    sort(array, size); // Call the sorting function to sort the array in ascending order.

    printArray(array, size); // Print the sorted array.
    return 0;
}

// Structs (Structures):
// Structs are user-defined data types that group together variables of different types under a single name. They are like simple classes in other languages (without methods).
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For exit()

struct Player // Define a struct named 'Player'.
{
    char name[20]; // Member variable: 'name' (char array to store player's name).
    int score;     // Member variable: 'score' (integer to store player's score).
};

int main_struct_example() { // Renamed main
    char yname[20];
    int yscore;
    struct Player player1; // Declare a struct variable 'player1' of type 'Player'. This creates an instance of the Player struct.
    struct Player player2; // Declare another struct variable 'player2'.

    printf("Enter player name: ");
    fgets(yname, sizeof(yname), stdin); // Use fgets for safer input of player name.
    yname[strcspn(yname, "\n")] = 0;    // Remove trailing newline from fgets input.

    printf("Enter player score: ");
    if (scanf("%d", &yscore) != 1) // Input validation: check if scanf successfully read an integer. scanf returns the number of input items successfully matched and assigned.
    {   // If scanf did not read one integer (return value is not 1), it's an invalid input.
        printf("Invalid score input. Please enter a number.\n");
        return 1; // Indicate an error by returning a non-zero value from main.
        // exit(1); // or use exit(1) to terminate the program immediately.
    }
    // Clear the input buffer in case of invalid input (important after scanf with %d followed by fgets or other input functions).
    int clear_buffer_char;
    while ((clear_buffer_char = getchar()) != '\n' && clear_buffer_char != EOF); // Clear buffer to prevent issues in subsequent input operations.

    strcpy (player1.name, yname); // Assign the input name to the 'name' member of 'player1'.
    player1.score = yscore;       // Assign the input score to the 'score' member of 'player1'.

    strcpy (player2.name, "Hensan"); // Directly initialize 'player2' members.
    player2.score = 3;

    printf("\nPlayer 1: %s scored %d points.\n", player1.name, player1.score); // Access struct members using the dot operator (.).
    printf("Player 2: %s scored %d points.\n", player2.name, player2.score);

    return 0; // Indicate successful program execution.
}
// Typedef for character array:
// This can be used as a string type for usernames or similar purposes.
typedef char user[25];

int main()
{
    user user1 = "Musk"; // Declare a variable 'user1' of type 'user' (which is char[25]) and initialize it with "Musk".
    printf("%s", user1);   // Print the string stored in 'user1'
    return 0;
}
// Typedef with struct:
// Defines a new type 'user' as a struct.
// This allows us to use 'user' instead of 'struct user' when declaring variables.
typedef struct
{
    char name[20];     // Member variable: 'name' to store the user's name (string)
    char password[20]; // Member variable password
    int id;            // Member variable id
} user;

int main()
{
    user user1 = {"Musk", "PasSwORld9032", 341256342}; // Declare and initialize 'user1' of type 'user' struct
    user user2 = {"MasKi", "PasSword1231", 8964646464};

    printf("Name:%s, Password:%s, ID:%d\n", user1.name, user1.password, user1.id); // Access and print members of 'user1' using dot operator.
    printf("Name:%s, Password:%s, ID:%d\n", user2.name, user2.password, user2.id);
    return 0;
}
//struct array
typedef struct
{
    char name[20]; // Member variable: 'name' to store the name (string, up to 19 characters + null terminator)
    float gpa;     

} Score; // 'Score' is now a new type name for this struct
        // Instead of writing 'struct Score', you can just write 'Score'

int main()
{
    Score person1 = {"Casca", 3.4};
    Score person2 = {"Guts", 4.0};  
    Score person3 = {"Griffith", 2.3}; 
	
    Score people[] = {person1, person2, person3};
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); i++) 
    {
        // 'sizeof(people[0])' gives the size of one 'Score' struct in bytes (which is the size of the first element).
        // Dividing the total size by the size of one element gives the number of elements in the array.
        printf("Name:%s\t", people[i].name); // "\t" is for tab
        printf("GPA:%.2f\n", people[i].gpa);  
    }
    return 0;
}
//enum = enumeration
//help make the program look dope
enum Day{Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7}; //assign the values. NOTE: it all start from 0

int main()
{  
    enum Day today = Sun; //enums are not strings, but int
    if (today == Sun || today == Sat) //more readable
    {
        printf("\nWeekend, yeah!!");
    }
    else
    {
        printf("\nWorking day :(");
    }
    
    
    return 0;
}
//random numbers
//rand function gives range from 0-32767
int main()
{   
    srand(time(0)); //s for seed rand for number; seed is needed to give random number each round or stay the same
    int num1 = (rand() % 100) + 1; //generate a random num between 1 and 100 start from 1

    printf("%d is the random number", num1);

    return 0;
}
//number guessing game, uses do while to complete it
int main()
{   
    const int MIN = 1; //specify the lowest number
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0)); //uses current time as a seed to generate
    answer = (rand() % MAX) + MIN; //assign the range
	
    do
    {
        printf("Enter a number to guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("too high\n");
        }
        else if (guess < answer)
        {
            printf("too low\n");
        }
        else 
        {
            printf("YOU WIN!!\n");
        }
        guesses++; //record how many rounds it takes to guess it
    } while (guess != answer);

    printf("Answer:%d\n", answer);
    printf("It took you %d guesses to guess it.\n", guesses);

    return 0;
}
//lil quiz game
int main()
{   
    char questions[][100] = {"Is DOOM doomed?", "For morning routine what should you prepare?", "What tpye of language is the best?"};

    char options[][100] = {"A. Yes", "B. No", "C. Dope ass skeleton", "D. What?", "A. Banana peel", "B. Water", "C. Bowl with ice", "D. Brand new notebook",
                            "A. C", "B. Rust", "C. Brainfxck", "D. JavaScript"};

    char answers[] ={'C', 'C', 'A'}; // More straightforward for char array
    int numofqusts = sizeof(questions)/sizeof(questions[0]);
    int score = 0;
    char guess;

    for (int i = 0; i < numofqusts; i++)
    {
        printf("%s\n", questions[i]);

        for (int j = (i * 4) ; j < (i * 4) + 4 ; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf(" %c", &guess); // Use space to consume leading whitespace (including newline)
        // getchar(); // No longer needed with " %c" in scanf
        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("EASYY\n");
            score++;
        }
        else
        {
            printf("WHAAAA\n");
        }
    }
    printf("%d/%d\n", score, numofqusts);
    return 0;
}
//bitwize operators
//operators use in bit level programning
//& = AND
//| = OR
//^ = XOR
//<< left shift
//>> right shift
int x = 11; //11 = 00001011
int y = 31; //31 = 00011111
int z = 0;  // 0 = 00000000

z = x & y; //-> 00001011 = 11
z = x | y; //-> 00011111 = 31
z = x ^ y; //-> 00010100 = 20
z = x << 1; //-> 00010110 = 22
z = y >> 2; //-> 00000111 = 7
//memory addresses
int main()
{   //char use up 1 byte, using 1 memory block use up 1 memory address
    //short use 2 bytes, using 2 memory blocks use up 2 memory addresses
    //int/float use 4 bytes, using 4 - 4
    //double use 8 bytes, using 8 - 8
    char a[3]; //array
    char b;
    int c[2]; //array


    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c)); 

    printf("%p\n", &a); //%p is looking for where they stored
    printf("%p\n", &b);
    printf("%p\n", &c);
}
//pointers
//holds memory address
int main()
{   //* = indirectional operator
    char name[]="Jack";
    char *pName = name;

    int age = 19;
    int *pAge = NULL; //better to assign NULL if declaring a pointer
    pAge = &age;      
    //int *pAge = &age; //assign the pointer

    printf("Age address: %p\n", &age); //address of the name variable
    printf("value of pAge: %p\n", pAge); //should be the same as age

    printf("value of age: %d\n", age ); //should be the same as pointer Age
    printf("vaule at stored address: %d\n", *pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));
}
int main()
{   int b = 3;
    int * pB = &b; //* pointer to an int, interger pointer named 'pB' is set to the address of b
    int c = *pB;   //interger named c is set to the thing pointed by pB, in this case set c to b

    printf("%p\n", c);
    printf("%p\n", pB);
}
//writing files  w -write, a -append, r -read
//-w writing
int main()
{   //can write a file in existed file by passing the path or in the same file as the code
    FILE *pF = fopen("C:\\Users\\*\\*\\.vscode", "w"); //fopen("file.name", "mode");
    
    fprintf(pF, "ayee");

    fclose(pF);
}
//-a append
int main()
{
    FILE *pF = fopen("test.txt", "a"); //fopen("file.name", "mode");
    
    fprintf(pF, "\nHey there this a new line attached by 'a' mode");

    fclose(pF);
}
//deleting files just use remove statement
int main()
{  
    if (remove("test.txt")  == 0 )
    {
        printf("File Deleted");
    }
    else
    {
        printf("Failed to delete the file");
    }
}
//-r reading files 
int main()
{  
    FILE *pF = fopen("test.txt", "r");
    char buffer[255]; //string that holds up 255bytes

    if (pF != 0) //check if the file exists
    {
        while (fgets(buffer, 255, pF) != NULL) //check if the line contains anything
        {
        printf("%s", buffer); //print the stuff out line by line
        }   
    }
    else
    {
        printf("the file does not exist");
    }

    fclose(pF); //consider a good practice to close it
    return 0;
}
//tic tac toe game
char board[3][3]; //2d array
const char Player = 'X';
const char Computer = 'O';
void ResetB();
void PrintB();
int checkFreeSpaces();
void PlayerMove();
void ComputerMove();
char CheckWinner();
void PrintWinnter(char);

int main()
{
    char winner = ' ';
    char response;

    do
    {   
        winner = ' ';
        response = ' ';
        ResetB();//reset board
        while (winner == ' ' && checkFreeSpaces() != 0)
        {
        PrintB();//print board

        PlayerMove();
        winner = CheckWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
        ComputerMove();
        winner = CheckWinner();
        if (winner != ' ' || checkFreeSpaces() == 0)
        {
            break;
        }
        }
        PrintB();
        PrintWinnter(winner);
        printf("\nAgain?(Y/N): ");
        scanf(" %c", &response); 
        response = toupper(response);
    } while (response == 'Y');
    printf("Thx for playing");
    return 0;
}

void ResetB()
{
    for (int i = 0; i < 3 ; i++) //nested loop, since we have 3x3 just set to i/j < 3
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' '; //set to empty space
        }
    }
}
void PrintB()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}
int checkFreeSpaces()
{
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--; //if a space is occupied then cut one available on freeSpaces
            } 
        } 
    }
    return freeSpaces;
}
void PlayerMove()
{
    int x;
    int y;
    do
    {   printf("Enter row 1-3: ");
        scanf("%d", &x);
        x--;
        printf("Enter column 1-3: ");
        scanf("%d", &y);
        y--;
    
        if (board[x][y] != ' ')
        {
            printf("Space taken\n");
        }
        else
        {
            board[x][y] = Player;
            break;
        }
    } while (board[x][y] = ' ');
    

}
void ComputerMove()
{
    //create a seed for randomization
    srand(time(0));
    int x;
    int y;

    if (checkFreeSpaces() > 0 )
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = Computer;
    }
    else
    {
        PrintWinnter(' ');
    }
}
char CheckWinner()
{
    //check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) //check if the elements are eqaul to each one
        {
            return board[i][0];
        }
    }
    //check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) //check if the elements are eqaul to each one
        {
            return board[0][i];
        }
    }
    //check diagonals
    for (int i = 0; i < 3; i++)
    {
        if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) //check if the elements are eqaul to each one
        {
            return board[0][0];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) //check if the elements are eqaul to each one
        {
            return board[0][2];
        }
    }
    return ' ';
}
void PrintWinnter(char winner)
{
    if (winner == Player)
    {
        printf("YOU WINN");
    }
    else if (winner == Computer)
    {
        printf("YOU LOSE");
    }
    else
    {
        printf("DRAW");
    }
}
//unions (please don't use it)
//the combination of struct and enum, it's like A or B "only"
typedef union AgeOrName //use union to save memory
{
    int age;
    char *name;
} AorN;

int main()
{
    //AorN P1 = {.age = 20}; //You cannot show both age and name from the union in your code
    AorN P1 = {.name = "Nick"};

    //printf("Age: %d", P1.age);
    printf("Name: %s", P1.name);
    return 0;
}
//you can store struct in union like this:
union elements 
{
struct
 {
    int projectile;
    int range;
 } fire;
struct
 {
    int freeze;
    int range;
 } ice;
};
