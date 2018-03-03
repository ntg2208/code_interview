#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct node node;
struct node{
	int data;
	node *next;
};
int insert(node **list, int num)
{
	node *tmp = (node*) malloc(sizeof(node));
	if (tmp == NULL) 
		return 0;
	tmp->data = num;
	tmp->next = *list;
	*list = tmp;
	return 1;
}
void print(node *list){
	while (list!=NULL){
		cout<<list->data<<" ";
		list = list->next;
	}
}
int main(){
	node *a;
	a = NULL;
	insert(&a,2);
	insert(&a,4);
	insert(&a,7);
	insert(&a,8);
	insert(&a,1);
	insert(&a,3);
	print(a);
}
