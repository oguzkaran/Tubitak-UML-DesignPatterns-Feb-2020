#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sample.h"

struct sample *create_sample(int x, int y, const char *s)
{
    struct sample *ps;
    
    if ((ps = (struct sample *)malloc(sizeof(struct sample))) == NULL)
        return NULL;
    
    if ((ps->s = (char *)malloc(strlen(s) + 1)) == NULL) {
        free(ps);
        return NULL;
    }
    
    ps->x = x;
    ps->y = y;
    strcpy(ps->s, s);
    
    return ps;
}

void display_sample(const struct sample *ps)
{
    printf("%d, %d, %s\n", ps->x, ps->y, ps->s);
}

void destroy_sample(struct sample *ps)
{
    free(ps->s);
    free(ps);
}
