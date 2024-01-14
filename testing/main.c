#include <stdio.h>
#include "library.h"

void simple_string_test()
{
    printf("Simple String Test...\n");
    dynamic_array *myString = f_make_dynamic_array(25, CHAR_DATATYPE);
    myString->array = "Hello, World! From myString!\n";
    printf( myString->array );
    printf("\nSimple String Test exiting.\n");
}
void copy_string_test()
{
    const char aString_toCopy[] = "Hello, World!\n";
    dynamic_array *stringToPrint = f_make_dynamic_array(25, CHAR_DATATYPE);

    printf("Copy String Test...\n");

    int copyOperation = f_copy_string_dynamic_array(&aString_toCopy, stringToPrint);
    if (copyOperation == 0)
    {
        printf("Copy failed!\n");
        printf("Copied string: ");
        printf(stringToPrint->array);
    }
    else {
        printf("Copy completed!\n");
        printf("Copied string: ");
        printf(stringToPrint->array);
    }

    printf("Exiting Copy String Test\n");

}

int main() {

    //simple_string_test();

    //copy_string_test();



    return 0;
}
