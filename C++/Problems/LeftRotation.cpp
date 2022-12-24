#include <iostream>
#include <vector>
using namespace std;

/* Function to left rotate the array by d elements,here we are passing 
vector by reference to avoid copying that just make our program slow */
void rotate(vector<int>& vec, int d)
{
	// Base case
	if (d == 0)
		return;

	/* Push first d elements from the beginning
	to the end and remove those elements from the beginning */
	for (int i = 0; i < d; i++)
	{
		// adding first element at the end of vector
		vec.push_back(vec[0]);
	
		// removing first element
		vec.erase(vec.begin());
	}

	// Print the rotated array
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
}

int main()
{
	vector<int> vec = { 1, 2, 3, 4, 5, 6 };
	int n = vec.size();
	int d = 2;

	rotate(vec, d % n);

	return 0;
}
