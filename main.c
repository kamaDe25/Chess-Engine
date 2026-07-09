#include "stdio.h"
#include "defs.h"

int main(){

    //Called vice.c in the given tutorials

    //Things to keep track of -------------------------------------------------------
    //Fifty Moves
        //counter to keep track of moves
        //if Fifty Moves have been taken make it a draw

    // 3xRep
        //need to keep track of positions 
        //draw if same exact board position happens three times in a game
    //En Passant
        //keep track of the en passant square if available

    //Side
        //keep track of what side is playing

    //ply
        //keep track of how many half moves have happened.
    
    //below sets up everything for a game
    AllInit();

    int index = 0;
    
    for(index = 0; index < BRD_SQ_NUM; ++index){
        if(index%10==0) printf("\n");
        printf("%5d", Sq120ToSq64[index]);
    }
    
    printf("\n\n");

    for(index = 0; index < 64; ++index){
        if(index%8==0) printf("\n");
        printf("%5d", Sq64ToSq120[index]);
    }

    return 0;
}
