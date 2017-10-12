#include <string>
using namespace std;

string stringGen();
void radixSort(Bin<string>& holdBin, Bin<string> bins[], int numBins, int numString, int lenString);
bool greaterString(string one, string two);
void swap(string* a, string* b);
int partition (string arr[], int low, int high);
void quickSort(string arr[], int low, int high);