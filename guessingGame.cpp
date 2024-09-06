#include <iostream>
#include <ctime>
/*
  Name: Yashwanth Narayan Shravanaboina Besta
  Date: 9/6/2024
  Objective: The user has to guess a random number between 1 - 100 and the game goes on until the user achives this. If the user guesses the number accurately
             and wants to play again they will be able to, the system also displays how many tries it took for the user to guess the number accurately.
	     
1. No global variables. (Global constants are all right.)

2. No strings. Not ever. (You can use cstrings/character arrays, and the cstring and cctype libraries are okay. In fact, I recommend using strcmp and strlen in your projects.)

3. You should include <iostream>, not stdio. (This applies more to C programmers.) Also, use "new" and "delete" instead of "malloc" and "free".
 */

using namespace std;

int main()
{
  srand(time(NULL));
  //Picking Random Number
  int randNum = rand()%101;
  //Stores the Input
  int input = 0;
  bool playing = true;
  int numberOfTries = 1;
  bool keepPlaying = false;
  char contPlay = '0';
  cout << "Welcome to Guessing Game"<< endl;
  while (playing == true)
    {
      cout << "Try to guess the number:" << endl;
      cin >> input;
      /*When the player guesses the number correctly the system asks them if they
      would like to play again. if the answer is 'Y' then it resets the values
      and they will be able to play again*/
    if(randNum == input)
      {
	cout << "Yay!! You guessed right" << endl;
	cout << "The number of tries you took: " << numberOfTries << endl;
	cout << "Do you want to play again? If so enter 'Y' " << endl;
	cin >> contPlay;
	if(contPlay == 'Y'){
	  srand(time(NULL));
	  randNum = rand()%101;
	  numberOfTries = 0;
	  cout << "Now Playing Again: " << endl;
	  playing = true;

	}
	else{
	  cout << "You have sucessfully existed the Game." << endl;
	  playing = false;
	}
      }
    /* The system keeps asking the user to guess the correct number and it tallies up the number of guess it took the user to guess the correct number.*/
    else
	  {
	    cout << "The number you entered is worng, Try Again!" << endl;
	    numberOfTries = numberOfTries + 1;

	  }
    }
}
      
      
