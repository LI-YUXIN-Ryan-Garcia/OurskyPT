#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// a1, a2 are array1 and array2 respectively
int isSubset( char*a1, char*a2){
    printf("%d %d\n",strlen(a1), strlen(a2));
    // brute force
    int i = 0, j = 0;// i, j are index of a1, a2 respectively
    int isFind = 0; // 1 for a char in a2 is in a1
    int isSub = 1; // 1 for all char in a2 is in a1
    while( i < strlen(a2) )
    {
        j = 0;
        isFind = 0;
        while( j < strlen(a1) )
        {
            if( a1[j] == a2[i] )
            {
                isFind = 1;
                break;
            }
            j++;
        }
        if( !isFind )
            break;
        i++;
    }
    // judge
    if( isSub )
        return 1; // represent for true in C
    else
        return 0; // represent for false in C    
}

