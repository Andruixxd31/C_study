#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randomize (srand(time(NULL))) //Random seed for the generator
#define random(num) (rand()%(num))
#define TOPE 1000

#define MAX(x,y) ((x)>(y) ? (x) : (y)) //macro to get the highest number

int main(void)
{
    /* code */
    int mx, i;
    randomize;
    mx = random(TOPE);

    for (i = 1; i <= 10; i++)
    {
        int y;
        y = random(TOPE); //number generated from 0 to 999
        mx = MAX(mx,y); //macro is used to compared the random generator number to the highest number that has been obtained
    }
    
    printf("The biggest number generated: %d\n", mx);
    return 0;
}
