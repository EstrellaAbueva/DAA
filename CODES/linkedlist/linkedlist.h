#include "node.h"
#include "list.h"
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <iostream>
using namespace std;

class LinkedList : public List {
    node* head;
    node* tail;
    int index;

    node* create_node(int num) {
        node* n = (node*) malloc( sizeof(node) );
        n->element = num;
        n->next = NULL;
        return n;
    }

    public:
        LinkedList() {
            index = 0;
            head = NULL;
            tail = NULL;
        }

        void addHead(int num) {
            node* newest = create_node(num);
            newest->next = head;
            head = newest;
            if (tail == NULL) {
                tail = newest;
            }
            index++;
        }

        void addTail(int num) {
            node* newest = create_node(num);
            if (tail != NULL) {
                tail->next = newest;
            }
            tail = newest;
            if (head == NULL) {
                head = newest;
            }
            index++;
        }

        int add(int num) {
            addTail(num);
            return index;
        }
        
        void bubble(){
    	bool flag;
			
			node* curr;
			node* ex = NULL;

			do{
				curr = head;
				flag = false;
				
				while(curr != NULL && curr->next != NULL){
					if ( curr->element > curr->next->element){
						int temp = curr->element;//Swap(curr, curr->next)
						curr->element = curr->next->element;
						curr->next->element = temp;
						
						flag = true;
					}	
					curr = curr->next; //update
						
				}
				
				//ex = curr;
					
			}while (flag);
		}
		
		void selection(){
		node* i;
		node* j;
		node* min;
		node* min_i;
		
			for(i = head; i != NULL && i->next != NULL; i = i->next){//base ranis arraylist na code
				min = head;
			    min_i = i;
			    
			    for(j = i->next; j != NULL ; j = j->next){
			            if(min->element > min->next->element){
			                min = min->next;
							min_i = j;
			            }
			        }
			        
			        if(min != i){//swapping of nodes
			            node* temp = min_i;//swap(min_i, i)
			            min_i = i;
			            i = temp;
			        }
		    }
        }      
		
		void insertion(){//sugod sa atubangan
		node* key =  head->next;
			while(key != NULL){
				node* curr = head;
					
				while (curr != key){
					if(key->element < curr->element){
						int temp = key->element;//swap(key, curr)
						key->element = curr->element;
						curr->element = temp;
					}
				curr = curr->next;
			}
			key = key->next;
			}
		}
		
        // WARNING! Do not modify this method below!
        // Doing so will nullify your score for this activity.
        void print() {
            node* currnode = head;
            if (head == NULL && tail == NULL) {
                cout << "(empty)";
                return;
            }
            while (true) {
                cout << currnode->element;
                if (currnode == tail) {
                    cout << endl;
                    return;
                }
                cout << " -> ";
                currnode = currnode->next;
            }
        }
};
