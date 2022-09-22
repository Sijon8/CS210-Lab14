/** lab14functs.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include "lab14functs.h"
#include <math.h>

/** ----------------------------------------------------------
 * @param x first value
 * @param y second value
 * @pre none
 * @post 
 */
void swapPassByValue(int x, int y) {
    printf("----- Running swapPassByValue -----\n");
    printf("before swap: x = %i; y = %i\n", x, y);
 
    // Creates a temporary value
    int temp;

    // Set temp to have the same value as x
    temp = x; 

    // Make x have the same value as y
    x = y; 

    // Make y have the same value as temp
    y = temp; 

    printf("after swap: x = %i; y = %i\n", x, y);
}

/** ----------------------------------------------------------
 * @param ptrX a pointer to the first value
 * @param ptrY a pointer to the second value
 * @pre none
 * @post 
 */
void swapPassByReference(int* ptrX, int* ptrY) {
    printf("----- Running swapPassByReference -----\n");
    printf("before swap: ptrX = %i; ptrY = %i\n", *ptrX, *ptrY);
 
    // Creates a temporary int variable
    int temp;

    // Set temp to contain the value stored at ptrX
    temp = *ptrX; 

    // Set the value stored at ptrX to contain the value stored at ptrY
    *ptrX = *ptrY; 

    // Set the value stored at ptrY to contain the value stored in temp
    *ptrY = temp; 
    
    printf("after swap: ptrX = %i; ptrY = %i\n", *ptrX, *ptrY);
}

void makeChange(int coins, int* Pqs, int* Pds, int* Pns, int* Pps){
    *Pqs = coins / 25; 
    coins = coins%25; 
    *Pds = coins / 10; 
    coins = coins%10;
    *Pns = coins / 5; 
    coins = coins%5;
    *Pps = coins / 1; 
   
     }