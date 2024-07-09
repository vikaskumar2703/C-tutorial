#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int number = rand() % 100 +1 ;
	int guess = 0;
	int guess_count = 0;

	do{
		cout << "Guess a number between 0 and 100: ";
		cin >> guess ;
guess_count++;
	if(guess > number) cout << "High" << endl;
	else if (guess < number ) cout << "Low "<< endl;
	else cout << "Thats Right ! You guessed the right number in "<< guess_count <<" guesses." << endl;

	} while(guess != number);

}