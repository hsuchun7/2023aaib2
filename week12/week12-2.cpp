#include <stdio.h>
int main()
{
    int n = 2;
    int a[2][2] = { {10,20}, {11,22} };
    int b[2][2] = { {2,1}, {3,2} };
    int c[2][2];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%3d ", a[i][j] );
        }
        printf("\n");
    }
}
