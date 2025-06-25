#include <iostream>
#include "guess.h"
//using namespace std;

bool guess_game()
{

   int random = rand() % 201;
   int guess;
   //int random = 50;
   int guess_count= 0;
   int guesses = 5;
   int guess_left;

  
   std::cout << "playing game"
        << "\n";
   std::cout << "Guess the number"
        << "\n";


while (guess_count < guesses)
{
while (guess != random)
{

   
    std:: cin >> guess;
  
   if(!(std::cin>>guess)){
   
      std::cout<<"Numberd only";
      return false;  
}

  else if (guess < random)
      {
         
   guesses--;
    std::cout<< random<<"\n";
std::cout << " guess is too low "<<"\n" 
<< guesses<< "guesses left"<<"\n"<<std::flush;
        //  std::cout.flush();
   guess_count++;
   //cout <<"enter a guess again"<<"\n";
      }

   else if (guess > random)
      {
   guesses--;
    std::cout<< random<<"\n";
   std::cout << "guess  is too high" << "\n"<<"You have"<<guesses
   << "guesses left"<<"\n"<< std::flush;          
    guess_count++;
   
      }

   else if (guess == random)
      {
   guesses--;
   std:: cout << "you won!"
   <<"\n";
   guess_count++;          
   std::cout << "you  have hmade"  << guess_count << "guesses"<< "\n";
     break;
      }

   else if (guess_count == 5 )
   {
   std::cout << "you hmade"  << guess_count << "guesses"<< "\n";
   break;
      /* code */
   } 

   }

   }
return true;
   }
            

