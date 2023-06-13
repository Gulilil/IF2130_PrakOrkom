/* 
Juan Christopher Santoso
13521116
No.3 Holoh3ro
*/

#include <stdio.h>

void Holoh3ro(char *string){

    int nElmt;
    int int1;
    int int2;

    nElmt = sscanf(string, "%d %d", &int1, &int2);

    if (nElmt <= 1){
        illegal_move();
    }
    
    if (int1 > 7){
        illegal_move();
    }

    switch(int1)
    {
        case 1:
            if (int2 != -873){
                illegal_move();
                break;
            }
        case 2:
            if (int2 != -64){
                illegal_move();
                break;
            }
        case 3:
            if (int2 != -137){
                illegal_move();
                break;
            }
        case 4:
            if (int2 != -301){
                illegal_move();
                break;
            }
        case 5:
            if (int2 != -943){
                illegal_move();
                break;
            }
        default:
            illegal_move();
            break;
    }
    return;
    
}

/*
Jawaban 
1 -873
2 -64
3 -137
4 -301
6 -943
*/