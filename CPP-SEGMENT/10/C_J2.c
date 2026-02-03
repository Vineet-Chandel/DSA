#include <stdio.h>
#include <string.h>  // strlen, strcpy, strncpy, strcmp, strncmp
#include <strings.h> // strcasecmp (POSIX)

int main()
{

    // strlen()
    char str[] = "Hello, World!";
    size_t length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of the string (excluding null terminator): %zu\n", length);

    size_t funcLen = strlen(str);
    printf("Length using strlen() function: %zu\n", funcLen);

    // strcpy()
    char text[80], dup1[80] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", dup2[80] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    fgets(text, sizeof(text), stdin);
    strcpy(dup1, text);
    printf("%s\n", dup1);
    // strncpy()
    strncpy(dup2, text, 6);
    printf("%s\n", dup2);

    char compar1[] = "HELLO";
    char compar2[] = "hello";
    char compar3[] = "hello";
    char compar4[] = "he is good";

    if (strcmp(compar1, compar2) != 0)
    {
        printf("strcmp : DIFFERENT\n");
    }
    else
    {
        printf("strcmp : SAME\n");
    };

    if (strcasecmp(compar1, compar2) != 0)
    {
        printf("stricmp : DIFFERENT\n");
    }
    else
    {
        printf("stricmp : SAME\n");
    };

    if (strncmp(compar3, compar4, 2) != 0)
    {
        printf("strncmp : DIFFERENT\n");
    }
    else
    {
        printf("strncmp : SAME till the index given \n");
    };

    printf("%s\n", strupr(compar2));
    printf("%s\n", strlwr(compar1));
    return 0;
}