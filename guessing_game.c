#include<stdio.h>
int main(int argc, char const *argv[])
{
    int secret_number;
    int guess_number;
    secret_number=5;
    int i,guess_limit=3;
    for(i=1;i<=guess_limit;i++)
    {
        printf("guesss number %d",i);
        scanf("%d",&guess_number);
        if(guess_number==secret_number){
            printf("you win");
            break;
        }
        if(guess_number!=secret_number){
            printf("you loss");
        }
        }
        return 0;
}
