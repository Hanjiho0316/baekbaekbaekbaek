#include <stdio.h>

int main() {
    // Please write your code here.
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);
    int yearcheck = 0;
    if(y % 4 == 0){
        if(y % 100 == 0 && y % 400 == 0){
            yearcheck = 1;
        }else if(y % 100 != 0){
            yearcheck = 1;
        }

    }
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if(d <= 31){
            if(m == 12 || m == 1){
                printf("Winter");
            }else if(m ==3 || m == 5){
                printf("Spring");
            }else if(m == 7 || m == 8){
                printf("Summer");
            }else{
                printf("Fall");
            }
        }else{
            printf("-1");
        }
    }else if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d <= 30){
            if(m == 4){
                printf("Spring");
            }else if(m == 6){
                printf("Summer");
            }else{
                printf("Fall");
            }
        }else{
            printf("-1");
        }
    }else if(m == 2){
        if(d <= 28){
            printf("Winter");
        }else if(yearcheck == 1 && d <= 29){
            printf("Winter");
        }else{
            printf("-1");
        }
    }else{
        printf("-1");
    }
    return 0;
}