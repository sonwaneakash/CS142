#include<iostream>
using namespace std;

class Node{
	public:
		//for data
		int data;
		//the pointers next and previous
		Node * next;
		Node * prev;
		//contructor to make the values to null
		Node(){
			next=NULL;
			prev=NULL;
		}
};

class Dlinkedlist{
	public:
	Node * head;
	Dlinkedlist(){
		head=NULL;
	}
	void insert(int val){
	
	//create a node
	Node * temp=new Node;
	temp->data=val;
	//for empty node and if not
	if(head==NULL){
		head = temp;
	}
	else{
		Node * current=head;
		while(current->next!=NULL)
			current=current->next;
			current->next=temp;
			temp->prev=current;
	}
}
	void insertAt(int val,int pos){
		Node *current=head;
		int i=1;
		while(i<pos-1){
			i++;
			current=current->next;
		}
		Node *temp= new Node;
		temp->data=val;
		
		temp->next=current->next;
		current->next=temp;
		temp->prev=current;
		temp->next->prev=temp;
		}
		void delete1(){
			
			Node * current=head;
			while(current->next->next!=NULL){
				current=current->next;
			}
			Node * tail=current->next;
			current->next=NULL;
			delete tail;
		}
		void deleteat(int pos){
			Node * current=head;
		
			int i=1;
			while(i<pos-1){
				current=current->next;
				i++;
			}
			Node * temp=current->next;
			current->next=current->next->next;
			current->next->prev=current;
			delete temp;
		}
		void countitems(){
			Node* current=head;
			int i=1;
			while(current->next!=NULL){
				current=current->next;
				i++;
			}
			cout<<"The number of items are "<<i<<endl;
		}
	
	void display(){
		Node *current= head;
		Node *last;
		//to print in order
		while (current!=NULL){
			cout<<current->data<<"->";
			//to bring last to end of the list using current
			last=current;
			current=current->next;
		}
		cout<<"NULL";
	        cout<<endl;
	//to print in reverse order
	while(last!=NULL){
		cout<<last->data<<"->";
		last=last->prev;
	}
	cout<<"NULL";
	cout<<endl;
}
};
int main(){
	Dlinkedlist L1;
	L1.insert(9);
	L1.insert(3);
	L1.insert(7);
	L1.insert(4);
	L1.insert(0);
	L1.insert(5);
	L1.insert(9);
	L1.display();
	L1.insertAt(0,4);
	L1.display();
	L1.delete1();
	L1.display();
	L1.deleteat(5);
	L1.display();
	L1.countitems();
	return 0;
}
//prev func for delete
