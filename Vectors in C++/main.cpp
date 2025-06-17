#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> cars = { "Volvo", "BMW", "Ford", "Mazda" };
	cars.push_back("Toyota");
	std::cout << "Push back: " << cars[4] << std::endl; // Output: 0

	// Print vector elements
	for (string car : cars) {
		cout << car << "\n";

		//push_back() is a member function of std::vector that appends a new element to the end of the vector.



		//car.at(1);
		//std::cout << "at  in c++ : " << car << std::endl; // Output: 0

	}


	return 0;
}