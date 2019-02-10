//Today we will implement a Syack using two Queue
#include"queue using LL.cpp"

class stbyq{
	public:
	Node* top;
	queue q1;
	queue q2;
	//Construct
	stbyq(){
		top=q1.end;
	}
//only use push
void push(int value){
	//Use enqueue
	q1.enqueue(value);
}

//Let's pop
void pop(){
	//if stack is empty
	if(q1.end==NULL){
		cout<< "You're removing too much! STOP!" << endl;
		return;
	}
	else{
		//Taking all the elements to q2(except last element of q1)
		while(q1.end->next!=NULL){
			q2.enqueue(q1.front->data);
			q1.dequeue();
		}
		//Deleting last element
		q1.dequeue();
		//Taking everything back to q1
		while(q2.end!=NULL){
			q1.enqueue(q2.front->data);
			q2.dequeue();
		}
	}
}

//Empty or not?
bool isEmpty(){
	q1.isEmpty();
}

//Length
void size(){
	q1.size();
}

//What is in the top
void topdisdp(){
	cout << "The top is " << q1.end->data << endl;
}

//Now display
void display(){
	q1.display();
}

};
