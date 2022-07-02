
//Breadth First Search Algorithm 
#pragma once
#include <stdio.h>
#include <iostream>

//BFS class 
class BFS
{
private:
	bool visited;
	int numHolder;
	int stageArray[];

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
	
	//nodes' number holder for linking 
	int firstNode = 0;
	int secondNode = 0;
	
	std::cout << "You have made " << numHolder << " nodes. \nNow it's time to link the nodes" << endl;
	std::cout << "Link two different nodes \nType two different nodes' number you want to link each other" << endl;
	std::cout << "Type here: ";
	std::cin >> firstNode; 
	std::cin >> secondNode; 
	std::cout << "You are linking " << firstNode << " and " << secondNode << endl;






}






>>>>>>> Stashed changes
