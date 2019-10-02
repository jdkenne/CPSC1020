#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vector;
	vector.reserve(10000);
	int i;
	int avg = 0;
	ifstream input("numbers.txt");
	while(input >> i) {
     		vector.emplace_back(i);
	}

	for (int x: vector) {
    		avg += x;	
	}
	avg = avg / vector.size();
 	cout << avg << endl;
 	vector.clear();

	return 0;
}
