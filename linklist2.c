#include<stdio.h>
#include <malloc.h>

int main()
{
	struct node
{
	int data;
	struct node *next;
	
};

	typedef struct node NODE;
	
	
	NODE *temp,*first=NULL;
	temp=NULL;
	int choice=0;
	printf("Enter 1 for store data and 0 for exit\n");
	scanf("%d",&choice);
	
while(choice){//i=1;
	NODE *head=(NODE*)malloc(sizeof(NODE));//memory allocate to pointer head say m[i]  i=1;
	printf("Enter the data");
	scanf("%d",&head->data);
	//enter data will store in the memory which will create by the head pointer
	//
	
		head->next=temp;//in head pointer there will be two block first is data and second is next that is pointer
		temp=head;//temp will store dynamic memory memory that is m[i]
		
		first=head;
//first will store dynamic memory memory that is m[i]	
	printf("Enter 1 for continue store data and 0 for exit\n");
	scanf("%d",&choice);
	
//i++;	
}
//now first has address of last memory allocate to head;
printf("Head=>");
while(first!=NULL)
{
	printf("%d=>",first->data);//print the last value which we store
	first=first->next;//now first will store the address of next element address
}
printf("NULL");
}
