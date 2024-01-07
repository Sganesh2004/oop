#include <stdio.h>
int main()
{
    char array1[100], array2[100];
    printf("\nEnter the first string: ");
    gets(array1);   // inputting first string

    printf("\nEnter the second string to be concatenated: ");
    gets(array2);   // inputting second string

    char *a = array1;
    char *b = array2;

    // pointing to the end of the 1st string
    while(*a)   // till it doesn't point to NULL-till string is not empty
    {
        a++;    // point to the next letter of the string
    }
    while(*b)   // till second string is not empty
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  // string must end with '\0'
    printf("\nThe string after concatenation is: %s ", array1);
    return 0;
}