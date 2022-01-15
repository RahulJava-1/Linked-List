#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
int maxElement(struct Node* head){
    int max;
    struct Node* p = head;
    while(p!=NULL){
        if(max < p->data){
            max = p->data;
        }
        p = p->next;
    }
    printf("Maximum value of the Node is: %d ",max);
}
int minElement(struct Node* head){
    int min ;
    struct Node* p = head;
    while (p!=NULL)
    {
        if (min>p->data)
        {
            min = p->data;
        }
        p = p->next;
    }
    printf("Minimum value of the node is: %d ",min);
}
void print(struct Node* n){
    while (n!=NULL)
    {
        printf(" %d ",n->data);
        n= n->next;
    }
    
}
int main(int argc, char const *argv[])
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* five = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5;
    head->next= second;

    second->data = 6;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = five;

    five->data = 9;
    five->next = NULL;  
    printf("The Node is : ");
    print(head); 
    printf("\n");
    maxElement(head);
    printf("\n");
    minElement(head);
    return 0;
}
