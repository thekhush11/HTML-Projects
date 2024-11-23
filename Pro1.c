#include<stdio.h>
struct node
{
	int info;
	struct node *next;
};
struct node *head = NULL;
	struct node* create(struct node *head){
	}
	struct node* addatbeg(struct node *head, int data){
	}
	struct node* addatend(struct node *head, int data){
	}
	void display(struct node *head){
	}
void main()
{
	int choice, data, element;
	while(1)
	{
		printf("Enter your choice: ");
		printf("\n Enter 1 to creat link list");
		printf("\n Enter 2 to insert element at begining");
		printf("\n Enter 3 to insert element at end");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				head = create(head);
				break;
			case 2:
				printf("\n Enter value to be inserted ");
				scanf("%d", &data);
				head = addatbeg(head, data);
				break;
			case 3:
				printf("\n Enter value to be inserted ");
				scanf("%d", &data);
				head = addatend(head, data);
				break;
			case 4:
				display(head);
				break;
			case 5:
				printf("\n Enter value of element after which insertion is required");
				scanf("%d", &element);
				printf("\n Enter value to be inserted ");
				scanf("%d", &data);
				head = addatbeg(head, data);
				break;
		}
		if(choice == 0)
		break;
	}
}
