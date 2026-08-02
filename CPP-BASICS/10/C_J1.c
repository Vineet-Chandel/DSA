#include <stdio.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // char str3[6] = {{'H'}, {'e'}, {'l'}, {'l'}, {'o'}};
    printf("%s\n", str1);
    printf("%s\n", str2);
    // printf("%s\n", str3);

    char text[] = "C-Programming";
    printf("Number of characters (excluding null terminator): %zu\n", (sizeof(text) / sizeof(text[0])) - 1); // 13
    printf("Number of characters (including null terminator): %zu\n", sizeof(text) / sizeof(text[0]));       // Including null terminator (13+1)/1 = 14
    printf("Size of text in bytes: %zu\n", sizeof(text));                                                    // 14 bytes
    printf("Size of each character in bytes: %zu\n", sizeof(text[0]));                                       // 1 byte

    // displaying substrings
    printf("%s\n", text);
    printf("%.1s\n", text);
    printf("%.2s\n", text);
    printf("%.3s\n", text);
    printf("%.4s\n", text);
    printf("%.5s\n", text);

    printf("\nUsing loop to display substrings:\n");
    int n = sizeof(text) / sizeof(text[0]);
    for (int i = 1; i < n; i++)
    {
        printf("%.*s\n", i, text);
    }
    return 0;
}