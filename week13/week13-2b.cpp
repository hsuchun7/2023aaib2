///week13-2b.cpp
///Q1: ���h��? Q2: ���P�_?
#include <string.h>
#include <stdio.h>
int main()
{
    char line[20]; ///���@�I����O�I
    scanf("%s", line);
    int N = strlen(line); ///���D�r�ꪺ����
    int bad = 0; ///�@�}�l�S���a��
    for(int i=0; i<N; i++){ ///�v�r���ˬd
            if(line[i] != line[N-1-i]) bad=1;
    }
    /// �Y�e��������r�����P�A�N����
    /// 0123456789 �@10�ӼƦr
    /// ^        ^
    ///  1      8
    ///   2    7
    ///    3  6
    ///     45
    ///     45
    ///    3  6
    ///   2    7
    ///  1      8
    /// 0        9
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}