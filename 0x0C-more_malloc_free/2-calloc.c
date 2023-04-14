#include <stdlib.h>
#include "main.h"

/**

Fill memory with a constant byte

@param s Memory area to be filled

@param b Char to copy

@param n Number of times to copy b

@return Pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++) {
s[i] = b;
}

return s;
}

/**

Allocate memory for an array

@param nmemb Number of elements in the array

@param size Size of each element

@return Pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0) {
return NULL;
}

char *ptr = malloc(size * nmemb);

if (ptr == NULL) {
return NULL;
}

_memset(ptr, 0, nmemb * size);

return ptr;
}
