/*
 * 给定n个字符串，请对n个字符串按照字典序排列。
 * 
 * 输入：
 * 5
 * cap 
 * to
 * cat
 * card
 * two
 * 
 * 输出：
 * cap
 * card
 * cat
 * to
 * two
 */

#include <stdio.h>

int cmp (void * a, void * b) {
    char * str_a = (char *)a;
    char * str_b = (char *)b;
    return strcmp(a,b);
}

 
int main()
{
    int n, i, j;
    scanf("%d",&n);
    char str[n][100];
    char a[100];
    
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    
 #if 0   
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(str[j], str[j+1]) > 0)
            {
                strcpy(a, str[j+1]);
                strcpy(str[j+1], str[j]);
                strcpy(str[j], a);
            }
        }
    }
#else

	qsort(str, n, 100, cmp);
#endif

    //printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
}
