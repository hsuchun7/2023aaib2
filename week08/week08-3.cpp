///week08-3.cpp
#include <stdio.h>
int main()
{
    printf("請輸入你的名字: ");
    char s1[30];
    scanf("%s", s1);
    char s2[30]="你好";
    printf("%s %s\n", s1, s2);

    s1[0]='A';
    printf("你的名字被改成 %s\n", s1);
}
