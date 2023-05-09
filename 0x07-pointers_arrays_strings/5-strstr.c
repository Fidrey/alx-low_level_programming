#include "main.h"
/**
 * _strstr - entry point
 * @neddle: input
 * @haystack: input
 * return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle) 

{
  
    if (*needle == '\0')
    {
        return haystack;
    }
    if (*haystack == '\0') 
    {
        return NULL;
    }
    
   
    while (*haystack != '\0') 
    {
        if (*haystack == *needle) 
	{
        
            char *h = haystack;
            char *n = needle;
            while (*h != '\0' && *n != '\0' && *h == *n) 
	    {
                h++;
                n++;
            }
            
            if (*n == '\0') 
	    {
                return haystack;
            }
        }
        
        haystack++;
    }

    return NULL;
}

