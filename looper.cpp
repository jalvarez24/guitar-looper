#include<iostream>
using namespace std;

int main() {
	char input;
	
	cout << "Welcome to Looper Program!" << endl;
	cout << "------------------------------------------" << endl;
	cout << "Test input and adjust volume. Hit button when done." << endl;
	system("./soundCheck.sh");
	
	while(true) {
		if('\n' == getchar()) {
			break;
		}
	}
	
	system("./stopRecord.sh");
	
	cout << "Step on button to start new loop." << endl;
	cout << "\tStep on button again to close it." << endl;
	
	bool loopEmpty = true;
	
	while(true) {
		if('\n' == getchar()) {
			if(loopEmpty){
				cout << "Recoring..." << endl;
				loopEmpty = false;
				system("./record.sh");
			}
			else {
				cout << "Loop Saved" << endl;
				system("./stopRecord.sh");
				break;
				
			}
		}
	}
	cout << "Step on button to play loop." << endl;
	while(true) {
		if('\n' == getchar()) {
			system("./soundCheck.sh &");
			system("./playLoop.sh");
		}
	}
	
	return 0;
}	





