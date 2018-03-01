#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int round, won=0, count;
  game.newGame();
  cout<<"How many times would you like to play?\n";
  cin>>round;
  count = round + 1;
  for(round = 0; round < count ; round++)
   {
    game.guessDoorC();
    game.guessDoorC();
    if(game.isWinner()==true)
     {
      won++; 
     }
    game.newGame();
   
   }
  cout<<"You won "<<won<<" times!\n"; 
    
  return 0;
}
