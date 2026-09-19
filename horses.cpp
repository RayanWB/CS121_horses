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
		int horseSentry = 0;
		while (keepGoing == true){
			std::cout << "Press Enter to continue.";
			std::cin.ignore(256, '\n'); // allows the user to continue without cin requiring input other than Enter
			for (horseSentry = 0; horseSentry < NUM_HORSES; horseSentry++){ // checks/updates the position for each horse and determines who's won
				advance(horseSentry, horses);
				printLane(horseSentry, horses);
				if (isWinner(horseSentry, horses) == true){ // isWinner returns true when a horse reaches the finish line
					keepGoing = false; // keepGoing is updated outside of isWinner so that it can't be initialized back to true by non-winning horses
				} // end if
			} // end for
		} // end while
		return 0;
	} // end main

	void advance(int horseNum, int* horses){ // flips a coin, changes a horse's position
		int forward;
		std::random_device rd;
		std::uniform_int_distribution<int> dist(0, 1);
		forward = dist(rd); // coin flip
		horses[horseNum] = horses[horseNum] + forward; // move forward 0 or 1 spaces
	} // end advance
	
	void printLane(int horseNum, int* horses){ // displays a horse's position along the track
		int distance = horses[horseNum];
		int i;
		for (i = 0; i < distance; i++){ // spaces traveled
			std::cout << ".";
		} // end for
		std::cout << horseNum;
		for (i = horses[horseNum]; i < FINISH; i++){ // spaces until finish line
			std::cout << ".";
		} // end for
		std::cout << std::endl;
	} // end printLane

	bool isWinner(int horseNum, int* horses){ // determines if a horse has reached the finish line and signals the end of the race if so
		bool raceFinish = false;
		if (horses[horseNum] >= FINISH){
			std::cout << horseNum << " WINS! ! ! ! ! !" << std::endl;
			raceFinish = true;
		} // end if
		return raceFinish; // returned value controls the while loop in main() 
	} // end isWinner
