#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct dnode_t {
    int data;
    struct dnode_t      \
        *next,
        *prev;
} DListNode;

typedef struct deque_t {
    DListNode           \
        *_head, 
        *_tail;
    unsigned _size;
} Deque;

DListNode* __dlist_createNode(int value);
void deq_init(Deque *deque);
bool deq_isEmpty(Deque *deque);
void deq_pushFront(Deque *deque, int value);
void deq_pushBack(Deque *deque, int value);
int  deq_front(Deque *deque);
int  deq_back(Deque *deque);
void deq_popFront(Deque *deque);
void deq_popBack(Deque *deque);

DListNode* __dlist_createNode(int value)
{
    DListNode *newNode = \
        (DListNode*) malloc (sizeof(DListNode));
    
    if (!newNode) return NULL;
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    return (DListNode*) newNode;
}

void deq_init(Deque *deque)
{
    deque->_head = deque->_tail = NULL;
    deque->_size = (unsigned) 0;
}

bool deq_isEmpty(Deque *deque) {
    return (deque->_head == NULL && \
            deque->_tail == NULL);
}

void deq_pushFront(Deque *deque, int value)
{
    DListNode *newNode = __dlist_createNode(value);
    if (newNode) {
        deque->_size++;
        if (deq_isEmpty(deque)) {
            deque->_head = newNode;
            deque->_tail = newNode;
            return;
        }

        newNode->next = deque->_head;
        deque->_head->prev = newNode;
        deque->_head = newNode;
    }
}

void deq_pushBack(Deque *deque, int value)
{
    DListNode *newNode = __dlist_createNode(value);
    if (newNode) {
        deque->_size++;
        if (deq_isEmpty(deque)) {
            deque->_head = newNode;
            deque->_tail = newNode;
            return;
        }

        deque->_tail->next = newNode;
        newNode->prev = deque->_tail;
        deque->_tail = newNode;
    }
}

int deq_front(Deque *deque) {
    if (!deq_isEmpty(deque)) {
        return (deque->_head->data);
    }
    return 0;
}

int deq_back(Deque *deque) {
    if (!deq_isEmpty(deque)) {
        return (deque->_tail->data);
    }
    return 0;
}

void deq_popFront(Deque *deque)
{
    if (!deq_isEmpty(deque)) {
        DListNode *temp = deque->_head;
        if (deque->_head == deque->_tail) {
            deque->_head = NULL;
            deque->_tail = NULL;
            free(temp);
        }
        else {
            deque->_head = deque->_head->next;
            deque->_head->prev = NULL;
            free(temp);
        }
        deque->_size--;
    }
}

int main()
{
    Deque mydeq;
    deq_init(&mydeq);

    int x, y, jam;

    scanf("%d", &x);        //input x
    scanf("%d", &y);        //input y
    scanf("%d", &jam);      //input jam atau n
    
    int ID[x];              //array berisi list id

    for(int i = 0 ; i < x ; i++){
        scanf("%d", &ID[i]);            //user input list id
        deq_pushBack(&mydeq, ID[i]);    //masuk dari belakang satu-satu
    }
    if(jam >= x){               //jika jam lebih besar dri banyaknya x
        printf("Kok sepi");     //sudah pasti kok sepi
    }
    for(int i = 0 ; i < jam ; i++){     //loop yang dilakukan sebanyak jam
        deq_popFront(&mydeq);           //orang tedepan di popfront (selesai dilayani)

        x--;                            //x berkurang 1 setiap 1 jam
        int limit = y % x;

        for(int j = 0 ; j < limit ; j++){               //setiap y modulus x, banyaknya y di pop dari depan,
            deq_pushBack(&mydeq, deq_front(&mydeq));    //dan di pushback dari belakang
            deq_popFront(&mydeq);
        }
    }

    if(deq_isEmpty(&mydeq)){
        printf("Kok sepi");     //jika kosong, print koksepi
    }
    else{
        printf("%d ", deq_front(&mydeq));
    }
    return 0;
}