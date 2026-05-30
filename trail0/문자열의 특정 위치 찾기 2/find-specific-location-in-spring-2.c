#include <stdio.h>

int main() {
    // Please write your code here.
    char a;
    scanf("%c",&a);
    int result = 0;
    char fruit[5][100] = {
        "apple",
        "banana",
        "grape",
        "blueberry",
        "orange"
    };
    for(int i = 0; i < 5; i++){
        if(a == fruit[i][2] || a == fruit[i][3]){
            result += 1;
            printf("%s\n",fruit[i]);
        }
    }
    printf("%d",result);
    return 0;
}