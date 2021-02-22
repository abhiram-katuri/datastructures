#include<stdio.h>		#include<stdlib.h>	
	
void push();		void pop();			void display();		
int isFull();		int isEmpty();
int choice,top=-1,stack[4],item ,SIZE;
main()
{
	
	while(1)
			{
	printf(" *** MENU ***\n 1. PUSH\n 2. POP\n 3.TRAVERSE\\DISPLAY\n 4.isFull\n 5.isEmpty\n 6.EXIT\n");
		printf("enter your choice from menu:");
		scanf("%d",&choice);
		switch(choice)		{
			case 1	:	push();					break;
			case 2	:	pop();					break;
			case 3	:	display();					break;
			case 4	:	isFull();					break;
			case 5	:	isEmpty();					break;
			
			default	:	printf("wrong choice\n");
		}//switch
	}//while
}//main
void push()  {
	if(top==SIZE-1)
		printf("*** stack overflow(full) ***\n");
	else
	{
		printf("enter the item to be pushed into the stack:");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}//push

void pop()   {
	if(top==-1)
		printf("*** stack is empty ***\n");
	else
	{
		item=stack[top];
		top--;
		printf("the deleted item from stack is %d\n",item);
	}
}//pop

void display()
{
	int i;
	if(top==-1)
		printf("**** stack underflow****");
	else
	{
		printf("*** stack display ***\n");
		for(i=top;i>=0;i--)
			if(i==top)
				printf("%d at %d ->top\n",stack[i],i);
			else
				printf("%d at %d\n",stack[i],i);
	}
}

int isEmpty(){
	if(top==-1)
		printf("Stack is empty\n");
	else
		printf("Stack is not empty\n");
		return 0;
}

int isFull()
{
	if(top==SIZE-1)
		printf("Stack is full\n");
	else
		printf("Stack is not full\n");
		return 0;
}
