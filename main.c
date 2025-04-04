#include <stdio.h>
#include <stdio.h>
#include "dataTypes/dataTypes.h"

int main(void)
{
    TYPE data = createInteger(5);
    printf("%d\n", *((int*)(data)) );
    deleteDataUnit(data);
    return 0;
}
