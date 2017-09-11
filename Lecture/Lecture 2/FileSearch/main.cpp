#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream inFile;
	string fileName;
	string car;
	cout<<"Enter filename: ";
	getline(cin, fileName);
	inFile.open(fileName.c_str());
	if(inFile.fail()){
		cout<<"Could not open " <<fileName<<endl;
	}
	else{
		while((inFile >> car)){
			cout<<car<<endl;
		}
	}

	system("pause");
}