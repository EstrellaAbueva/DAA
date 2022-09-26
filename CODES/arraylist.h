#include "list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class ArrayList : public List { // : means "is-a" / extend
    int* array;
    int index;

    public:
        // CONSTRUCTOR
        ArrayList() {
            array = (int*) malloc(10);
            index = 0;
        }
	
	void add(int num) {
        *(array + index) = num;
        index++;
    }
        
	void bubble(){//sugod sa kinalasan
		bool flag;
		
		for (int i = 0; i < index; i++){
			flag = false;
			
			for (int j = 0; j < index - i - 1; j++){
				if ( *(array + j) > *(array + j + 1)){
					int temp = *(array + j);
					*(array + j) = *(array + j + 1);
					*(array + j + 1) = temp;
					
					flag = true;
				}	
					
			}
			
			if (flag == false)
				break;
		}
	}
    
    void selection(){//katong circle2
    	int i, j, min, min_i;
          
        for (i = 0; i < index - 1; i++){
	        min = *(array + i);
	    	min_i = i;
            
            for (j = i+1; j < index; j++){
              	if (min > *(array + j)){
	                min = *(array + j);
	                min_i = j;
              	}
            }
            
			if (i != min){
	            int temp = *(array + i);
	            *(array + i) = min; 
	        	*(array + min_i) = temp; 
            }
          }
	}
	
	void insertion(){//sugod sa atubangan
		int i, key , j;
		for (i = 1; i < index; i++){
			key = *(array + i);
			j = i - 1;//sunod na element sa key
			
			while (j >= 0 && *(array + j) > key){ // comparing
				*(array + j + 1) = *(array +j);
				j--;
			}
			
			*(array + j + 1) = key;
		}
	}
	
	void print() {
            cout << "[";
            for (int i = 0; i < index; i++) {
                cout << *(array + i);
                if (i != index - 1) {
                    cout << ", ";
                }
            }
            cout << "]";
        }
};
