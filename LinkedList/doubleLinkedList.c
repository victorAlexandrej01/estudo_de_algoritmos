#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
}Node;


Node* createNode(int value){
    Node *newNode =  (Node*) malloc (sizeof(Node));
    newNode->data = value;
    newNode -> prev = NULL;
    newNode -> next = NULL;
    
    return newNode;
}

void insertFront(Node **head, int value){

    Node *newNode = createNode(value);

    newNode-> next = *head;
    newNode->prev = NULL;

    if(*head != NULL){
        (*head) -> prev = newNode;
    }
    *head = newNode;
}

void deleteNode(Node **head, Node *del){
    if(*head  == NULL || del == NULL) return ;

    if(*head == del) *head = del->next;

    if(del -> prev != NULL) del->prev->next = del->next;

    if(del-> next != NULL) del->next->prev = del->prev;

    free(del);
}

void printList(Node *head){
    Node *cur = head;
    printf("NULL");
    while(cur != NULL && cur->next != NULL){
        printf("<- %d -> ",cur->data);
        cur = cur->next;
    }
    printf("NULL", cur);
    printf("\n");
}

int main(){
Node *head = NULL;


for(int i = 0; i < 5;i++){
    int c;
    scanf("%d", &c);
    insertFront(&head, c);
}
printList(head);

return 0;
}