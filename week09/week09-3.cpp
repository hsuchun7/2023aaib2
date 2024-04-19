///week09-3.cpp
#include <stdio.h>
int globalA = 300;

void myFuncA(){
    int localA = 500;
    globalA = 0;
    printf("myFunc(): gloablA:%d\n localA%d\n", globalA, localA);
}

int main()
{
    int localA = 200;
    printf("main(): gloablA:%d\n localA%d\n", globalA, localA);
    myFuncA();
    printf("main(): gloablA:%d\n localA%d\n", globalA, localA);
}
