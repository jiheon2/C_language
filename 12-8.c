#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main() {
    int* p;
    int i, hap=0;
    int cnt;

    printf("�Է��� ������ ? ");
    scanf("%d", &cnt);

    p =(int*) malloc(sizeof(int)*cnt);

    for(i=0; i<cnt; i++) {
        printf("%d��° ���� : ", i+1);
        scanf("%d", p+i);
        if(*(p+i) % 2 == 0)
            hap = hap + *(p+i);
        else
            continue;
    }

    printf("�Է��� ¦���� ==> %d", hap);
}