#include<stdio.h>
struct node{
    int coeff;
    int exp;
    struct node *next;
}*start = NULL;

int main(){
//n1 = (struct node*)malloc(sizeof(struct node));

int n,x,y;

printf("GOOD MORNING\n\n");

printf("ENTE THE NUMBER OF THE MEMBERS OF THE POLYNOMIAL\n");
scanf("%d", &n);

for(int i=0;i<n;i++){
printf("ENTER THE DATA OF THE POLYNOMIAL\n ** 1ST THE COEFFICIENT AND THEN THE POWER **\n");
scanf("%d %d", &x, &y);
create(x,y);
}

print();

}

void create(int x,int y){
    struct node *ptr,*temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->coeff = x;
    ptr->exp = y;
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
     int k=0;
    printf("THE LINKED LIST IS AS FOLLOWS:\n");
    if(start == NULL){
        printf("LIST IS EMPTY\n\n");
    }
    else{
        while(temp!=NULL){
            if(k!=0)
            printf(" + ");
            printf("%d*X^%d", temp->coeff, temp->exp);
            temp = temp->next;
            k = 1;
        }
        printf("\n");
    }
}