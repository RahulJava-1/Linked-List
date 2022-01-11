#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* InsetionAtBegining(struct Node* head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
void print(struct Node* head){
    struct Node* ptr = head;
    do
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    } while (ptr!=head);
    
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
    five->next = head;

head = InsetionAtBegining(head,10);
printf("Insertion at begining\n");

print(head);
    return 0;
}
