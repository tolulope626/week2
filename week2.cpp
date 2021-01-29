
#include<iostream>
using namespace std;
namespace cst8219 {
	class Vehicle {
	private:
		int numWheels, numDoors;

	public:
		Vehicle() : Vehicle(4) {}

		Vehicle(int w) : Vehicle(w, 4) {
			numWheels = w;
		}

		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
		}

	};
}
int main(int argc, char **argv)
{
   cout << "Hello World!" << endl;
   return 0;
}