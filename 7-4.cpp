#include<iostream>
using namespace std;

class HotDogStand {
public:
	//initialize ID, soldNum. count totalSold
	HotDogStand(int id, int sold) : ID(id), soldNum(sold) { totalSold += sold; }
	int getID() { return ID; }
	void JustSold() { 
		soldNum++;
		totalSold++;
	}
	int NumberOfSold() { return soldNum; }
	static int getTotalSold() { return totalSold; }
private:
	int ID;//stand's ID
	int soldNum;//number of hot dogs the stand sold
	static int totalSold;//total number of hot dogs sold by all stands
};

int HotDogStand::totalSold = 0;

int main(void) {
	HotDogStand stand1(1, 10);
	HotDogStand stand2(2, 20);
	HotDogStand stand3(3, 15);

	stand1.JustSold();

	stand2.JustSold();
	stand2.JustSold();

	stand3.JustSold();
	stand3.JustSold();
	stand3.JustSold();

	cout << "Hot Dog Stand (ID : " << stand1.getID() << " ) sold " << stand1.NumberOfSold() << " hot dog(s)." << endl;
	cout << "Hot Dog Stand (ID : " << stand2.getID() << " ) sold " << stand2.NumberOfSold() << " hot dog(s)." << endl;
	cout << "Hot Dog Stand (ID : " << stand3.getID() << " ) sold " << stand3.NumberOfSold() << " hot dog(s)." << endl;
	cout << "Total hot dogs sold by all stands: " << HotDogStand::getTotalSold() << endl;

	return 0;
}