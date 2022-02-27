# Floyd-Warshall-Vs-Dijkstra-s-Algorithm
 Analyzing the Run Time of  Floyd-Warshall and Dijkstra's Algorithm

The program was successfully compiled and run on the linux servers for The University of North Texas

The flag -std=c++0x was used to compile the files.  For ease of use, it's highly recommended they be renamed during compilation.  For example:


g++ -std=c++0x -o data "datacreation.cpp"
g++ -std=c++0x -o floyd "floyd.cpp"
g++ -std=c++0x -o dijkstra "dijkstra.cpp"

data must be run first, but there are no special instructions outside of following the onscreen prompt.

./data

data will produce a file graph.txt.  This must be included as a command line argument for the other programs.

./floyd graph.txt
./dijkstra graph.txt

The programs will automaically run their algorithm on the txt file you've included, and in turn will produce a .txt file of their own.

This file will include information about the array, the run time, and the newly completed graph.

For sake of testing, sample files have been included to show proper output for the following:

graph.txt
DijkstraCompleted.txt
FloydCompleted.txt

Also included is a summary of my findings when analyzing the the two algorithms. 
