#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randomize (srand(time(NULL)))
#define random(num) (rand()%(num))
#define TOPE 1000

#define MAX(x,y) ((x)>(y) ? (x) : (y))

int main(void)
{
    /* code */
    int mx, i;
    randomize;
    mx = random(TOPE);

    for (i = 2; i <= 10; i++)
    {
        int y; 
        y = random(TOPE);
        mx = MAX(mx,y);
    }
    
    printf("The biggest number generated: %d", mx);
    return 0;
}
