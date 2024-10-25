#include <stdio.h>

int main() {
    /*
        varaible = Allocated space in memory to store a value.

        We refer to a variable's name to access the stored value.
        That variable now behaves as if it was the value it contains.
        BUT we need to declare what type of data we are storing.
    */

    int x;       // Declaration
    x = 123;     // Initialization
    int y = 321; // Declaration and initialization

    int age = 21;        // Integer
    float gpa = 2.05;    // Floating point number
    char grade = 'C';    // Sinlge character
    char name[] = "Bro"; // Array of characters
    // And a ton more

    printf("You are %d years old", age);

    return 0;
}