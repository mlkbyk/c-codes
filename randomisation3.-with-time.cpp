//file:randomisation3.-with-time.cpp 
//Randomisation with time 
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main() {
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		cout <<" " << 1 + rand() % 6;
		
	}

	return 0;
}
