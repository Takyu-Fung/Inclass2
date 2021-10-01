#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tablesize, long targetNumber){
    const PtrToConstEmployee endPtr = ptr + tablesize;

    for(; ptr < endPtr; ptr++)
    {
        if(ptr->number == targetNumber)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tablesize, char * targetName){
    const PtrToConstEmployee  endPtr = ptr + tablesize;

    for(;ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name,targetName) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tablesize, char * targetPhone){
    const PtrToConstEmployee  endPtr = ptr + tablesize;

    for(;ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->phone,targetPhone) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tablesize, double targetSalary){
    const PtrToConstEmployee endPtr = ptr + tablesize;

    for(; ptr < endPtr; ptr++)
    {
        if(ptr->salary == targetSalary)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}