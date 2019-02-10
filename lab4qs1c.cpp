#include "LL.cpp"

class stack{
	public:
	Node* top;
	LinkedList l1;
	
	//Construct
	stack(){
		top=l1.head;
	}

	//Functions
	// give from the top
	void push(int value){
		//insertAt(int pos, int value)
		l1.insertAt(1,value);
		// Top = new_head
		top = l1.head;
	}

	//remove from the top
	void pop(){
		//void deleteAt(int pos)
		l1.deleteAt(1);
		//top = new_head
		top = l1.head;
	}
	bool isEmpty(){
		if(top == NULL){return true;}
		return false;
	}

	//Size
	void size(){
		//Use countItems
		l1.countItems();
	}

	//What is in the begining
	void topDisplay(){
		cout << "The top is " << l1.head->data << endl;
	}

	//Lets have a look
	void display(){
		l1.display();
	}
};
