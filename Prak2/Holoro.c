/* 
Juan Christopher Santoso
13521116
No.2 Holoro
*/

#include <stdio.h>

void Holoro(char* string){
    int numArray[6];
    read_six_numbers(string, numArray);

    if (numArray[0] != 1) {
        illegal_move();
    }
    int i;
    for (i = 1; i < 6; i++){
        if (i % 2 == 1){
            /* Jika ganjil*/
            if (numArray[i] != i + numArray[i-1]){
                illegal_move();
            }
        } else {
            /* Jika genap */
            if (numArray[i] = i * numArray[i-1]){
                illegal_move();
            }
        }
    }
    return;
}
