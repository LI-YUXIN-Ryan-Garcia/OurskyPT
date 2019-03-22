// The code should be complied with command:
//         gcc -lm answer3.c
// otherwise, since there is no definition of pow()
// in math.h, it will generate "undefined reference"
// error for pow()

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Size is the size of numList, since we can't get
// the length of array in function in c, so we need
// one more parameter
int* nextFibo( int * numList, int size ){
    int* output = (int*)malloc( sizeof(int) * size );
    int i = 0; // index of nums in input array
    int j = 1; // index of each fibonacci number
    while( i < size ){
        j = 1;
        while( 1 ){
            double num = (double)numList[i];
            // expression of fibonacci numbers
            double value = (pow( ( 1+sqrt(5) )/2, j) - pow( (1-sqrt(5) )/2, j) ) / sqrt(5);
            if( (num < value) - ( num > value) == 1){
              output[i] = (int)value;
              break;
            }
            j++;
        }// end of internal loop
        i++;
    }// end of external loop    
    return output;
}

