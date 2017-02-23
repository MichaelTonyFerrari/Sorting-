#include <iostream>

using namespace std; 


int merge(int array[], int left, int mid, int right){

	int i, j, k; 
	int n1 = mid - left + 1; 
	int n2 = right - mid; 

	int left_array[n1];
	int right_array[n2];

	for(i = 0; i < n1; i++)
		left_array[i] = array[left + i];
	for(j =0; j < n2; j++)
		right_array[j] = array[mid+left+j];

}



int mergesort(int array[], int left, int right){

	if(left < right)
		int mid = left + (right-left)/2;

	mergesort(array, left, mid);
	mergesort(array, mid+1, right); 

	merge(array, left, mid, right); 
}


void print_array(int array[], int size){

	int i;
	for(i = 0; i < size; i++)
		cout << array[i] << " ";

}


int main(){

	int array[] = {4,16,12,14,13,20,1};
	int array_size = sizeof(array)/sizeof(array[0]);

	cout << "Given array is: " << endl; 
	print_array(array, array_size);

	mergesort(array, 0, array_size -1);

	cout << "Given array sorted: " << endl; 
	print_array(array, array_size);

	return 0; 



}