#include<istream>
using namespace std;

class Door{
private:
	bool isOpen;
	bool isClose;
public:
 	Door();
	void openDoor(){
		isOpen = true;
	}
	void closeDoor(){
		isOpen = false;
		isClose = true;
	}
	void lockDoor();
	void unlockDoor();
	bool isDoorOpen()const;
	bool isDoorClose()const;
};

int main()
{
	

	return 0;
}