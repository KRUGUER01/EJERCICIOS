#include <iostream>
using namespace std;

int main()
{
	int arr[] = {10, 20, 30, 40 };
	cout << "Traversing the array with foreach using array data type: ";
	for ( int x : arr)
	cout<<x<< " ";
	
	cout<<"\nTraversing the array with foreach using auto keyword  :";
	for (auto x : arr)
	cout<<x<<" ";
}
