#include<istream>
using namespace std;

class Door{
private:
	bool isOpen;
	bool isClose;
public:
 	Door();

	void openDoor();
	void closeDoor();
	void lockDoor()
	{
		cout<<"Door is locked\n"<<endl;
	}

	void openDoor(){
		isOpen = true;
	}
	void closeDoor(){
		isOpen = false;
		isClose = true;
	}
	void unlockDoor()
	{
		cout<<"Door is unlocked...\n"<<endl;
	}
	bool isDoorOpen()const
	{
		return isOpen;
	}
	bool isDoorClose()const
	{
		cout << "is doof is implemented " ;
		return isClose;
	}
};


int main()
{
	

	return 0;
}