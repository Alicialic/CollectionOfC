#include <stdio.h>
#include <iostream>

using namespace std;

class Node
{
private:
	int data;
	Node* next;

public:
	Node(int data)
	{
		this->next = NULL;
		this->data = data;
	}

	int GetData()
	{
		return this->data;
	}

	void SetData(int data)
	{
		this->data = data;
	}

	Node* GetNext()
	{
		return this->next;
	}

	void SetNext(Node* node)
	{
		this->next = node;
	}
};

class SingleLinkList
{
private:
	Node* head;
	Node* current;

public:
	SingleLinkList()
	{
		this->head = this->current = NULL;
	}

	/**
	 * Adds new items to the end.
	 */
	void Push(Node* node)
	{
		if (this->head == NULL)
		{
			this->head = this->current = node;
		}
		else
		{
			this->current = this->head;

			while (this->current->GetNext() != NULL)
				this->current = this->current->GetNext();

			this->current->SetNext(node);
		}
	}

	/**
	 * Print all nodes value.
	 */
	void PrintAll()
	{
		this->current = this->head;
		while (this->current != NULL)
		{
			cout << "Data : " << this->current->GetData() << endl;
			this->current = this->current->GetNext();
		}
	}
};

int main()
{
	SingleLinkList *sll = new SingleLinkList();

	// First Node
	Node *firstNode = new Node(1);
	sll->Push(firstNode);

	Node *secondNode = new Node(2);
	sll->Push(secondNode);

	Node *thirdNode = new Node(3);
	sll->Push(thirdNode);

	sll->PrintAll();
}
