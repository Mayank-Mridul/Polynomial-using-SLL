#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*start = NULL;

int main(){
//n1 = (struct node*)malloc(sizeof(struct node));

int n,x;

printf("GOOD MORNING\n\n");

printf("ENTE THE NUMBER OF THE NODES OF THE LINKED LIST\n");
scanf("%d", &n);

for(int i=0;i<n;i++){
printf("ENTER THE DATA OF THE LINKED LIST\n");
scanf("%d", &x);
create(x);
}

print();

}

void create(int x){
    struct node *ptr,*temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    if(start == NULL ){
        start = ptr;
    }
    else{
        temp = start;
        while ( temp->next!=NULL ){
            temp = temp->next;
        }

        temp->next = ptr;
        
    }
}

void print(){
     struct node *temp;
     temp = start;
    printf("THE LINKED LIST IS AS FOLLOWS:\n");
    if(start == NULL){
        printf("LIST IS EMPTY\n\n");
    }
    else{
        while(temp!=NULL){
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}