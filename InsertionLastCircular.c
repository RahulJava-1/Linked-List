#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* InsertionAtLast(struct Node* head,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    while (p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = head;
    return head;
}

void print(struct Node* head){
    struct Node* p = head;
    do
    {
        printf(" %d ",p->data);
        p = p->next;
    } while (p!=head);    
}

int main(int argc, char const *argv[])
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 12;
    head->next = second;
    second->data = 14;
    second->next = third;
    third->data = 2;
    third->next = fourth;
    fourth->data = 5;
    fourth->next = head;

    head = InsertionAtLast(head,20);
    print(head);
    return 0;
}

