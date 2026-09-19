# CS121\_horses
## A game that has horses randomly race to a finish line

```
This program should create five elements (horses) that have some starting position. 
The program will then randomly decide whether or not each horse will move forward once in their position. 
When one or more horses reach some final position, they will be declared the winner(s).

include io stream
include random library
define constant FINISH for the length of the track
define constant NUM_HORSES for the number of horses

define void function advance to move horses forward
define void function printLane to display horses and their positions
define boolean function isWinner to determine whether a given horse has reached the finish line

begin main function
    create array horses to contain horses' positions; five zeroes
    define boolean variable keepGoing
    while the race is still going (no horse has won)
        ask the user to press Enter
        for each horse
            run function advance, with the horse's name and a reference to its position as input
            run function printLane, with the horse's name and a reference to its position as input
            check value returned by function isWinner, with the horse's name and a reference to its position as input; if a horse has won,
                tell the while loop to stop
        end for loop
    end while loop
end main

begin advance for inputs of integer horseNum and reference horses 
    define integer forward
    produce a random integer with a distribution between 0 and 1 and assign it to forward
    add value forward to the value stored at horses that belongs to the horse named horseNum
end advance

begin printLane for inputs of integer horseNum and reference horses
    define integer distance, assigned the value at horses belonging to horse named horseNum
    define sentry variable i
    for distance that horse named horseNum has traveled
        print a period
    end for loop
    print horseNum
    for each space between horseNum and the finish line
        print a period
    end for loop
end printLane

begin isWinner for inputs of integer horseNum and reference horses
    define boolean raceFinish and assign false to it
    if the given horse's position is greater than or equal to constant FINISH
        print message declaring that horse named horseNum is a winner
        assign true to raceFinish
    end if
    return raceFinish
end isWinner
```
