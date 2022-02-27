#include <stdio>
#include <conio>
#include <iostream>
#include <math>

void main() {

	int x = 2, n[2], y = 1, a = 1, c = 2;



   for(y; y < 11; y++) {

   	if(y % 2 == 0) {
   		// x beda
      	n[y-1] = c*pow(x,((y+1)/2)-1);

         cout << n[y-1] << " ";

      } else {
      	// x beda
         n[y-1] = a+(((y+1)/2) - 1)*x;

         cout << n[y-1] << " ";

      }

   }

   getch();

}