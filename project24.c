//program to demonstrate the strcmp() function
#include <stdio.h>
#include <string.h>

int main()
{
    // Define a string 'str1' and initialize it with "Geeks"
    char str1[] = "Geeks";
    // Define a string 'str2' and initialize it with "For"
    char str2[] = "For";
    // Define a string 'str3' and initialize it with "Geeks"
    char str3[] = "Geeks";

    // Compare 'str1' and 'str2' using strcmp() function and
    // store the result in 'result1'
    int result1 = strcmp(str1, str2);
    // Compare 'str2' and 'str3' using strcmp() function and
    // store the result in 'result2'
    int result2 = strcmp(str2, str3);
    // Compare 'str1' and 'str1' using strcmp() function and
    // store the result in 'result3'
    int result3 = strcmp(str1, str1);

    // Print the result of the comparison between 'str1' and
    // 'str2'
    printf("Comparison of str1 and str2: %d\n", result1);
    // Print the result of the comparison between 'str2' and
    // 'str3'
    printf("Comparison of str2 and str3: %d\n", result2);
    // Print the result of the comparison between 'str1' and
    // 'str1'
    printf("Comparison of str1 and str1: %d\n", result3);

    return 0;
}