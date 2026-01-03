// Demonstrates structures, unions, and typedef in C
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
} Person;

union Data
{
    int i;
    float f;
    char str[10];
};

int main()
{
    // Structure
    Person p1;
    strcpy(p1.name, "Alice");
    p1.age = 25;
    printf("Person: %s, Age: %d\n", p1.name, p1.age);

    // Union
    union Data data;
    data.i = 10;
    printf("Union int: %d\n", data.i);
    data.f = 220.5;
    printf("Union float: %.1f\n", data.f);
    strcpy(data.str, "C Lang");
    printf("Union string: %s\n", data.str);

    return 0;
}
