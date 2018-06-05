/**
* @file BIT_build.c
* @brief C library implementation for initializing the binary indexed tree
* @author Theodora Danciulescu
* @date 06/05/18.
*/

#include <stdlib.h>
#include <stdio.h> 
#include "aib_array.h" /// > aib[30000]
#include "BIT_build.h" 
#include "algorithm.h"
#include "update.h" /// > update()

/**
* This function initializes the array representing the binary indexed tree with 1 at every position
* @author Theodora Danciulescu
* @param n will represent the initial number of children and also the number of steps for the game
*/

void build_tree(int n){
    for( int i = 1; i <= n; i++){
			/// doing the update using the update function for the binary indexed tree array
            update(i, 1, n);
        }
}
