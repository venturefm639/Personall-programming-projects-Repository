#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include "guess.h"
using namespace std;

int main()
{
   srand(time(NULL));
   char input_1;
   char response_1 = 'y';
   char response_2 = 'n';
   std::cout << "press y to start the game or press n to stop the game" << "\n";
   std::cin >> input_1;
   while (true)
   
   {
      if (input_1 != response_1||response_2)
   std::cout<<"Enter y or n "<<"\n";
   break;
   
   }
   if (input_1 == response_1)
   {
      guess_game();
      /* code */
   }
   else if (input_1==response_2)   
   {
     std:: cout << "game ended"
           << "\n";
      /* code */
   }
   
   
   
  
   return 0;
}
