/**
 *    @file: prog1.cc
 *  @author: Matthew Isham
 *    @date: 9/20/24      \
 *   @brief: checks an input for a certain number
 *  
 */




#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int number;   //this is where we are going to store our input

  int answer;   // we will use this to compare to the input

  do {
    cout << "Enter a number, and I'll compute the answer:";
    cin >> number;

    
    // checks to see if the input is not equal to 12345
    if(number != 12345){
      switch (number) {
        case 42:
        cout << "You found the answer!\n";
        answer = 42;
        return(0);
        



      case 0:
        answer = 0;
        cout << "You've got nothing!\nTry again.\n";
        break;


      case 1:
        answer = 1;
        cout << "Well, at least you have something\nBut it's not enough, try again.\n";
        break;

      
      case 13:
        answer = 13;
        cout << "You're very unlucky aren't you.\nTry again.\n";
        break;


      case 21:
        answer = 21;
        cout << "Well, I'll give you one more, but it's still not enough.\n" << "Try again.\n";
      break;


    default:
      answer = -1;
      cout << "That number is so bogus, I'm taking what little you have away from you.\n"
	   << "Try again, and be smart about it this time.\n";
      break;
    }
    
    }
    // checks the input for 12345
    else if(number == 12345){
      cout << "You found the seceret code you won! \n";
      return(0);
    }
    
  } while (answer != 42);
  
  return (EXIT_SUCCESS);
}
