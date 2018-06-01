#include <stdio.h>
#include <stdlib.h>
#include "aib_array.h"
#include "BIT_build.h"
#include "algorithm.h"
#include "update.h"

void update( int position, int value, int n){
    for( ; position <= n; position += (position & -position)){
        aib[position] += value;
    }
}

