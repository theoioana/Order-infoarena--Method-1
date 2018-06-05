/**
* @file update.c
* @brief C library implementation does the update operation of the binary indexed tree
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
* This function will return the binary indexed tree array updated
* @author Theodora Danciulecu 
* @param position will represent the position in the array to be updated
* @param value will represent the value we update with
* @param n will represent the length of the array
* @date 20/06/2017
*/

void update( int position, int value, int n){
	/// incremeting position using bit operation
    for( ; position <= n; position += (position & -position)){
        aib[position] += value;
    }
}

