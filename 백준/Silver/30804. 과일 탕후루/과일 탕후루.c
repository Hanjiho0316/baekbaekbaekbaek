#include <stdio.h>
int arr[200001];
int count[10];
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int left = 0, right = 0;
    int type_count = 0;
    int max_len = 0;
    for(right = 0; right < n; right++){
        int fruit = arr[right];
        if(count[fruit] == 0) type_count++;
        count[fruit]++;
        while(type_count > 2){
            int left_fruit = arr[left];
            count[left_fruit]--;
            if(count[left_fruit] == 0) type_count--;
            left++;
        }
        int current_len = right - left + 1;
        if(current_len > max_len) max_len = current_len;
    }
    printf("%d\n",max_len);
    return 0;
}