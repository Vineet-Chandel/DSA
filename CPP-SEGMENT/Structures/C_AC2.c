#include <stdio.h>
#include <string.h>
// structures !!

// syntax
typedef struct Student
{
    int roll;    // 4 BYTES
    float marks; // 4 BYTES
    char grade;  // 1 BYTES
} StudentData;

void input(int a, float b, char c)
{
    StudentData funcClass = {a, b, c};
    printf("data of the student 4 : %d %f %c \n", funcClass.roll, funcClass.marks, funcClass.grade);
}

int main()
{

    // first tartika of initialization of the structurss with variable
    StudentData s1;
    s1.roll = 101;
    s1.marks = 95.5;
    s1.grade = 'A';

    // second tartika of initialization of the structurss with variable
    // StudentData s1{101, 95.5, 'a'}; works in c++ only

    // third tartika of initialization of the structurss with variable
    StudentData s2 = {102, 75.5, 'b'};

    // fourth tartika of initialization of the structurss with variable
    StudentData s3 = {.roll = 188, .marks = 90.5, .grade = 'A'};

    printf("Size of the structures:%lu \n", sizeof(StudentData));

    // fifth tartika of initialization of the structurss with variable
    // by the use of the functions
    input(121, 97.7, 'c');

    printf("data of the student 1 : %d %.1f %c \n", s1.roll, s1.marks, s1.grade);
    printf("data of the student 2 : %d %.1f %c \n", s2.roll, s2.marks, s2.grade);
    printf("data of the student 3 : %d %.1f %c \n", s3.roll, s3.marks, s3.grade);

    // nested structures

    typedef struct Address
    {
        char city[20];
        int pin;
    } AddressData;

    typedef struct College
    {
        int roll;
        AddressData addr;
    } CollegeData;

    CollegeData c1;
    c1.roll = 311;
    strcpy(c1.addr.city, "Kanpur");
    c1.addr.pin = 208017;
    printf("data of the college student 1 : %d %s %d \n", c1.roll, c1.addr.city, c1.addr.pin);

    return 0;
}