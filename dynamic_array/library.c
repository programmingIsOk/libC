#include "library.h"
#include <stdio.h>
#include <stdlib.h>


int get_array_size(int size, int datatype)
{
    int size_to_be;
    switch (datatype)
    {
        case CHAR_DATATYPE:
            size_to_be = size * sizeof(char);
            break;
        case SHORT_DATATYPE:
            size_to_be = size * sizeof(short);
            break;
        case INT_DATATYPE:
            size_to_be = size * sizeof(int);
            break;
        case LONG_DATATYPE:
            size_to_be = size * sizeof(long);
            break;
        case FLOAT_DATATYPE:
            size_to_be = size * sizeof(float);
            break;
        case DOUBLE_DATATYPE:
            size_to_be = size * sizeof(double);
            break;
        default:
            size_to_be = 0;
            break;
    }
    return size_to_be;
}


dynamic_array *f_make_dynamic_array(int size, int datatype)
{
    dynamic_array *array_struct;
    void *array;
    size = get_array_size(size, datatype);

    array_struct = (dynamic_array*) malloc (sizeof(dynamic_array));
    if (array_struct == NULL)
        return NULL;

    array = (void*) malloc (size);
    if (array == NULL)
        return NULL;


    array_struct->_array_datatype = (short) datatype;
    array_struct->_array_size = size;
    array_struct->array = array;

    return array_struct;
}

void f_unmake_dynamic_array(dynamic_array *victim)
{
    free(victim->array);
    free(victim);
}

int f_copy_string_dynamic_array(char *string, dynamic_array *array_struct)
{
    int limit = array_struct->_array_size;
    int i = 0;
    for (i; string[i] != '\0' && i < limit; i++)
        *((char*)array_struct->array + i) = string[i];

    if (i >= limit && string[i-1] != '\0') {
        string[limit] = '\0';
        return 0;
    }
    else
        return 1;
}

void hello(void) {
    printf("Hello, World!\n");
}
