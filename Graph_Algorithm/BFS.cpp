<<<<<<< Updated upstream
//Breadth First Search Algorithm 
#pragma once
#include <stdio.h>
#include <iostream>

class BFS
{
private:
	bool visited = false;
	int count = 0;
	int stageArray[];

public:
	//BFS class constructor 
	BFS(int numberOfInput);

	//bfsOfGraph 



};


BFS::BFS(int numberOfInput) {

}

BFS::bfsOfGraph() {
	count = numberOfInput;

	//Create int array for stage arrangment 
	stageArray[count];

	while

}




=======
//Breadth First Search Algorithm 
#pragma once
#include <stdio.h>
#include <iostream>

class BFS
{
private:
	bool visited;
	int numHolder;
	int stageArray[];
	BFS* stage;

public:
	BFS(int numberOfInput);
	BFS bfsOfGraph();
	BFS bfsLinking();
};

//Function definition 

//numberOfInput variable will hold the number of stage user wants to put. 
//Assign the value to count 
BFS::BFS(int numberOfInput) {
	visited = false;
	numHolder = numberOfInput;
	stageArray[numberOfInput];
}

//bfsOfGraph functiojn will print out the array element in order
BFS::bfsOfGraph() {
	int count = 0;

	std::cout << "The order is: ";
	while (count < numHolder) {
		std::cout << stageArray[count] << " ";
		count++;
	}
}

//bfsLinking function will arrange the order of elements based on user's input
BFS::bfsLinking() {


}






>>>>>>> Stashed changes
