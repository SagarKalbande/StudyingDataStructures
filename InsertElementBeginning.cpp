#include<stdio.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* Head;

void Insert(int x)//for inserting at the beginning of the list
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = Head;
	Head = temp;
}

void Print(int x)
{
	Node* temp = Head;
	while (temp!=NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	int n;
	Head = NULL; //empty list
	printf("How many numbers to add?\n");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int x;
		printf("Enter number\n");
		scanf_s("%d", &x);
		Insert(x);
		Print(x);
	}
}
