/* Stack */
#include<stdio.h>
#include<stdlib.h>
int *stack;
int top=-1;
int g_size;
int *dynamic(int n){
	g_size=n;
	return (int *)malloc(n*sizeof(int));
}
int isEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
}

int isFull(){
	if(top==SIZE-1)
		return 1;
	else
		return 0;
}

void push(int ele){
	if(!isFull())
		stack[++top]=ele;
	else
		printf("Stack is Full\n");
}

int pop(){
	if(!isEmpty())
		return(stack[top--]);
	else
		printf("Stack is Empty\n");
}

void display(){
	int i;
	if(!isEmpty()){
		for(i=0;i<=top;i++)
			printf("%d\t",stack[i]);
	}
	else
		printf("Stack is empty\n");
}
void peek(){
	if(!isEmpty())
		printf("Top element is : %d",stack[top]);
	else
		printf("Stack empty\n");
}
int main(){
	int ele,n,choice;
	printf("Enter the stack size: ");
	scanf("%d",&n);
	stack=dynamic(n);
	
	while(1){
		printf("\nStack Operations\n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT\n\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the element: ");
					scanf("%d",&ele);
					push(ele);
					break;
			case 2: ele=pop();
					printf("Popped element is : %d\n",ele);
					break;
			case 3: display();
					break;
			case 4: peek();
					break;
			case 5: exit(0);
			default: printf("Invalid Choice\n");
		}
	}
	return 0;
}
