//Given an integer n > 0, write a recursive C++ function that returns the sum of the squares of 1 through n.
#include <iostream>
using namespace std;
int recSum(int n){
	if (n==0){
		return 0;
	}
	else{
		return n+recSum(n-1);
	}
}
void recurse(int& x, int y){
	if(y>0){
		x++;
		y--;
		cout<<x<<" "<<y<<endl;
		recurse(x,y);
		cout<<x<<" "<<y<<endl;
	}
}
int itPower(int x, int n){
	int total = 1;
	for (int i =0; i<n;i++){
		total *=x;
	}
	return total;
}
int recPower(int x, int n){
	if (n==0){
		return 1;
	}
	else{
		return x*recPower(x,n-1);
	}
}
int main(){
	cout<<recSum(3)<<endl;
	int x = 5;
	recurse(x,3);
	cout<<itPower(2,3)<<recPower(2,3)<<endl;
}