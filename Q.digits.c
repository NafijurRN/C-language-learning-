#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    while(T--){

        char N[20];
        scanf("%s",N);
        int len = strlen(N);

        for (int i =len-1;i>=0;i--){
            printf("%c",N[i]);
            if(i>0)printf(" ");
        }
        printf("\n");
    }
    return 0 ;
}
