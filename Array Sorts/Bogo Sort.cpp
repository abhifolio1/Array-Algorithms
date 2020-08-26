/******************************************************************************

PERMUTATION SORT

Let us consider an example array ( 3 2 5 1 0 4 )
4 5 0 3 2 1 (1st shuffling)
4 1 3 2 5 0 (2ndshuffling)
1 0 3 2 5 4 (3rd shuffling)
3 1 0 2 4 5 (4th shuffling)
1 4 5 0 3 2 (5th shuffling)

*******************************************************************************/

// C++ implementation of Bogo Sort 
#include<bits/stdc++.h> 
using namespace std; 

// To check if array is sorted or not 
bool isSorted(int a[], int n) 
{ 
	while ( --n > 1 ) 
		if (a[n] < a[n-1]) 
			return false; 
	return true; 
} 

// To generate permuatation of the array 
void shuffle(int a[], int n) 
{ 
	for (int i=0; i < n; i++) 
		swap(a[i], a[rand()%n]); 
} 

// Sorts array a[0..n-1] using Bogo sort 
void bogosort(int a[], int n) 
{ 
	// if array is not sorted then shuffle 
	// the array again 
	while ( !isSorted(a, n) ) 
		shuffle(a, n); 
} 

// prints the array 
void printArray(int a[], int n) 
{ 
	for (int i=0; i<n; i++) 
		printf("%d ", a[i]); 
	printf("\n"); 
} 

// Driver code 
int main() 
{ 
	int i=0,n=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	bogosort(a, n); 
	printf("Sorted array :\n"); 
	printArray(a,n); 
	return 0; 
} 
