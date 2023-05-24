1.Write a function that prints a name.
Prototype: void print_name(char *name, void (*f)(char *));
2.Write a function that executes a function given as a parameter on each element of an array.
void array_iterator(int *array, size_t size, void (*action)(int));
3.Write a function that searches for an integer.
4.Write a program that performs simple operations.
You are allowed to use the standard library
Usage: calc num1 operator num2
You can assume num1 and num2 are integers, so use the atoi function toconvert them from the string input to int
