#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char sentence[105]; // 여유 있게 크기 설정
        char stack[105];
        int top = -1;

        if (fgets(sentence, sizeof(sentence), stdin) == NULL) break;

        // 줄바꿈 문자 제거 (\r\n 또는 \n 대응)
        sentence[strcspn(sentence, "\r\n")] = '\0';

        // 종료 조건: 점 하나만 들어온 경우
        if (strcmp(sentence, ".") == 0)
            break;

        int len = strlen(sentence);
        int valid = 1;

        for (int i = 0; i < len; i++) {
            // 여는 괄호는 스택에 push
            if (sentence[i] == '(' || sentence[i] == '[') {
                stack[++top] = sentence[i];
            }
            // 닫는 소괄호
            else if (sentence[i] == ')') {
                if (top == -1 || stack[top] != '(') {
                    valid = 0;
                    break;
                }
                top--;
            }
            // 닫는 대괄호
            else if (sentence[i] == ']') {
                if (top == -1 || stack[top] != '[') {
                    valid = 0;
                    break;
                }
                top--;
            }
        }

        // 유효하고 스택이 완전히 비어있어야 "yes"
        if (valid && top == -1)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}