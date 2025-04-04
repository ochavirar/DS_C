#include <stdio.h>
#include <stdio.h>
#include "dataTypes/dataTypes.h"

int main(void)
{

    TYPE shortV = createShort(5);
    printf("%d\n", *((short *) (shortV)) );

    TYPE integer = createInteger(5);
    printf("%d\n", *((int *) (integer)) );

    TYPE floatV = createFloat(5.236);
    printf("%f\n", *((float *) floatV));

    TYPE doubleV = createDouble(12.6546846);
    printf("%f\n", *((double *) doubleV));

    TYPE character = createCharacter('a');
    printf("%c\n", *((char *) character));

    TYPE vector2D = createVec2D(1.5, 2.5);
    printf("(%f, %f)\n", (*(Vector2D*)vector2D).x, (*(Vector2D*)vector2D).y);

    char *str = "Hola mundo!!\n";

    TYPE string = createString(str);
    printf("%s\n",str);

    deleteDataUnit(shortV);
    deleteDataUnit(integer);
    deleteDataUnit(floatV);
    deleteDataUnit(doubleV);
    deleteDataUnit(character);  
    deleteDataUnit(string);
    deleteDataUnit(vector2D);
    return 0;
}
