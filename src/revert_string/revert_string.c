#include "revert_string.h"

void RevertString(char *str)
{
    char* first = str;
    char* last = first;
    while (*last != '\0')
    {
        last++;
    }
    last = last - 1;
    while(first < last)
    {
        char temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}

