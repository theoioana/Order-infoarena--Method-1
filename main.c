#include <stdlib.h>
#include <stdio.h>
#include "update.h"
#include "BIT_build.h"
#include "aib_array.h"
#include "algorithm.h"

int aib[30000]; 


int main(){

    int n = 6;

    build_tree(n);

    int remaining_children = n;

	int child = 2;

    function(remaining_children, n, child);

}

