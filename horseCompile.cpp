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
		while (keepGoing == true){
			std::string userInput;
			std::cout << "Press Enter to continue." << std::endl;
			std::cin.ignore(256, '\n');
			for (horseSentry = 0; horseSentry < NUM_HORSES; horseSentry++){
				advance(horseSentry, horses);
				printLane(horseSentry, horses);
				if (isWinner(horseSentry, horses) == true){
					keepGoing = false;
				} // end if
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
		horses[horseNum] = horses[horseNum] + forward; // move forward 0 or 1 spaces
	} // end advance
	
	void printLane(int horseNum, int* horses){
		int distance = horses[horseNum];
		int i;
		for (i = 0; i < distance; i++){
			std::cout << ".";
		} // end for
		std::cout << horseNum;
		for (i = horses[horseNum]; i < FINISH; i++){
			std::cout << ".";
		} // end for
		std::cout << std::endl;
	} // end printLane

	bool isWinner(int horseNum, int* horses){
		bool raceFinish = false;
		if (horses[horseNum] >= FINISH){
			std::cout << horseNum << " WINS! ! ! ! ! ! ! ! ! ! ! ! ! !" << std::endl;
			raceFinish = true;
		} // end if
		return raceFinish;
	} // end isWinner
