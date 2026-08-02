

#include <iostream>
using namespace std;
int main()
{

    // ===============================
    // BASIC IF STATEMENT
    // ===============================
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // If condition is true, this block will execute
    if (age >= 18)
    { // Condition: age is at least 18
        cout << "You are an adult.\n";
    }

    cout << "Program ended.\n";

    // ===============================
    // IF - ELSE STATEMENT
    // ===============================
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Exactly one of these blocks will run
    if (age >= 18)
    {
        cout << "You are eligible to vote.\n";
    }
    else
    {
        cout << "You are NOT eligible to vote.\n";
    }

    cout << "Check complete.\n";

    // ==========================================
    // IF - ELSE IF - ELSE LADDER
    // Example: Grading system
    // ==========================================

    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks > 100 || marks < 0)
    {
        cout << "Invalid marks.\n";
    }
    else if (marks >= 90)
    {
        cout << "Grade: A\n";
    }
    else if (marks >= 80)
    {
        cout << "Grade: B\n";
    }
    else if (marks >= 70)
    {
        cout << "Grade: C\n";
    }
    else if (marks >= 60)
    {
        cout << "Grade: D\n";
    }
    else
    {
        cout << "Grade: F\n";
    }

    // ==========================================
    // NESTED IF - ELSE
    // Example: Login system with role check
    // ==========================================

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Outer if: first check credentials
    if (username == "admin" && password == "1234")
    {
        cout << "Login successful.\n";

        // Inner if: role-based access
        char accessLevel;
        cout << "Enter access level (H for high, L for low): ";
        cin >> accessLevel;

        if (accessLevel == 'H' || accessLevel == 'h')
        {
            cout << "You have HIGH level access.\n";
        }
        else if (accessLevel == 'L' || accessLevel == 'l')
        {
            cout << "You have LOW level access.\n";
        }
        else
        {
            cout << "Unknown access level.\n";
        }
    }
    else
    {
        cout << "Invalid username or password.\n";
    }

    // ===============================
    // BASIC SWITCH STATEMENT
    // ===============================

    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day)
    { // expression is evaluated once
    case 1:
        cout << "Monday\n";
        break; // exit switch

    case 2:
        cout << "Tuesday\n";
        break;

    case 3:
        cout << "Wednesday\n";
        break;

    case 4:
        cout << "Thursday\n";
        break;

    case 5:
        cout << "Friday\n";
        break;

    case 6:
        cout << "Saturday\n";
        break;

    case 7:
        cout << "Sunday\n";
        break;

    default: // runs if no case matches
        cout << "Invalid day number\n";
    }

    // ==========================================
    // SWITCH WITH AND WITHOUT BREAK (FALLTHROUGH)
    // ==========================================

    int level;
    cout << "Enter your level (1-3): ";
    cin >> level;

    switch (level)
    {
    case 1:
        cout << "Beginner features unlocked.\n";
        break; // stops here

    case 2:
        cout << "Intermediate features unlocked.\n";
        // no break here on purpose (fallthrough)
    case 3:
        cout << "Advanced features unlocked.\n";
        break;

    default:
        cout << "Unknown level.\n";
    }

    // ==========================================
    // SWITCH USED LIKE A MENU (BETTER THAN BIG IF-ELSE)
    // ==========================================

    int choice;
    cout << "Calculator Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice)
    {
    case 1:
        cout << "Result: " << a + b << "\n";
        break;

    case 2:
        cout << "Result: " << a - b << "\n";
        break;

    case 3:
        cout << "Result: " << a * b << "\n";
        break;

    case 4:
        if (b == 0)
        {
            cout << "Error: Division by zero!\n";
        }
        else
        {
            cout << "Result: " << a / b << "\n";
        }
        break;

    default:
        cout << "Invalid choice.\n";
    }

    // ==========================================
    // NESTED SWITCH STATEMENT
    // Example: Main menu + sub menu
    // ==========================================

    int mainChoice;
    cout << "Main Menu:\n";
    cout << "1. User\n";
    cout << "2. Admin\n";
    cout << "Enter main choice: ";
    cin >> mainChoice;

    switch (mainChoice)
    {
    case 1:
    {
        cout << "User Menu:\n";
        cout << "1. View profile\n";
        cout << "2. Edit profile\n";
        int userChoice;
        cin >> userChoice;

        switch (userChoice)
        {
        case 1:
            cout << "Showing user profile...\n";
            break;
        case 2:
            cout << "Editing user profile...\n";
            break;
        default:
            cout << "Invalid user option.\n";
        }
        break;
    }

    case 2:
    {
        cout << "Admin Menu:\n";
        cout << "1. View all users\n";
        cout << "2. Delete user\n";
        int adminChoice;
        cin >> adminChoice;

        switch (adminChoice)
        {
        case 1:
            cout << "Showing all users...\n";
            break;
        case 2:
            cout << "Deleting user...\n";
            break;
        default:
            cout << "Invalid admin option.\n";
        }
        break;
    }

    default:
        cout << "Invalid main choice.\n";
    }

    return 0;
}
