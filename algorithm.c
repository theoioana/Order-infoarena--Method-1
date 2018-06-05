/**
* @file algorithm.c
* @brief C library implementation that solves the problem on the support of the data generated in binary indexed tree
* @author Theodora Danciulescu  
* @date 06/05/18.
*/


#include <stdio.h>
#include <stdlib.h>
#include "aib_array.h"
#include "BIT_build.h"
#include "algorithm.h"
#include "update.h"

/**
* This function will print the initial position of the child that is eliminated at the current step
* @author Theodora Danciulescu
* @param remaining_children will represent the number of children that remained in the game
* @param n will represent the initial number of children and also theh number of steps for the game
* @param child represents the child who strts the counting 
*/

void function(int remaining_children, int n, int child){
    int i, j;
    for( i = 1; i <= n; i++){
		/// since the array is circular we use  the following formula to find out the right position of the child to be 
		/// eliminated
        child = (child + i - 1) % remaining_children;
        if( child == 0 ){
            child = remaining_children;
        }
		/// decrement the number of the remaining children
        --remaining_children;
		/// setting the bounds for the binary search
        int left_pos = 0;
        int accmlate = 0;
		/// binary search adapted for binary indexed trees
        for( j = 15 ; j >= 0; j--){
            if( left_pos + ( 1 << j) < n){
                if( accmlate + aib[left_pos + (1 << j)] < child){
                    accmlate += aib[left_pos + (1 << j)];
                    left_pos +=(1 << j);
                }
            }
        }
		/// left_pos is the initial position of the child to be eliminated
        left_pos++;
		/// update with -1 at that position in the binry indexed tree
        update(left_pos, -1, n);
        printf( " %d",left_pos);
    }
	system("pause");
}
