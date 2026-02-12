#include <stdio.h>
#include <math.h> 

int arr[8001];

int main() {
    int n;
    long long total = 0; 
    if (scanf("%d", &n) != 1) return 0;

    int min_val = 4001, max_val = -4001;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        total += num;
        arr[num + 4000]++; 
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    int avg = (int)round((double)total / n);
    printf("%d\n", avg);

    // 2. 중앙값
    int count = 0;
    int median = 0;
    for (int i = 0; i < 8001; i++) {
        count += arr[i];
        if (count >= (n + 1) / 2) {
            median = i - 4000;
            break;
        }
    }
    printf("%d\n", median);

    int max_freq = 0;
    for (int i = 0; i < 8001; i++) {
        if (arr[i] > max_freq) max_freq = arr[i];
    }

    int mode = 0;
    int is_second = 0; 
    for (int i = 0; i < 8001; i++) {
        if (arr[i] == max_freq) {
            mode = i - 4000;
            if (is_second == 1) break;
            is_second++;
        }
    }
    printf("%d\n", mode);

    printf("%d\n", max_val - min_val);

    return 0;
}