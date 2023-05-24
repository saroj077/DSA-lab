#include "LinkedList.h"

int main(){
	LinkedList *list = new LinkedList;
	list->addToHead(5);
	list->addToHead(6);
	list->addToTail(7);
	list->addToTail(8);
    // list->add(9,list->HEAD);

	// if(list->isEmpty()){
	// 	cout<<"EEMPTY";
	// }else{
	// 	cout<<"NOT EMPTY"<<endl;
	// }

    //cout<<list->search(9)<<endl;


	//cout<<list->removeFromHead();

	list->traverse();
	// list->remove(7);
	// list->removeFromHead();
	// list->removeFromTail();
	list->traverse();
	return 0;
}

//g++ -I ../include/
//g++ ../src/LinkedList.cpp
//g++ -I ../include ../main.cpp ../src/LinkedList.cpp