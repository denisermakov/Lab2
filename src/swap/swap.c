#include "stdlib.h"
#include "malloc.h"
#include "swap.h"

void swap(char *left, char *right)
{
    char temp = *right;
    *right = *left;
    *left = temp;
}
