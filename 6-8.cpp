#include<iostream>
using namespace std;

class Money 
{
private:
	int dollar;
	int cent;
public:
	void set_dollar(int n) {
		dollar = n;
	}
	void set_cent(int n) {
		cent = n;
	}
	int read_dollar() {
		return dollar;
	}
	int  read_cent() {
		return cent;
	}
	double monetaryAmount() {
		return dollar + double(cent) * 0.01;
	}
};

int main(void) {
	Money test1, test2;
	test1.set_dollar(60);
	test1.set_cent(40);

	test2.set_dollar(12);
	test2.set_cent(34);

	cout << test1.monetaryAmount() << endl << test2.monetaryAmount() << endl;

	return 0;
}