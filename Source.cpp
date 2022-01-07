#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <ctime>
#include "Source.h"
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds


void Welcome() {
	cout.width(50);
	cout.fill('*');
	cout << " "<< endl;

	cout << "Welcome to the Decision Maker Beta:0.01" << endl;
	
	cout.width(50);
	cout.fill('*');
	cout << " " << endl;

	cout << "For this beta the choices are already chosen.\n" <<
		"Smite, Seige, and Apex are the three choices.\n" << 
		"Compares the three choices and which ever is chosen twice."<<"\n" <<
		"This happens a max of nine times to be the most accurate"<<"\n\n"
		"Thank you for trying it out!\n";

}
void Loading() {
	cout.width(50);
	cout.fill('<');
	cout << " " << endl;
	cout.width(50);
	cout.fill('>');
	cout << " " << endl;
	cout << "\n";
	cout << "Deciding which will be chosen...\n";
	sleep_for(2s);
	cout << "Carrying the one...\n";
	sleep_for(2s);
	cout << "Almost there...\n";
	sleep_for(1s);
	cout << "\n";
	
}
void Loading_again() {
	cout << "\n";
	cout << "Deciding which will be chosen yet again...\n";
	sleep_for(2s);
	cout << "Carrying the one...\n";
	sleep_for(2s);
	cout << "Almost there...\n";
	sleep_for(1s);
	cout << "\n";
}

string Choosing(vector<string> choices, int s)
{
	int picks[3] = { 0,0,0 };
	int range = 2 - 0 + 1;
	std::srand(std::time(0));
	
	for (int i = 0; i < 9; i++)
	{
		int num = rand() % range + 0;
		
		if (num == 0)
		{
			picks[0] += 1;
		}
		if (num == 1) {
			picks[1] += 1;
			}
		
		if (num == 2) {
			picks[2] += 1;
		}

		if (picks[0] == 2)
		{
			return choices[0];
		}
		if (picks[1] == 2)
		{
			return choices[1];
		}
		if (picks[2] == 2)
		{
			return choices[2];
		}
	}
}
void Ending() {
	cout << "\n\n";
	cout << "Hope its the one you wanted!" << endl;
}
