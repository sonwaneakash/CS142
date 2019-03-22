#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node*left;
		node*right;
		node(int val){
			data =val;
			left =NULL;
			right =NULL;
		 }
};

class bst{
	public:
		node*root;
		bst(){
			root = NULL;
		}

		void inserthelper(int val){
			insert(root,val);
  		}
		void insert(node*current,int val){
 			if(root == NULL){	
			 	root = new node(val);
   			}
  			else if(val < current->data){
      				if(current->left == NULL){
       				 	current->left = new node(val);
    				}
         			else{
              				insert(current->left,val);
                 		}
			}
			else{
				if(current->right == NULL){
       				 	current->right = new node(val);
    				}
         			else{
              				insert(current->right,val);
				}
			}
		}
		node * searchhelper(int val){
			search(root, val);
		}
		node * search(node*current, int val){
 			if(current ==NULL || current-> data == val){
				return current;
			}
			else if(val < current->data){
 				search(current->left,val);
  			}
			else{
   				search(current->right,val);
     			}
		}
		void displayhelper(){
      			display(root);
   		}

		void display(node*current){
			if(current == NULL) return;
			else{
				display(current->left);

				cout<< current->data<<",";

				display(current->right);

			}
		}
 };

int main(){
	bst b;
 	b.inserthelper(3);
 	b.inserthelper(1);
 	b.inserthelper(7);
	b.inserthelper(2);
	b.inserthelper(4);
	b.inserthelper(6);
	b.inserthelper(8);
	b.inserthelper(9);
	b.inserthelper(5);
	b.displayhelper();
	if(b.searchhelper(4) != NULL){
		cout<<endl<< b.searchhelper(4)->data <<endl;
	}
return 0;			
}
