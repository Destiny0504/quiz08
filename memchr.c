#include <stddef.h>
#include <stdio.h>
#include <string.h>

// return the rest of the string after the given char
void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    while (n-- != 0) {
        if ((unsigned char)c == *p++) {
            return (void *)(p - 1);
        }
    }
    return NULL;
}

int main()
{
    const char str[] = "http://wiki.csie.ncku.edu.tw";
    const char ch = '.';

    char *ret = memchr(str, ch, strlen(str));
    printf("String after |%c| is - |%s|\n", ch, ret);
    return 0;
}
