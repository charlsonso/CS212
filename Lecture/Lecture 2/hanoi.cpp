using namespace std;
#include <iostream>
void solveTowers(int count, char source, char dest, char spare){
	if(count<1)
		return;
	if (count ==1)
		cout<<"Move top disk from "<<source<<" to "<<dest<<endl;
	else
	{
		solveTowers(count-1, source, spare, dest);
		solveTowers(1, source, dest, spare);
		solveTowers(count -1, spare, dest, source);
	}
}

int main(){
	int disks;
	cout<<"Please enter number of disks: ";
	cin>>disks;
	solveTowers(disks,'a','b','c');
}