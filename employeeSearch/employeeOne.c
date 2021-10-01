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

PtrToEmployee searchEmployeeByName(PtdToConstEmployee ptr, int tablesize, char * targetName){
    const PtrToConstEmployee  endPtr = ptr + tablesize;

    for(;ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name,targetName) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}