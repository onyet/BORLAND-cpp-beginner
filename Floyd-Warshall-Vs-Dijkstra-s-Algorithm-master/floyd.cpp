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

	fs >> size; //take in the size of our dataay so we can rebuild

	int data[size][size], distance[size][size];

	int datapoint;

	//Put our data points into our graph
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			fs >> datapoint;
			data[x][y] = datapoint;
			distance[x][y] = datapoint;
		}
	}
	// At this point, we've populated our graph again.

	fs.close();

	//begin Floyd

	{
		int a, b, c;

		cout << "Starting Floyd-Warshall Algorithm." << endl;

		high_resolution_clock::time_point time1 = high_resolution_clock::now();

		//		cout << size << endl;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				for (c = 0; c < size; c++)
				{
					if (distance[b][a] + distance[a][c] < distance[b][c])//Distance ba + distance ac is compared against the distancebc, attempting to establish if there is a shorter path from b -> c through node a.
					{
						distance[b][c] = distance[b][a] + distance[a][c];
					}
				}
			}
		}

		high_resolution_clock::time_point time2 = high_resolution_clock::now();
		duration<double> runningtime = duration_cast<duration<double>>(time2 - time1);


		fstream endfs;
		endfs.open("FloydCompleted.txt", fstream::trunc | fstream::out);

		endfs << "Floyd-Warshall Algorithm Completed Graph" << endl;
		endfs << "Given graph of size:  " << size << ".  Total number of nodes compared: " << size*size << endl;
		endfs << "Floyd-Warshall Algorithm was completed in: " << duration_cast<nanoseconds>(runningtime).count() / 10 << " nanoseconds." << endl;
		endfs << endl << "Completed graph" << endl << endl;

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				endfs << distance[i][j];
				endfs << " ";
			}
			endfs << "\n";
		}

		endfs.close();
		endfs.flush();

		cout << endl << "Floyd-Warshall Algorithm completed.  Results and final graph may be found at FloydCompleted.txt" << endl << endl;

	}

	return 0;
}
