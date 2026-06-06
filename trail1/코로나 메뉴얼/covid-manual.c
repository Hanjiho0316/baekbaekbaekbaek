#include <stdio.h>

int main() {
    // Please write your code here.
    char a,b,c;
    int d,e,f;
    scanf("%c %d %c %d %c %d",&a,&d,&b,&e,&c,&f);
    int grade = 0;
    if((a == 'Y' && d >= 37)){
        grade += 1;
    }
    if((b == 'Y' && e >= 37)){
        grade += 1;
    }
    if((c == 'Y' && f >= 37)){
        grade += 1;
    }
    if(grade >= 2){
        printf("E");
    }else{
        printf("N");
    }
    return 0;
}