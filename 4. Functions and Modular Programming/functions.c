#include <stdio.h>

int addition(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    /*
    function syntax:

    return_type name_of_func (datatype param1, datatype param2); <--- function declaration

    return_type name_of_func (param1, param2); <--- function definition
    {                                          <--- function definition
        body of code                           <--- function definition
    }                                          <--- function definition

    return types: int, float, char, void
    use int, float, char when returning a value in that format
    use void when not returning anything
    */

    int sum = addition(1, 2);
    printf("\nSum: %d\n", sum);
    return 0;
}