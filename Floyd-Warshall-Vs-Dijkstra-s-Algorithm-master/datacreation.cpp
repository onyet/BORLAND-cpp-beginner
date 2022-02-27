/*
* Author Charles Neeler (CharlesNeeler@my.unt.edu)
* Class CSCE 
* Date 12 NOV 15
* Project
*/

#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>


using namespace std;


int main()
{

	srand(time(NULL)); //seed for rand
	fstream fs;

	int sel, size, x, y, n, counter = 1;
	n = 1;
	cout << endl;

	sel == -1;

	cout << "Please enter the size of your matrix: ";
	cin >> size;

	cout << endl;

	cout << "Please choose how you would like your data organized: " << endl;  //housekeeping
	cout << "Press 1 for all random data points" << endl;
	cout << "Press 2 for data points to be the same value" << endl;
	cout << "Press 0  to quit" << endl;

	cin >> sel;

	int graph[size][size];

	while (sel != 0)

	{
		if (sel == 2) //all ones
		{
			for (x = 0; x < size; x++)
			{
				for (y = 0; y < size; y++)
				{
					if (x == y)
					{
						graph[x][y] = 0;
					}
					else
					{
						graph[x][y] = 1;
					}

				}

			}
			break;
		} //end ones

		else if (sel == 1) //random numbers
		{
			for (x = 0; x < size; x++)
			{
				for (y = 0; y < size; y++)
				{
					if (x == y)
					{
						graph[x][y] = 0;
					}
					else
					{
						graph[x][y] = (rand() % 10) + 1;
					}

				}

			}
			break;
		}//end random


		if (sel == 0)
		{
			return 0;
		}
	}


	fs.open("graph.txt", fstream::trunc | fstream::out);

	//for (int a = 0; a < 2; a++) //produce two graphs if I keep both algorithms in one program
	{
		fs << size;
		fs << "\n";

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				fs << graph[i][j];
				fs << " ";
			}
			fs << "\n";
		}

		fs << "\n";

	}
	


	fs.close();
	fs.flush();

	return 0;
}
