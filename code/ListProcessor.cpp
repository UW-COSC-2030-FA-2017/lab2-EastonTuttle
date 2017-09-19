/*
ListProcessor.cpp
Easton Tuttle
Computer Science II
Lab 02 - Lists
September 18, 2017
*/

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;
	cows.insertAsLast(5.55);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;
	cows.insertAsLast(3.33);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;


	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "Size of horse list: " << horses.size() << endl;
	cout << "Sum of horse list: " << horses.sum() << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "Size of horse list: " << horses.size() << endl;
	cout << "Sum of horse list: " << horses.sum() << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "Size of pigs list: " << pigs.size() << endl;
	cout << "Sum of pigs list: " << pigs.sum() << endl;
	pigs.insertAsLast(6.43);
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "Size of pigs list: " << pigs.size() << endl;
	cout << "Sum of pigs list: " << pigs.sum() << endl;


	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "Size of horse list: " << horses.size() << endl;
	cout << "Sum of horse list: " << horses.sum() << endl;
	horses.insertAsLast(0.567);
	cout << "horses list:  " << horses << endl;
	cout << "Size of horse list: " << horses.size() << endl;
	cout << "Sum of horse list: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "Size of pigs list: " << pigs.size() << endl;
	cout << "Sum of pigs list: " << pigs.sum() << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "Size of cows list: " << cows.size() << endl;
	cout << "Sum of cows list: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "Size of horse list: " << horses.size() << endl;
	cout << "Sum of horse list: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "Size of pigs list: " << pigs.size() << endl;
	cout << "Sum of pigs list: " << pigs.sum() << endl;

	cout << "End of code" << endl;

	return 0;
}
