#include<stdio.h>
int main(){
    int u1=1234,p1=4567;
    int u2,p2;
    printf("enter userid\n");
    scanf("%d",&u2);
    printf("enter password\n");
    scanf("%d",&p2);
    if(u1==u2&&p1==p2){
        printf("true login");
    }
    else{
        printf("wrong user id or password!!");
    }
}