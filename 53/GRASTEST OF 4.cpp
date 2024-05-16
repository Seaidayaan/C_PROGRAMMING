#include<stdio.h>
int main()
{
int a = 2, b = 3, c = 6, d = 5, largest;

    printf("Entered numbers: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    largest = (a > b) ?   
               (a > c) ? (a>d) ? a : d  : (c>d)? c:d: 
               (b > c) ? b > d ? b : d: c>d? c : d; 

    printf("Largest number: %d\n",largest);
    return 0;
}
