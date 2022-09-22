/** lab14-02.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab14functs.h"

int main() {
    printf("Enter much change would you like broken down, good sir: ");
    int coins = 0;   
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    scanf("%d", &coins);
    makeChange(coins, &quarters, &dimes, &nickels, &pennies);
    printf("quarters: %d, dimes: %d, nickels: %d, pennies: %d\n", quarters, dimes, nickels, pennies);
    return 0;
}