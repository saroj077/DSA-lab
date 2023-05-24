#include "LinkedList.h"
Node::Node(){
	info = 0;
	next = NULL;
}
Node::Node(int info,Node* next){
	this->info = info;
	this->next = next;
}

LinkedList::LinkedList(){
	HEAD = NULL;
	TAIL = NULL;
}

//Checks if the LinkedList is empty or not
bool LinkedList::isEmpty(){
	if(HEAD == NULL &&TAIL == NULL){
		return true;
	}else{
		return false;
	}
}


//Adds a Node to the head of LinkedList
void LinkedList::addToHead(int data){
	Node *newNode = new Node;
    newNode->info = data;
	if(this->isEmpty()){
		HEAD = newNode;
		newNode->next = NULL;
		TAIL = newNode;
	}else{

		newNode->next = HEAD;
		HEAD = newNode;
	}
}

//Adds a Node to the tail of LinkedList
void LinkedList::addToTail(int data){
    Node *newNode = new Node;
    newNode->info = data;
	if(this->isEmpty()){
		HEAD = newNode;
        TAIL = newNode;
		newNode->next = NULL;
		TAIL = newNode;
	}else{
        TAIL->next=newNode;
        newNode->next = NULL;
        TAIL = newNode;
	}
}

//Adds a Node after the predecessor of LinkedList
void LinkedList::add(int data, Node *predecessor){
    if (!this->isEmpty())
    {
        Node *newNode = new Node;
        newNode->info = data;

        newNode->next = predecessor->next;
        predecessor->next = newNode;
    }else
    {
        cout<<"EMPTY LIST NO PREDECESSOR";
    }
}

//Removes a Node from the head of LinkedList
int LinkedList::removeFromHead(){
    if (!this->isEmpty())
    {
        Node *nodeToDelete = HEAD;
        int data = nodeToDelete->info;
        HEAD = HEAD->next;

        if (HEAD == NULL)
        {
            TAIL = NULL;
        }

        delete nodeToDelete;
        cout<<"REMOVED FROM HEAD"<<endl;

        return data;
    }  
    else 
    {
        cout<<"EMPTY LIST"<<endl;
    }
}

//Removes a Node from the tail of LinkedList
int LinkedList::removeFromTail(){
    
    if (!this->isEmpty())
    {
        Node *nodeToDelete = TAIL;
        int data = nodeToDelete->info;
        for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		    if(temp->next == TAIL){
                TAIL = temp;
                TAIL->next = NULL;
                delete nodeToDelete;
                cout<<"REMOVED FROM TAIL"<<endl;
                return data;
            }
	    }

    }  
}

//Removes a NOde with a specified data
void LinkedList::remove(int data){
    Node *nodeToDelete;
    for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		if (temp->next->info == data)
        {
            nodeToDelete = new Node;
            nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
	}
}


//Returns pointer to the Node containing specific data
Node* LinkedList::retrieve(int data){
    for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		if (temp->next->info == data)
        {
            return temp->next;
        }
	}
}


//Searches if the data is present inside LinkedList or not
bool LinkedList::search(int data){
    bool isDataFound = false;
    for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		if(temp->info == data){
            isDataFound = true;
        }
	}
    return isDataFound;
}

//Loops through the Linkedist and prints all the content
void LinkedList::traverse(){

	cout<<"ITEMS OF THE LISTT:";
	for(Node* temp = HEAD; temp!= NULL;temp = temp->next){
		cout<<temp->info<<endl;
	}

	cout<<endl;
}




//Destructor
