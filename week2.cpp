
#include<iostream>
using namespace std;
namespace cst8219 {
	class Vehicle {
	private:
		int numWheels, numDoors;

	public:
		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}

		Vehicle(int w) : Vehicle(w, 4) {
			numWheels = w;
			cout << "In constructor with 1 parameters" << endl;
		}

		Vehicle(int w, int d) {
			numWheels = w;
			numDoors = d;
			cout << "In constructor with 2 parameters" << endl;
		}

		~Vehicle(){
			cout << "In Deconstructor" << endl;
		}
	};
}
int main(int argc, char **argv)
{
	using namespace cst8219;
	Vehicle myVehicle(4, 2);
   cout << "I made a vehicle!" << endl;
   return 0;
}