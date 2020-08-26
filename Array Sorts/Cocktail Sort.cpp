/******************************************************************************
COCKTAIL SORT 

(5 1 4 2 8 0 2) ? (1 5 4 2 8 0 2), Swap since 5 > 1
(1 5 4 2 8 0 2) ? (1 4 5 2 8 0 2), Swap since 5 > 4
(1 4 5 2 8 0 2) ? (1 4 2 5 8 0 2), Swap since 5 > 2
(1 4 2 5 8 0 2) ? (1 4 2 5 8 0 2)
(1 4 2 5 8 0 2) ? (1 4 2 5 0 8 2), Swap since 8 > 0
(1 4 2 5 0 8 2) ? (1 4 2 5 0 2 8), Swap since 8 > 2

*******************************************************************************/
// C++ implementation of Cocktail Sort 
#include <bits/stdc++.h> 
using namespace std; 

// Sorts arrar a[0..n-1] using Cocktail sort 
void CocktailSort(int a[], int n) 
{ 
	bool swapped = true; 
	int start = 0; 
	int end = n - 1; 

	while (swapped) { 
		// reset the swapped flag on entering 
		// the loop, because it might be true from 
		// a previous iteration. 
		swapped = false; 

		// loop from left to right same as 
		// the bubble sort 
		for (int i = start; i < end; ++i) { 
			if (a[i] > a[i + 1]) { 
				swap(a[i], a[i + 1]); 
				swapped = true; 
			} 
		} 

		// if nothing moved, then array is sorted. 
		if (!swapped) 
			break; 

		// otherwise, reset the swapped flag so that it 
		// can be used in the next stage 
		swapped = false; 

		// move the end point back by one, because 
		// item at the end is in its rightful spot 
		--end; 

		// from right to left, doing the 
		// same comparison as in the previous stage 
		for (int i = end - 1; i >= start; --i) { 
			if (a[i] > a[i + 1]) { 
				swap(a[i], a[i + 1]); 
				swapped = true; 
			} 
		} 

		// increase the starting point, because 
		// the last stage would have moved the next 
		// smallest number to its rightful spot. 
		++start; 
	} 
} 

/* Prints the array */
void printArray(int a[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		printf("%d ", a[i]); 
	printf("\n"); 
} 

// Driver code 
int main() 
{ 
	int i = 0,n=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	CocktailSort(a, n); 
	printf("Sorted array :\n"); 
	printArray(a, n); 
	return 0; 
} 
