#include <stdio.h>
#include <iostream.h>
#include <conio.h>

void main(){
	int a;

   for(a = 0; a <= 10; a++){
   	if(a%2 == 1){
   		cout << "Tahu ke-" << a << endl;
      }
   }

   cout << "Tahu dikurangin" << endl;

   for(a = 20; a >= 1; a-=2){
   	cout << "Tahu ke-" << a << endl;
   }

   getch();
}