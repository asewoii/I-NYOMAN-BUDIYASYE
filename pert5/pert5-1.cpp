#include <iostream>

using namespace std;

int main () {
	int hari =1;
	cout<<"contoh switch case statement"<<endl;
	switch (hari)
	{
	case 1:
		cout<<"senin"<<endl;
		break;
	case 2:
		cout<<"selasa"<<endl;
		break;
	case 3:
		cout<<"rabu"<<endl;
		break;
	case 4:
		cout<<"kamis"<<endl;
		break;
	case 5:
		cout<<"jumat"<<endl;
		break;
	case 6:
		cout<<"sabtu"<<endl;
		break;
	case 7:
		cout<<"minggu"<<endl;
		break;
	default:
		break;
	}
	
	return 0;
}