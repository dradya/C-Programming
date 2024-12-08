//program to demonstrate the strlen() function
#include <stdio.h>
#include <string.h>
int main()
{
    // Declare and initialize a character array 'str' with
    // the string "GeeksforGeeks"
    char str[] = "GeeksforGeeks";

    // Calculate the length of the string using the strlen()
    // function and store it in the variable 'length'
    size_t length = strlen(str);

    // Print the length of the string
    printf("String: %s\n", str);

    printf("Length: %zu\n", length);

    return 0;
}