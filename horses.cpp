// Procedural Horse Race Game
// Rayan Baker Boudissa

#include <iostream>
#include <random>

#define FINISH 15
#define NUM_HORSES 5

	void advance(int horseNum, int* horses); // moves a given horse 0 or 1 places forward
	void printLane(int horseNum, int* horses); // prints a display representing a horse's position
	bool isWinner(int horseNum, int* horses); // determines whether a horse has won yet

	int main(){
		int horses[NUM_HORSES] = {0, 0, 0, 0, 0}; // put horses' positions into an array
		bool keepGoing = true;

/*		int i = 0; // define sentry variable
		for (i = 0; i < NUM_HORSES; i++){ // test for passing values in horses
			std::cout << horses[i]; // print a horse's position
		}
*/		
		int horseSentry = 0;
		while (keepGoing !== false){
			for (horseSentry = 0; horseSentry < (NUM_HORSES - 1); horseSentry++){
				advance(horseSentry, &horses);
				printLane(horseSentry, &horses);
				keepGoing = isWinner(horseSentry, &horses);
				std::cout << "Press Enter to continue.";
				std::cin >> continue;
			} // end for
		} // end while
		std::cout << std::endl; // line break after test
		return 0;
	} // end main

	void advance(int horseNum, int* horses){ // flips a coin, changes a horse's position
		int forward;
		std::random_device rd;
		std::uniform_int_distribution<int> dist(0, 1);
		forward = dist(rd); // coin flip
		*horses[horseNUM] = *horses[horseNUM] + *forward // move forward 0 or 1 spaces
	} // end advance
	
	void printLane(int horseNum, int* horses){
		int distance = *horses[horseNum];
		for (i = 0; i < distance; i++){
			std::cout << ".";
		} // end for
		std::cout << horseNum << std::endl;
	} // end printLane

	bool isWinner(int horseNum, int* horses){
		bool keepGoing = true;
		if (*horses[horseNum] >= FINISH){
			std::cout << horseNum << " WINS! ! ! ! ! ! ! ! ! ! ! ! ! !" << std:endl;
			keepGoing = false;
		} // end if
		return keepGoing;
	} // end isWinner
