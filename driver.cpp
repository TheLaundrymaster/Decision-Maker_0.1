#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include "Source.h"
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {
	
	
	//initalize val
	string again;
	vector <string> choices { "Smite", "Seige", "Apex" };

	int size = choices.size();
	Welcome();
	Loading();
	cout << Choosing(choices, size);
	Ending();

again:cout << "\nIf you want to run it again type y, if you want to exit type n" << endl;
	cin >> again;
	if (again == "y")
	{
		Loading_again();
		cout << Choosing(choices, size);
		Ending();
		goto again;
	}
	if (again == "n")
	{
		return 0;
	}




	
}