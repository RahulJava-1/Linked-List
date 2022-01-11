#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* InsertionMiddle(struct Node* head,int data,int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 1;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;
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
    struct Node* third= (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 12;
    fourth->next = head;
    head=InsertionMiddle(head,12,3);
    print(head);
    return 0;
}
