#include "gamelogic.h"
#include <stdio.h>

int get_game_logic(char user_input_from_main, int computer_picks_from_main){
    
    // This function returns an int. We'll say 3 is win, 2 is draw, 1 is lose, and 0 is error. 
    // I learned that my compiler (or the C language?) does not like there to be expressions to be evaluated within case statements, so I would have been better off using if-else structures. 
    
    
    switch (computer_picks_from_main){
   case 0 : // We'll let zero be computer picking paper
      switch (user_input_from_main){
          case 'p': 
            return 2;
          case 'P':
              return 2;            
          case 'r':
              return 1;
          case 'R':
              return 1;
          case 's':
              return 3;
          case 'S':
              return 3;
          default: 
              return 0;
      }
   case 1 : // We'll let one be computer picking scissors
      switch (user_input_from_main){
          case 'p': 
            return 1;
          case 'P':
              return 1;            
          case 'r':
              return 3;
          case 'R':
              return 3;
          case 's':
              return 2;
          case 'S':
              return 2;
          default: 
              return 0;
      }
  case 2 : // computer picks rock
      switch (user_input_from_main){
          case 'p': 
            return 3;
          case 'P':
              return 3;            
          case 'r':
              return 2;
          case 'R':
              return 2;
          case 's':
              return 1;
          case 'S':
              return 1;
          default: 
              return 0;      }
  default : /* Hopefully you never get here.*/
    return 0; 
    }
}


void read_out_picks(char user_input_from_main, int computer_picks_from_main){
    if (user_input_from_main=='R' || user_input_from_main=='r'){
     printf("\nYou have picked Rock!");   
    }
    
    else if (user_input_from_main=='P' || user_input_from_main=='p'){
     printf("\nYou have picked Paper!");   
    }
    
    else if (user_input_from_main=='S' || user_input_from_main=='s'){
     printf("\nYou have picked Scissors!");   
    }
    
    
    if (computer_picks_from_main==0){    
    printf("\nThe Computer has picked Paper!");
    }
    
    else if (computer_picks_from_main==1){    
    printf("\nThe Computer has picked Scissors!");
    }
    
    if (computer_picks_from_main==2){    
    printf("\nThe Computer has picked Rock!");
    }
    
    
    
};
