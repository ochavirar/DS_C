#include "dataTypes.h"
#include "otherTypes.h"
#include <stdlib.h>
#include <string.h>

TYPE createShort(short n)
{
    TYPE data = NULL;
    data = malloc(sizeof(short));
    *(short *)data = n;
    return data;
}

TYPE createInteger(int n)
{
    TYPE data = NULL;
    data = malloc(sizeof(int));
    *(int *)data = n;
    return data;
}

TYPE createFloat(float n)
{
    TYPE data = NULL;
    data = malloc(sizeof(float));
    *(float *)data = n;
    return data;
}

TYPE createDouble(double n)
{
    TYPE data = NULL;
    data = malloc(sizeof(double));
    *(double *)data = n;
    return data;
}

TYPE createCharacter(char c)
{
    TYPE data = NULL;
    data = malloc(sizeof(char));
    *(char *)data = c;
    return data;
}

TYPE createVec2D(double x, double y)
{
    TYPE data = NULL;
    data = malloc(sizeof(Vector2D));
    (*(Vector2D *)data).x = x;
    (*(Vector2D *)data).y = y;
    return data;
}

TYPE createString(char *s)
{
    TYPE data = NULL;
    int size = strlen(s);
    data = malloc(sizeof(char) * size + 1); // The +1 is required for the \0 character, if not used, we will get a small segmentation fault
    strcpy(data, s);
    s = NULL;
    return data;
}

void deleteDataUnit(TYPE data)
{
    free(data);
    data = NULL;
}
