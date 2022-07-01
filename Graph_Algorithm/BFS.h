<<<<<<< Updated upstream
=======
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
>>>>>>> Stashed changes
