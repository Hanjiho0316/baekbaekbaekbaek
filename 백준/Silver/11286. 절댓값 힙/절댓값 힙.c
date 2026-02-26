#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100001 // 문제 조건에 맞춰 조절

typedef struct {
    int heap[MAX];
    int heapsize;
} Heaptype;

int compare(int a, int b) {
    if (abs(a) < abs(b)) return 1;
    if (abs(a) == abs(b) && a < b) return 1;
    return 0;
}

void insertheap(Heaptype *h, int item) {
    int i = ++(h->heapsize);
    
    // 부모와 비교하며 올라감 (compare 함수 활용)
    while ((i != 1) && compare(item, h->heap[i / 2])) {
        h->heap[i] = h->heap[i / 2];
        i /= 2;
    }
    h->heap[i] = item;
}

int deleteheap(Heaptype *h) {
    if (h->heapsize == 0) return 0;

    int item = h->heap[1]; // 루트 값 보관
    int temp = h->heap[h->heapsize--]; // 마지막 노드 값
    int parent = 1, child = 2;

    while (child <= h->heapsize) {
        if (child < h->heapsize && compare(h->heap[child + 1], h->heap[child])) {
            child++;
        }
        
        if (compare(temp, h->heap[child])) break;

        h->heap[parent] = h->heap[child];
        parent = child;
        child *= 2;
    }
    h->heap[parent] = temp;
    return item;
}

int main() {
    int n;
    Heaptype arr = { .heapsize = 0 }; // 0으로 초기화
    if (scanf("%d", &n) == 0) return 0;

    while (n--) {
        int num;
        scanf("%d", &num);
        if (num == 0) {
            printf("%d\n", deleteheap(&arr));
        } else {
            insertheap(&arr, num);
        }
    }
    return 0;
}