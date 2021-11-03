#include <iostream>
using namespace std;

class Bullet {
	static int count;
public:
	Bullet(){ 
		

	
		if (count > 5) {
			throw exception("You need reloading");
		}
		cout << count;
		count++;
	
	};

	~Bullet(){}
};

int Bullet::count = 1;

int main()
{
	Bullet bullet1;
	Bullet bullet2;
	Bullet bullet3;
	Bullet bullet4;
	Bullet bullet5;

	try{
	Bullet bullet6;
	}
	catch(const exception&shoot){
		cout << endl;
		cout << shoot.what();
	};

	

	return 0;
}

