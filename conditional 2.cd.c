#include<stdio.h>
int main()
{
    int tk ;
    printf("how much tk I have = ");
    scanf("%d",&tk);

    if( tk >= 100)
    {
        printf("I will eat a Burger.");

    }
    else if(tk >= 50)
    {
        printf(" I will eat Potato.");

    }
    else if ( tk >=20)
    {
        printf("I will eat Lemon Juice");
    }
    else
    {
     printf(" I don't eat anything.");
    }

    return 0 ;

}
