#include <iostream>
#include "tsp.h"
using namespace std;

int main()
{
	srand(time(NULL)); // random numbers
	
	// creates the graph1 with parameters: number of vertexes and initial vertex
	Graph * graph1 = new Graph(5, 0);
	// add edges
	graph1->City(6734, 1453);
	graph1->City(2233, 10);
	graph1->City(5530, 1424);
	graph1->City(401, 841);
	graph1->City(3082, 1644);
	graph1->City(7608, 4458);
	graph1->City(7573, 3716);
	graph1->City(7265, 1268);
	graph1->City(6898, 1885);
	graph1->City(1112, 2049);
	graph1->City(5468, 2606);
	graph1->City(5989, 2873);
	graph1->City(4706, 2674);
	graph1->City(4612, 2035);
	graph1->City(6347, 2683);
	graph1->City(6107, 669);
	graph1->City(7611, 5184);
	graph1->City(7462, 3590);
	graph1->City(7732, 4723);
	graph1->City(5900, 3561);
    graph1->City(4483, 3369);
    graph1->City(6101, 1110);
    graph1->City(5199, 2182);
    graph1->City(1633, 2809);
    graph1->City(4307, 2322);
    graph1->City(675, 1006);
    graph1->City(7555, 4819);
    graph1->City(7541, 3981);
    graph1->City(3177, 756);
    graph1->City(7352, 4506);
    graph1->City(7545, 2801);
    graph1->City(3245, 3305);
    graph1->City(6426, 3173);
    graph1->City(4608, 1198);
    graph1->City(23, 2216);
    graph1->City(7248, 3779);
    graph1->City(7762, 4595);
    graph1->City(7392, 2244);
    graph1->City(3484, 2829);
    graph1->City(6271, 2135);
    graph1->City(4985, 140);
    graph1->City(1916, 1569);
    graph1->City(7280, 4899);
    graph1->City(7509, 3239);
    graph1->City(10, 2676);
    graph1->City(6807, 2993);
    graph1->City(5185, 3258);
    graph1->City(3023, 1942);
  
    

   
    
 
	// creates random graph, parameter true is for generate the graph
	Graph * graph4 = new Graph(50, 0, true);
	graph4->showInfoGraph();
	
	// parameters: the graph, population size, generations and mutation rate
	// optional parameters: show_population
	Genetic genetic(graph4, 10, 1000, 5, true);

	const clock_t begin_time = clock(); // gets time
	genetic.run(); // runs the genetic algorithm
	cout << "\n\nTime for to run the genetic algorithm: " << float(clock () - begin_time) /  CLOCKS_PER_SEC << " seconds."; // shows time in seconds
	
	return 0;
}
