#include <iostream>
#include <unordered_map>
	

using namespace std;






struct Node 
{
	int data = 0;
	Node *next = nullptr;
};



void insert( Node * & head, int data)
{
	Node * newNode = new Node;
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}



void printList(Node * head)
{
	while(head)
	{
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "nullptr" << endl;
}







// Setting up algorithmmic solution here for linked lists
void removeDuplicates1(Node * n)
{
	if (n == nullptr || (n && (n->next == nullptr)))
	{
		return;
	}
	unordered_map<int, int> set; //creating a hashtable for the linked list duplicates removal
	Node * prev = nullptr;
	while(n != nullptr)
	{		
		if(prev != nullptr && (set.find(n->data) != set.end()))
		{
			prev->next = n->next;
		} else {
			set[n->data] = 1;
			prev = n;		
		}
		n = n->next;
	}
}










void removeDuplicates(Node * head)
{
	Node * current = head;	


	while(current != nullptr)
	{
		// remove all future nodes that have the same value
		Node * runner = current;


		while(runner->next != nullptr)
		{	

			//if future data == current data replace future node with the next node

			if(runner->next->data == current->data)
			{	

				runner->next = runner->next->next;
			} else {
				runner = runner->next;
			}
		}

		current = current->next;
	}	
}	










int main ()
{

	cout << "original linked list" << endl;
	Node * head = nullptr;
	int numbers[10] = {1,2,2,3,5,8,12,17,16,16};

	for(int i = 0; i < 10; i++)
	{
		insert(head, numbers[i]);
	}
	printList(head);



	cout << "first method for removing duplicates in linked lists" <<endl;
	removeDuplicates1(head);	
	printList(head);






	Node * newHead = nullptr;
	for(int i = 0; i < 10; i++)
	{
		insert(newHead, numbers[i]);
	}

	cout << "Second method for removing duplicates in linked lists" <<endl;
	removeDuplicates(newHead);	
	printList(newHead);


	return 0;
}