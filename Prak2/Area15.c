/* 
Juan Christopher Santoso
13521116
No.5 Area15
*/

#include <stdio.h>

void Area15(char* string){
    int nElmt;
    int int1;
    int int2;

    nElmt = sscanf(string, "%d %d", &int1, &int2);
    if (nElmt <= 1){
        illegal_move();
    }

    /* angka pertama dilakukan operasi mod 16*/
    int1 = int1 % 16;
    if (int1 == 15){
        illegal_move();
    }

    int sum = 0; /*ecx*/
    int count = 0; /*edx*/
    int numArray[16] = {2, 13, 8, 5, 14, 15, 3, 1, 7, 12, 11, 0, 6, 4, 9, 10};
    
    while (int1 != 15){
        count++;
        int1 = numArray[int1];
        sum += int1;
    }
    if (count != 15){
        illegal_move();
    }
    if (sum != int2){
        illegal_move();
    }
    return;
}