#include <iostream>
#include "arraylist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    List* list = new ArrayList();
    
    int test;
    cout << "Enter number form (1-3): " ;
    cin >> test;
	    switch (test) {
	    	case 1://1-3 array list pana 
		    	list->add(12);
		        list->add(11);
		        list->add(20);
		        list->add(90);
		        list->add(3);
		        list->add(2);
		        cout << "Before: " << endl;
		        list->print();
		    	list->bubble();
		    	cout << "\nAfter: " << endl;
		    	list->print();
		    	break;
		   case 2:
		    	list->add(12);
		        list->add(11);
		        list->add(20);
		        list->add(90);
		        list->add(3);
		        list->add(2);
		        cout << "Before: " << endl;
		        list->print();
		    	list->selection();
		    	cout << "\nAfter: " << endl;
		    	list->print();
		    	break;
		    case 3:
		    	list->add(12);
		        list->add(11);
		        list->add(20);
		        list->add(90);
		        list->add(3);
		        list->add(2);
		        cout << "Before: " << endl;
		        list->print();
		    	list->insertion();
		    	cout << "\nAfter: " << endl;
		    	list->print();
		    	break;
		}
		
	return 0;
}
