#include <stdio.h>

int main()
{
    int one = 10, 
        two = 15;

/*
    int temp = one;
    one = two; two = temp;
*/


/*
    one = one ^ two;
    two = one ^ two;
    one = one ^ two;
*/  


/*
    one = one + two;
    two = one - two;
    one = one - two;
*/   

    printf("ONE - %d and TWO - %d", one, two);
    return 0;
}
