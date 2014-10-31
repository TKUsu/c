#include <stdio.h>
#include <stdlib.h>

typedef struct items{
	int ID;					//3位數的正整數
	long size;				//9位數的正整數
	struct items *link;	//5位數的正整數
}Node,Stack,temp;

int Push(int *,int *);
int Pop(int *);

void Initial(int *stack_address,int *node_address,int j){
	int i;
	for(i=0;i<j;i++){
		node_address->node=(Node *)malloc(sizeof(Node));
		node_address->node->ID = rand()%999;
		node_address->node->size = rand()%999999999;
		printf("The %p ID is %d size is %ld.\n",&node_address->node->ID
                          ,node_address->node->ID,node_address->node->size);
		Push(&stack_address,&node_address);
	}
}

int Push(int *stack_address,int *node_address){
	node_address->node->link = stack_address->top;
	stack_address->top = node_address->node;
	stack_address->top->link = node_address->node;
	//printf("!!!!test!!!!toplink = %p ",top->link);
	//printf("The Pop %d ID is %d size is %ld.\n",&top->ID,top->ID,top->size);
	return 0;
}

int Pop(int *stack_address){
	if(stack_address->top==NULL){
		printf("The stack isempty!!!\n");
		return 0;
	}
	temp *temp = stack_address->top;
	stack_address->top = stack_address->top -> link;
	printf("The Pop %d ID is %d size is %ld.\n",&top->ID,top->ID,top->size);
	free(temp);
	return 0;
}

int main(){
	int i,j=10,n=0;
    Stack *top=NULL;Node *node;
    int *stack_address,*node_address;
   	stack_address = &top;
   	node_address = &node;
    	
	srand(time(0));
	Initial(&stack_address,&node_address,j);
	for(i=1;i<=20;i++){
		n = rand()%2;
		switch(n){
			case 0:
				printf("The %d is Push\n",i);
				j=1;
				Initial(&stack_address,&node_address,j);
				break;
			case 1:
				printf("The %d is Pop\n",i);
				Pop(&stack_address);
				break;
		}
	}
}
