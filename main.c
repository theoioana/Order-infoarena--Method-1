/*
@file main.c
@brief C library implementation that solves the problem Order (Infoarena) using Binary Indexed trees
@author Theodora Danciulescu
@date 06/05/18.
*/
#include <stdlib.h>
#include <stdio.h> /// > printf()
#include "update.h"/// > update()
#include "BIT_build.h" /// > build_tree()
#include "aib_array.h" /// > aib[30000]
#include "algorithm.h" /// > function()

int aib[30000]; 


/**
* @\fn int main()
* @author Theodora Danciulescu 
* @\brief Main function.
* @Function calls of build_tree and function imported from BIT_build.h and respectively from algorithm.h
* @\var initializes some variables
*/

int main(){

	int n;

	scanf("%d", &n);

    build_tree(n);

    int remaining_children = n;

	int child = 2;

    function(remaining_children, n, child);

}

