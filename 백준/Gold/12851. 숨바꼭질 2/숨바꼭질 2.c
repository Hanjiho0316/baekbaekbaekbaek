#include <stdio.h>

#define MAX 100001
#define Q_MAX 1000000 // 큐 크기는 넉넉하게

int start, end;
int front = 0, rear = 0;

int visited[MAX];   // 방법의 수 (count)를 저장
int mintime[MAX];   // 해당 위치까지의 최단 시간을 저장

typedef struct {
    int time;
    int distance;
} position;

position a[Q_MAX];

void push(int t, int d) {
    if (d < 0 || d >= MAX) return;

    if (visited[d] == 0 || t == mintime[d]) {
        if (visited[d] == 0) {
            mintime[d] = t;
        }
        
        visited[d]++;

        a[front].time = t;
        a[front].distance = d;
        front++;
    }
}

position pop() {
    return a[rear++];
}

int isempty() {
    return front == rear;
}

void bfs() {
    while (!isempty()) {
        position b = pop();

        if (visited[end] > 0 && b.time >= mintime[end]) continue;

        // 세 가지 방향 탐색
        push(b.time + 1, b.distance + 1);
        push(b.time + 1, b.distance - 1);
        push(b.time + 1, b.distance * 2);
    }
}

int main() {
    if (scanf("%d %d", &start, &end) != 2) return 0;

    if (start == end) {
        printf("0\n1\n");
        return 0;
    }

    push(0, start);
    bfs();

    printf("%d\n%d\n", mintime[end], visited[end]);

    return 0;
}