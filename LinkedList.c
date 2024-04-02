#include <stdio.h>
#include <stdlib.h>

// 연결 리스트의 노드 구조체 정의
struct Node {
    int data;           // 데이터
    struct Node* next;  // 다음 노드를 가리키는 포인터
};

// 연결 리스트에 새로운 노드를 삽입하는 함수
void insertNode(struct Node** head, int newData) {
    // 새로운 노드 생성
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    // 리스트가 비어있을 경우
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // 리스트가 비어있지 않을 경우, 끝까지 이동하여 새로운 노드 추가
    struct Node* lastNode = *head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}

// 연결 리스트의 모든 노드를 출력하는 함수
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    // 연결 리스트의 헤드 포인터 초기화
    struct Node* head = NULL;

    // 연결 리스트에 노드 삽입
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);

    // 연결 리스트 출력
    printf("Linked List: ");
    printList(head);

    return 0;
}
