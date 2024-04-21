#include<iostream>
#include<fstream>
using namespace std;

class BoxOfProduce {
private:
	string produce[3];
public:
	//modify string array
	void getProduce(string str,int index) {
		produce[index] = str;
	}
	//output string array
	void output() {
		for (int i = 0; i < 3; i++) {
			cout << produce[i] << endl;
		}
	}
};

int main(void) {
	BoxOfProduce box;
	string produceList[5];
	fstream fileList;
	fileList.open("List.txt", ios::in);
	//get list
	for (int i = 0; i < 5; i++) {
		fileList >> produceList[i];
	}
	srand(time(NULL));
	//random the produce list
	for (int i = 0; i < 3; i++) {
		box.getProduce(produceList[rand() % 5], i);
	}

	cout << "The contents of the box:" << endl;
	box.output();

	int replaceIndex;//store input index
	cout << "Enter the index number (0-2) of the item you want to replace: ";
	cin >> replaceIndex;

	string item;//store input item
	cout << "Enter the new item: ";
	cin >> item;
	box.getProduce(item, replaceIndex);

	cout << "The contents of the box after change: " << endl;
	box.output();

	return 0;
}