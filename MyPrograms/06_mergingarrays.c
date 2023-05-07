#include <stdio.h>
int main()
{
    int p[5] = {10,21,13,88,23};
    int q[7] = {9,2,15,45,99,100,34};
    int lenp = sizeof(p)/4,lenq = sizeof(q)/4;

    int m[lenp+lenq];
    for (int i = 0;i<sizeof(m)/4;i++){
        if (i<lenp)
            m[i] = p[i];
        else
            m[i] = q[i-lenp];
    }

    for (int i = 0;i<sizeof(m)/4;i++){
        printf("%d ",m[i]);
    }
    return 0;
}
