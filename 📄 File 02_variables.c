📄 File 02: 02_variables.c
Concept: Data Types, Variables (Data ke Dabbe), aur Formatting.

💻 Code:
C
#include <stdio.h>

int main() {
    int age = 18;
    double marks = 85.50;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Marks: %.2lf\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}
🧠 Key Learnings:
Data Types:

1. int: Full Integer numbers store karta hai (%d).

2. double: Point/Decimal wale numbers store karta hai (%lf).

3. char: Single letter/symbol store karta hai (%c), single quotes ' ' ke andar.

4. %.2lf: Point ke baad sirf 2 decimal places tak print karta hai (85.50).
