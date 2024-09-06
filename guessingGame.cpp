#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  //Picking Random Number
  int randNum = rand()%7;
  //Stores the Input
  int input = 0;
  bool playing = true;
  int numberOfTries = 0;
  bool keepPlaying = false;
  char contPlay = '0';
  cout << "Welcome to Guessing Game"<< endl;
  while (playing == true)
    {
      cout << "Try to guess the number:" << endl;
      cin >> input;
      /*When the player guesses the number correctly the system asks them if th
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
	  randNum = rand()%7;
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
      
      
