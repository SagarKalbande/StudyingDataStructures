#include<stdio.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* Head;

void Insert();
void Print();

void Insert(int x)
{
	Node *temp = new Node;
	temp->data = x;
	temp->next = Head;
	Head = temp;

}

void AddAtPos(int a, int b)
{
	Node * temp = new Node;
	temp->data = a;
	int i = 1;
	Node * temp2 = Head;
	if (i != b - 1)
	{
		temp2 = temp2->next;
		i++;
	}
	temp->next = temp2->next;//try visualizing here what's happening (trick)
	temp2->next = temp;
}

void Print(int x)
{
	Node *temp = Head;
	while (temp!= NULL)
	{
		printf(" %d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	Head = NULL;
	printf("Initialize list with how many integers?\n");
	int n;
	scanf_s("%d",&n);
	for (int i = 0; i < n; i++)
	{
		int x;
		printf("Give the next element\n");
		scanf_s("%d",&x);
		Insert(x);
		Print(x);
	}	

	printf("Give the integer and position to be placed\n");
	int i1,j1;
	scanf_s("%d %d", &i1, &j1);
	AddAtPos(i1,j1);
	Print(n+1);

	return 0;
}
