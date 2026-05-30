#include <stdio.h>

int main() {
    // Please write your code here.
    int grade;
    scanf("%d",&grade);
    for(int i = 0; grade + i <= 100; i++){
        int grade2 = grade + i;
        if(grade2 >= 90){
            printf("A ");
        }else if(grade2 >= 80){
            printf("B ");
        }else if(grade2 >= 70){
            printf("C ");
        }else if(grade2 >= 60){
            printf("D ");
        }else{ 
            printf("F ");
        }
    }
    return 0;
}