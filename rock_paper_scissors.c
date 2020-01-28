#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "gamelogic.h"

int main()
{
    // Seeding the PRNG with the Current Time
    srand(time(0)); 
    
    // instructions displayed to user
    printf( "Time for a Rock-Paper-Scissors Showdown! Please enter R, P, or S.\n" );
    
    // entering showdown choices 
    int computer_picks = rand() % 3; // this should provide a random number between 0 and 2
    char user_input = getchar();
    
    //error checking the user's input
    while (user_input != 'R' && user_input != 'r' && user_input != 'P' && user_input != 'p' && user_input != 'S' && user_input != 's'){
        user_input = getchar();
    }
    
    // displaying what you and the computer picked
    read_out_picks(user_input,computer_picks);
    
    //calculate the results of the game and display it to the user
    
    if (get_game_logic(user_input,computer_picks)==3){
        printf("\nYou've won the game!\n");
    }
    else if (get_game_logic(user_input,computer_picks)==2){
        printf("\nIt's a draw!\n");
    }
    else if (get_game_logic(user_input,computer_picks)==1){
        printf("\nYou've lost the game.\n");
    }
    else {
            printf("\n\nSomething strange has happened.\n\n");
    }
    
    return 0;
}
