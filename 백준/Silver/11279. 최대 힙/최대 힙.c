#include <stdio.h>
#include <stdlib.h>

int arr[100001];
int num = 0;
void push(int x){
    num++;
    arr[num] = x;
    int idx = num;
    while(idx > 1){
        int parent = idx /2;
        if(arr[parent] >= arr[idx]) break;

        int temp = arr[parent];
        arr[parent] = arr[idx];
        arr[idx] = temp;
        idx = parent;
    }
}
void pop(){
    if(num == 0){
        printf("0\n");
        return;
    }
    printf("%d\n",arr[1]);
    arr[1] = arr[num];
    num--;

    int idx = 1;
    while(idx * 2 <= num){
        int left= idx *2;
        int right = idx*2+1;
        int largest = idx;

        if(left <= num && arr[left] > arr[largest]){
            largest = left;
        }
        if(right <= num && arr[right]> arr[largest]){
            largest = right;
        }
        if(largest == idx) break;

        int temp = arr[idx];
        arr[idx] = arr[largest];
        arr[largest] = temp;
        idx = largest;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int order;
    for(int i = 0; i < n; i++){
        scanf("%d",&order);
        if(order == 0){
            pop();
        }else{
            push(order);
        }
    }

    return 0;
}