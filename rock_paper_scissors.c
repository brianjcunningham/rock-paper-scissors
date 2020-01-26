#include <stdio.h>
#include <stdlib.h>

int main()
{
    // instructions displayed to user
    printf( "Time for a Rock-Paper-Scissors Showdown! Please enter R, P, or S.\n" );
    
    // entering showdown choices 
    char computer_picks = rand() % 3; // this should provide a random number between 0 and 2
    char user_input = getchar();
    
    printf("The Computer has picked %c!\n",computer_picks);
    // game logic
//     switch (user_input) {
//         case 'R' || 'r':    
//         
//     }
    return 0;
}
