#include <iostream>
#include "linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    LinkedList* list = new LinkedList ();
    
    int test;
    cout << "Enter number form (1-3): " ;
    cin >> test;
	    switch (test) {
	    	case 1://1-3 singlylist pana 
		    	list->add(12);
		        list->add(1);
		        list->add(20);
		        list->add(100);
		        list->add(3);
		        list->add(2);
		        cout << "Before: " << endl;
		        list->print();
		    	list->bubble();
		    	cout << "After: " << endl;
		    	list->print();
		    	break;
		   case 2:
		    	list->add(12);
		        list->add(1);
		        list->add(20);
		        list->add(100);
		        list->add(3);
		        list->add(2);
		        cout << "Before: " << endl;
		        list->print();
		 	  	list->selection();
		    	cout << "After: " << endl;
		    	list->print();
		    	break;
		    case 3:
		    	list->add(12);
		        list->add(1);
		        list->add(20);
		        list->add(100);
		        list->add(3);
		        list->add(2);
		        cout << "Before: " << endl;
		        list->print();
		    	list->insertion();
		    	cout << "After: " << endl;
		    	list->print();
		    	break;
		}
		
	return 0;
}
