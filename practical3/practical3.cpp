//==============================================================================
// Name        : practical3.cpp
// Author      : your name
// Version     : 1.0
// Description : practical 3 test program to exercise the simple sort algorithms
//==============================================================================

#include <string>
#include <cstdlib>	// srand
#include <ctime>	// time
#include "Array.h"
#include "Sort.h"

using namespace std;

// PostCondition: array is filled with random numbers 1..range
void fillRandom(Array<int> & data, int range=100) {
	for (int i = 0; i < data.length(); i++) {
		data[i] = rand() % 100 + 1;
	}
}

// test selection sort
void testSelect() {
	Array<int> intArray(10);
	fillRandom(intArray, 100);

	cout << "Unsorted data: " << intArray << endl;

	selectionSort(intArray);

	cout << "Sorted data: " << intArray << endl;
}

// test insertion sort
void testInsert() {
	Array<int> intArray(10);
	fillRandom(intArray, 100);

	cout << "Unsorted data: " << intArray << endl;

	insertionSort(intArray);

	cout << "Sorted data: " << intArray << endl;
}


// return difference in the largest and smallest elements in the array  
int maxDiff(const Array<int> & data) {
	int min = data[0];
	int max = data[0];

	for (int i = 1; i < data.length(); i++) {
		if (data[i] < min) {
			min = data[i];
		}
		if (data[i] > max) {
			max = data[i];
		}
	}
	cout << (max - min) << endl;
	return (max - min);
}
// Compare performance of selection/insertion sort.
void testBoth() {

}

// test string sorting
void testString() {

}

// Main method.
int main() {
	
	//initialise the random number generator (used in fillRandom())
	srand((unsigned)time(NULL));

	Array<int> a(5);
    a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;

	// call test methods here
	testInsert();
	testSelect();

	maxDiff(a);
	// ---------------------------------------------------
	cout << endl << "Press enter to quit";
	cin.get();
	return 0;
}
