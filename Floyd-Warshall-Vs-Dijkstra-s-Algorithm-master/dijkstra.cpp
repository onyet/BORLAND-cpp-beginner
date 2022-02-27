/*
* Author Charles Neeler (CharlesNeeler@my.unt.edu)
* Class CSCE
* Date 12 NOV 15
* Project
*/

#include <iostream>
#include <chrono>
#include <fstream>
#include <limits.h>

#define INF -1

using namespace std;
using namespace std::chrono;

int main(int argc, char*argv[])
{
	int size;

	ifstream fs(argv[1]);

	fs >> size; //take in the size of our graph so we can rebuild

	int data[size][size];

	int datapoint; //need a way to transfer data

	//Put our data points into our graph
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			fs >> datapoint;
			data[x][y] = datapoint;
		}
	}
	// At this point, we've populated our graph again.

	fs.close();


	// begin Dijkstra

	cout << "Starting Dijkstra's Algorithm." << endl;


	int finishedgraph[size][size];

	int distance[size];
	bool completed[size];

	int counter, bestdistance, a, b, c, i, x;


	high_resolution_clock::time_point time1 = high_resolution_clock::now(); //star stopwatch

	for (counter = 0; counter < size; counter++)
	{
		for (i = 0; i < size; i++) //set completed to false for loop
		{
			distance[i] = INT_MAX;
			completed[i] = false;
		}
		distance[counter] = 0;

		while (true)
		{
			int a = INF;
			bestdistance = INT_MAX;

			for (i = 0; i < size; i++)
			{
				if (!completed[i] && distance[i] < bestdistance) //test if we've been here before
				{
					a = i;
					bestdistance = distance[i];
				}
			}
			if (bestdistance == INT_MAX)
			{
				break;
			}

			for (b = 0; b < size; b++)
			{
				if (!completed[b] && data[a][b] != INF)
				{
					if (distance[b] > distance[a] + data[a][b]) //compare distances and replace if need be
					{
						distance[b] = distance[a] + data[a][b];
					}
				}
			}

			completed[a] = true;

		}

		for (x = 0; x < size; x++)
		{
			if (distance[x] != INT_MAX)
			{
				finishedgraph[counter][x] = distance[x];
			}
			else finishedgraph[counter][x] = INF;
		}

		//We've finished with individual node
	}



	high_resolution_clock::time_point time2 = high_resolution_clock::now();
	duration<double> runningtime = duration_cast<duration<double>>(time2 - time1);

	fstream endfs;
	endfs.open("DijkstraCompleted.txt", fstream::trunc | fstream::out);

	endfs << "Chaz Neeler  Dijkstra's Algorithm Completed Graph" << endl;
	endfs << "Given graph of size:  " << size << ".  Total number of nodes compared: " << size*size << endl;
	endfs << "Dijkstra's Algorithm was completed in: " << duration_cast<nanoseconds>(runningtime).count() / 10 << " nanoseconds." << endl;
	endfs << endl << "Completed graph" << endl << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			endfs << finishedgraph[i][j];
			endfs << " ";
		}
		endfs << "\n";
	}

	endfs.close();
	endfs.flush();

	cout << endl << "Dijksta's Algorithm completed.  Results and final graph may be found at DijkstraCompleted.txt" << endl << endl;


	return 0;
}
