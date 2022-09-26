#include <iostream>
using namespace std;

void selectionSort(int array[], int size){
	int min_i, min;
	for (int i = 0; i < size - 1; i++){
		min = array[0];
		min_i = i;
	
		for (int j = i + 1; j < size; j++){
			if(array[j] < min){
				min_i = array[j];
				min = array[j];
			}
		}
		
		if (i != min){
			int temp = array[i];
			array[i] = min;
			array[min_i] = temp;	
		}
		
		
	}
}

int main(){
	int size;
	cout << "Enter Size: ";
	cin >> size;

	int arr[size];
	
	cout << "Enter Array: " ;
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
	
	cout << "Before: " << endl;
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
		
	selectionSort(arr, size);
	
	cout << "\nAfter: " << endl;
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
