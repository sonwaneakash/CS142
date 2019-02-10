#include<iostream>
using namespace std;
class Queuearr{
	public:
	int n;
	int a[100];
	int b[100];
Queuearr(int x){
	n =x;
	a[n];
	b[n];
	//Starting them both from zero as default
	for(int i=0;i<n;i++){
		a[i] = 0;
	}
	for(int i=0;i<n;i++){
		b[i] = 0;
	}
}

//Entering elements for the array
void enqueue(int value)
	{
	//if there is no queue
	if(n==0){cout << "Queue is empty" << endl; return;}

	//Assigne the values of 1st array to 2nd array
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}

	//Fill the 0th index of the array and entering the rey of the elements of original array
	a[0] = value;
	for(int i=0;i<n-1;i++){
		a[i+1] = b[i];
	}
}

//Delete the elements of the queue from the front(obvious)
void dequeue(){
	//if the length of the queue is null
	if(n==0){cout << "Queue is empty" << endl; return;}

	//Make the last element zero
	if(a[n-1]!=0)
	{
	a[n-1] = 0;	
	}
	
	else{
		int i=n-1;
		while(a[i]=0){
			i=i-1;
		}
		a[i-1]=0;
	}
}

//counting the elements of the array
void size(){
	cout << "size of the array is " << n  << endl;
}
//if the array is empty
void isEmpty(){
	if(n==0){cout << "empty queue"<<endl;}
	else 
	{
	cout << "an array entry is garbage by default. Hence no false entry"<<endl;
	}
}
//the top most element 
void top()
{
	cout << "The top is " << a[0] << endl;
}
//displaying the element 
void disp(){
	for(int i=0;i<n;i++){
	cout << a[i] << "->";
	}
	cout << "\b\b  " << endl;
}

};

int main(){
	int n;
	cout << "enter the length of the queue" << endl;
	cin >> n;	
	Queuearr q1(n);

	for(int i=1;i<=n;i++){
	q1.enqueue(i);
	}
	q1.disp();
	q1.dequeue();
	q1.dequeue();
	q1.disp();
	q1.isEmpty();
	q1.top();
	q1.size();
	q1.enqueue(8);
	q1.disp();
	q1.dequeue();
	q1.disp();
	
return 0;
}
