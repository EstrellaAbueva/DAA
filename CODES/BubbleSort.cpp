#include <iostream>
using namespace std;

void bubbleSort(int array[], int size){
	bool flag;
	for (int i = 0; i < size; i++){
		flag = false;
		for (int j = 0; j < size - i - 1; j++){
			if (array[j] > array[j + 1]){
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				
				flag = true;
			}	
				
		}
		if (flag == false)
			break;
	}
}

int main (){
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
		
	bubbleSort(arr, size);
	
	cout << "\nAfter: " << endl;
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
		
	return 0;
}
