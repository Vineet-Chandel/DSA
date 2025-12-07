#include <stdio.h>
#include <string.h>
int main()
{
    // ===============================
    // BASIC IF STATEMENT
    // ===============================

    int age;
    printf("enter your age !!");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult.\n");
    }

    printf("Program ended.\n");

    // ===============================
    // IF - ELSE STATEMENT
    // ===============================

    int age;
    printf("enter your age !!");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are NOT eligible to vote.\n");
    }
    printf("Check complete.\n");

    // ==========================================
    // IF - ELSE IF - ELSE LADDER
    // Example: Grading system
    // ==========================================

    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", marks);
    if (marks > 100 || marks < 0)
    {
        printf("Invalid marks.\n");
    }
    else if (marks >= 90)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    // ==========================================
    // NESTED IF - ELSE
    // Example: Login system with role check
    // ==========================================

    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username); // NO & for strings

    printf("Enter password: ");
    scanf("%s", password);

    // Outer IF: Check login credentials using strcmp()
    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0)
    {
        printf("Login successful.\n");

        // Ask access level
        char accessLevel;
        printf("Enter access level (H for high, L for low): ");
        getchar();                 // consume leftover newline from previous scanf
        scanf("%c", &accessLevel); // must use & for single char

        // Nested IF
        if (accessLevel == 'H' || accessLevel == 'h')
        {
            printf("You have HIGH level access.\n");
        }
        else if (accessLevel == 'L' || accessLevel == 'l')
        {
            printf("You have LOW level access.\n");
        }
        else
        {
            printf("Unknown access level.\n");
        }
    }
    else
    {
        printf("Invalid username or password.\n");
    }

    // ===============================
    // BASIC SWITCH STATEMENT
    // ===============================

    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day)
    { // expression is evaluated once
    case 1:
        printf("Monday\n");
        break; // exit switch

    case 2:
        printf("Tuesday\n");
        break;

    case 3:
        printf("Wednesday\n");
        break;

    case 4:
        printf("Thursday\n");
        break;

    case 5:
        printf("Friday\n");
        break;

    case 6:
        printf("Saturday\n");
        break;

    case 7:
        printf("Sunday\n");
        break;

    default: // runs if no case matches
        printf("Invalid day number\n");
    }

    // ==========================================
    // SWITCH WITH AND WITHOUT BREAK (FALLTHROUGH)
    // ==========================================

    int level;
    printf("Enter your level (1-3): ");
    scanf("%d", &level);

    switch (level)
    {
    case 1:
        printf("Beginner features unlocked.\n");
        break; // stops here

    case 2:
        printf("Intermediate features unlocked.\n");
    // no break here on purpose (fallthrough)
    case 3:
        printf("Advanced features unlocked.\n");
        break;

    default:
        printf("Unknown level.\n");
    }

    // ==========================================
    // SWITCH USED LIKE A MENU (BETTER THAN BIG IF-ELSE)
    // ==========================================

    int choice;
    printf("Calculator Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (choice)
    {
    case 1:
        printf("Result: %lf\n", a + b);
        break;

    case 2:
        printf("Result: %lf \n", a - b);
        break;

    case 3:
        printf("Result: %lf \n", a * b);
        break;

    case 4:
        if (b == 0)
        {
            printf("Error: Division by zero!\n");
        }
        else
        {
            printf("Result: %lf \n", a / b);
        }
        break;

    default:
        printf("Invalid choice.\n");
    }

    // ==========================================
    // NESTED SWITCH STATEMENT
    // Example: Main menu + sub menu
    // ==========================================

    int mainChoice;
    printf("Main Menu:\n");
    printf("1. User\n");
    printf("2. Admin\n");
    printf("Enter main choice: ");
    scanf("%d", &mainChoice);

    switch (mainChoice)
    {
    case 1:
    {
        printf("User Menu:\n");
        printf("1. View profile\n");
        printf("2. Edit profile\n");
        int userChoice;
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:
            printf("Showing user profile...\n");
            break;
        case 2:
            printf("Editing user profile...\n");
            break;
        default:
            printf("Invalid user option.\n");
        }
        break;
    }

    case 2:
    {
        printf("Admin Menu:\n");
        printf("1. View all users\n");
        printf("2. Delete user\n");
        int adminChoice;
        scanf("%d", adminChoice);

        switch (adminChoice)
        {
        case 1:
            printf("Showing all users...\n");
            break;
        case 2:
            printf("Deleting user...\n");
            break;
        default:
            printf("Invalid admin option.\n");
        }
        break;
    }

    default:
        printf("Invalid main choice.\n");
    }
    return 0;
}