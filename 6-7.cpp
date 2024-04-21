#include<iostream>
using namespace std;

class Pizza 
{
public:
	void outputDescription();
	double computePrice();
	char type;
	int size;
	int topping;
};

int main(void) {
	Pizza costomer;  //pizza data the costomer ordered
	//get pizza type
	cout << "Enter the type of pizza (deep dish(\"A\"), hand tossed(\"B\"), or pan(\"C\")) > ";
	cin >> costomer.type;
	//get pizza size
	cout << "Enter the size of pizza (small = 1, medium = 2, large = 3) > ";
	cin >> costomer.size;
	//get number of toppings
	cout << "Enter the number of pepperoni or cheese toppings > ";
	cin >> costomer.topping;

	costomer.outputDescription();
	double price = costomer.computePrice();
	//output price when the data is correct
	if (price != -1) {
		cout << "Price: " << price << endl;
	}
	return 0;
}

void Pizza::outputDescription() {
	switch (type)
	{
		case 'A':
			cout << "Type: deep dish" << endl; break;
		case 'B':
			cout << "Type: hand tossed" << endl; break;
		case 'C':
			cout << "Type: pan" << endl; break;
		default:
			cout << "Wrong type input." << endl;
			return;
	}
	switch (size)
	{
		case 1:
			cout << "Size: small" << endl; break;
		case 2:
			cout << "Size: medium" << endl; break;
		case 3:
			cout << "Size: large" << endl; break;
		default:
			cout << "Wrong size input." << endl;
			return;
	}
	cout << "Number of topping(s): " << topping << endl;
}

double Pizza::computePrice() {
	double price = 0.0;
	if (type != 'A' && type != 'B' && type != 'C') {
		return -1;
	}
	switch (size)
	{
		case 1:
			price += 10;
			break;
		case 2:
			price += 14;
			break;
		case 3:
			price += 17;
			break;
		default:
			return -1;
	}
	price = price + topping * 2;
	return price;
}