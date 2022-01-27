#include <stdio.h>

float my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}
