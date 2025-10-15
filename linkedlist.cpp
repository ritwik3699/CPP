#include<iostream>
using namespace std;
//Node class template
template<typename T>
class node{
	public:
		int data;
		node<T>* next;
};
//SinglyLinked List class template
template<typename T>
class singlylinkedlist{
	private:
		node<T>* head;
	public:
		singlylinkedlist(){
			head=NULL;
		}
		void insert(T value)
		{
			node<T>* newNode=new node<T>;
			newNode->data=value;
			newNode->next=NULL;
		}
		if(head==NULL){
			head=newNode;
		}
		else{
			node<T>* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
		}			
};
void remove(){
	if(head==NULL){
		cout<<"List is Empty!\n"; 
	}
	if(head->next=NULL){
		delete head;
		head=NULL;
		return;
	}
}