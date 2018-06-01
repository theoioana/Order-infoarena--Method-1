#include <stdlib.h>
#include <stdio.h>
#include "aib_array.h"
#include "BIT_build.h"
#include "algorithm.h"
#include "update.h"

void build_tree(int n){
    for( int i = 1; i <= n; i++){
            update(i, 1, n);
        }
}
