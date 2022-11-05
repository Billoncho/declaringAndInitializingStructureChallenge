/*
Author:     Billy Gene Ridgeway
Date:       Nov. 5th. 2022
Purpose:    Course challenge declare and initialize a structure in C.
*/

/*
    Write a program that declars a structure and prints out its content.
    Create an employee structure with 3 members.
    name (character array).
    hireDate (int).
    salary (float).

    Declare and initialize an instance of an employee type.
    Read in a second employee from the console and store it in a structure type employee.
    Print out the contents of each employee.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
    char name[255];
    char hireDate[30];
    float salary;
};

int main ()
{
   struct employee billy = {
        "Billy Ridgeway", "04/11/1962", 100001
    };

    printf("\nEmployee 1 name: %s\t\t Hire date: %s\t Salary: $%.2f\n", billy.name, billy.hireDate, billy.salary);


    struct employee lourdes = {
        "Lourdes Ridgeway", "10/26/1973", 100002
    };

    printf("Employee 2 name: %s\t Hire date: %s\t Salary: $%.2f\n", lourdes.name, lourdes.hireDate, lourdes.salary);

    struct employee natalia = {
        "Natalia Ridgeway", "05/26/2010", 100003
    };

    printf("Employee 3 name: %s\t Hire date: %s\t Salary: $%.2f\n", natalia.name, natalia.hireDate, natalia.salary);


    struct employee lourdes2;
    

    printf("\nEnter employee name: ");
    scanf("%[^\n]", lourdes2.name);
    printf("\nEnter the employee's hire date in the format 04/11/1962: ");
    scanf("%s", lourdes2.hireDate);
    printf("\nEnter the employee's salary: ");
    scanf("%f", &lourdes2.salary);

    printf("\nEmployee's name: %s\t Hire date: %s\t Salary: $%.2f\n", lourdes2.name, lourdes2.hireDate, lourdes2.salary);
    
    return 0;
}