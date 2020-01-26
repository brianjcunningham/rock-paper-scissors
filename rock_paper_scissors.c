#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    // Seeding the PRNG with the Current Time
    srand(time(0)); 
    
    // instructions displayed to user
    printf( "Time for a Rock-Paper-Scissors Showdown! Please enter R, P, or S.\n" );
    
    // entering showdown choices 
    int computer_picks = rand() % 3; // this should provide a random number between 0 and 2
    char user_input = getchar();
    
    while (user_input != 'R' || user_input != 'r' || user_input != 'P' || user_input != 'p' || user_input != 'S' || user_input != 's'){
        printf("Please Enter a Valid Input\n");
        user_input = getchar();
    }
    
    printf("The Computer has picked %i!\n",computer_picks);
    // game logic
//     switch (user_input) {
//         case 'R' || 'r':    
//         
//     }
    return 0;
}
