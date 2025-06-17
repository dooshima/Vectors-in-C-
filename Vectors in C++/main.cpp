#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };

	// Print vector elements
	for (string car : cars) {
		//cout << car << "\n";

		std::cout << "-------------------------------" << std::endl; // Output: 0
		//push_back() is a member function of std::vector that appends a new element to the end of the vector.

		car.push_back('p');
		std::cout << car << std::endl; // Output: 0

	}


	return 0;
}