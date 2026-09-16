# CS121_horses
##A game that has horses randomly race to a finish line

This program should create five elements (horses) that have some starting position. 
The program will then randomly decide whether or not each horse will move forward once in their position. 
When one or more horses reach some final position, they will be declared the winner(s).

include io stream
include random library
define constant FINISH for the length of the track
define constant NUM\_HORSES for the number of horses

define void function advance to move horses forward
define void function printLane to display horses and their positions
define void function isWinner to determine whether a given horse has reached the finish line

begin main function
    create array horses to contain horses' positions; five zeroes
    define boolean variable keepGoing
    while no horse is a winner
        
        for each horse
            run function advance, with the horse's name and a reference to its position as input
            run function printLane, with the horse's name and a reference to its position as input
            run function isWinner, with the horse's name and a reference to its position as input
            ask the user to press Enter
        end for loop
    end while loop
end main

begin advance for inputs of integer horseNum and reference horses 
    define integer forward
    produce a random integer with a distribution between 0 and 1 and assign it to forward
    add value forward to the value stored at horses that belongs to the horse named horseNum
end advance

begin printLane for inputs of integer horseNum and reference horses
    define integer length, assigned the value at horses belonging to horse named horseNum
    for length that horse named horseNum has traveled
        print a period
    end for loop
    print horseNum
end printLane
