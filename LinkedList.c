#include <stdio.h>
#include <stdlib.h>

// 연결 리스트의 노드 구조체 정의
struct Node
{
    int data;          // 데이터
    struct Node *next; // 다음 노드를 가리키는 포인터
};

// 연결 리스트에 새로운 노드를 삽입하는 함수
void insertNode(struct Node **head, int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// 연결 리스트의 모든 노드를 출력하는 함수
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    // 연결 리스트의 헤드 포인터 초기화
    struct Node *head = NULL;

    // 연결 리스트에 노드 삽입
    insertNode(&head, 4);
    insertNode(&head, 3);
    insertNode(&head, 2);
    insertNode(&head, 1);

    // 연결 리스트 출력
    printf("Linked List: ");
    printList(head);

    return 0;
}
