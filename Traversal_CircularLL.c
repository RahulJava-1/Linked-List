#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node* head){
    struct Node* ptr = head;
    do{
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

int main(int argc, char const *argv[])
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = head;
    printf("Traversing of Circular Linked List:\n");
    print(head);
    return 0;
}
