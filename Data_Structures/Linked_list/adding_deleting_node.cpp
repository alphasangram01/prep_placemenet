#include<iostream>

using namespace std;

struct Linkedlist{
	int val;
	Linkedlist* next=NULL;
};

void addnode(int value, Linkedlist** h){
	Linkedlist* node = new Linkedlist;
	node->val= value;
	if(*h==NULL){
		*h=node;
		return;
	}
	Linkedlist* dummy_head=*h;
	while(dummy_head->next!=NULL){
		dummy_head=dummy_head->next;
	}
	dummy_head->next=node;

}

void printnode(Linkedlist** head){
	Linkedlist* d=*head;
	while(d!=NULL){
		cout<<d->val<<endl;
		d=d->next;
	}
	return;
}

int main() {

	Linkedlist *head = NULL;
	addnode(4,&head);
	addnode(5,&head);
	addnode(6,&head);
	addnode(7,&head);
	printnode(&head);
	return 0;
}