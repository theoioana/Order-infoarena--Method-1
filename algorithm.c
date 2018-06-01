#include <stdio.h>
#include <stdlib.h>
#include "aib_array.h"
#include "BIT_build.h"
#include "algorithm.h"
#include "update.h"

void function(int remaining_children, int n, int child){
    int i, j;
    for( i = 1; i <= n; i++){
        child = (child + i - 1) % remaining_children;
        if( child == 0 ){
            child = remaining_children;
        }
        --remaining_children;
        int left_pos = 0;
        int accmlate = 0;
        for( j = 15 ; j >= 0; j--){
            if( left_pos + ( 1 << j) < n){
                if( accmlate + aib[left_pos + (1 << j)] < child){
                    accmlate += aib[left_pos + (1 << j)];
                    left_pos +=(1 << j);
                }
            }
        }
        left_pos++;
        update(left_pos, -1, n);
        printf( " %d",left_pos);
    }

}
