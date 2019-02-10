#include"LL.cpp"

class queue{
	public:
	Node* front;
	Node* end;
	LinkedList l1;
	
	//Constructor
	queue(){
		end=l1.head;
		front=l1.tail;
	}

	//Start from the end
	void enqueue(int value){
		//Use insertAt from LL
		l1.insertAt(1,value);
		//Update front and end
		end=l1.head;
		front=l1.tail;

	}

	void dequeue(){
		l1.del();
		end=l1.head;
		front=l1.tail;
	}

	bool isEmpty(){
		if(end == NULL){return true;}
		return false;
	}

	//Size of queue
	void size(){
		l1.countItems();
	}

	//Lets have a look
	void display(){
		l1.display();
	}

	//What is in the end
	void enddisp(){
		cout << "The head is " <<l1.head->data << endl;
	}

};
