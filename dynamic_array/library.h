#ifndef DYNAMIC_ARRAY_LIBRARY_H
#define DYNAMIC_ARRAY_LIBRARY_H

void hello(void);

enum {
    CHAR_DATATYPE,
    SHORT_DATATYPE,
    INT_DATATYPE,
    LONG_DATATYPE,
    FLOAT_DATATYPE,
    DOUBLE_DATATYPE
};

typedef struct {
    void *array;
    short _array_datatype;
    int _array_size;
} dynamic_array;

dynamic_array *f_make_dynamic_array(int size, int datatype);
int f_copy_string_dynamic_array(char string[], dynamic_array *array_struct);
void f_unmake_dynamic_array(dynamic_array *victim);


#endif //DYNAMIC_ARRAY_LIBRARY_H
