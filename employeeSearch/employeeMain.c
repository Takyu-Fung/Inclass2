#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void){
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int size, char* phone);
    PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int size, double salary);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    if(matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID 1045 is NOT found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if (matchPtr != NULL)
        printf("Employee phone number 909-555-1235 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number 909-555-1235 is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1234");
    if (matchPtr != NULL)
        printf("Employee phone number 909-555-1234 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number 909-555-1234 is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50);

    if(matchPtr != NULL)
        printf("Employee salary 4.50 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 4.50 is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.32);

    if(matchPtr != NULL)
        printf("Employee salary 4.32 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 4.32 is NOT found in the record\n");

    return EXIT_SUCCESS;
}