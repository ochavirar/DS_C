#include "./otherTypes.h"

#ifndef DATATYPES_H_
#define DATATYPES_H_

typedef void *TYPE;

TYPE createShort(short);
TYPE createInteger(int);
TYPE createFloat(float);
TYPE createDouble(double);
TYPE createCharacter(char);
TYPE createVec2D(double, double);
TYPE createString(char *);

void deleteDataUnit(TYPE);

#endif //DATATYPES_H_
