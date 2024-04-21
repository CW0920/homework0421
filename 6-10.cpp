#include<iostream>
using namespace std;

class Weight
{
private:
	//store weight in pounds
	double pounds;
public:
	//store weight by pounds
	void setWeightPounds(double weight) {
		pounds = weight;
	}
	//by kilograms
	void setWeightKilograms(double weight) {
		pounds = weight / 2.21;
	}
	//by ounces
	void setWeightOunces(double weight) {
		pounds = weight / 16;
	}
	//return weight in pounds
	double getWeightPounds() {
		return pounds;
	}
	//in kilograms
	double getWeightKilograms() {
		return pounds * 2.21;
	}
	//in ounces
	double getWeightOunces() {
		return pounds * 16;
	}
};

int main(void) {
	Weight weightPounds, weightKilograms, weightOunces;

	weightPounds.setWeightPounds(37);
	cout << "Weight in pounds:" << weightPounds.getWeightPounds() << endl
		<< "Weight in kilograms:" << weightPounds.getWeightKilograms() << endl
		<< "Weight in ounces:" << weightPounds.getWeightOunces() << endl;

	weightKilograms.setWeightKilograms(54);
	cout << "Weight in pounds:" << weightKilograms.getWeightPounds() << endl
		<< "Weight in kilograms:" << weightKilograms.getWeightKilograms() << endl
		<< "Weight in ounces:" << weightKilograms.getWeightOunces() << endl;

	weightOunces.setWeightOunces(12);
	cout << "Weight in pounds:" << weightOunces.getWeightPounds() << endl
		<< "Weight in kilograms:" << weightOunces.getWeightKilograms() << endl
		<< "Weight in ounces:" << weightOunces.getWeightOunces() << endl;

	return 0;
}