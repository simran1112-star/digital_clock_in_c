#include<stdio.h>
int ch,nor=0,nob,noc,amount=0,count=0;
int menu();
int bus();
int rikhsa();
int cycle();
int show();
int delete();

int main(){
    while(1){
    switch(menu() ){
        case 1:bus();
              break;
        case 2:rikhsa();
               break;
        case 3:cycle();
               break;;
        case 4:show();
            break;
        case 5:delete();
               break;
        case 6:
               exit(0);
        default:
        printf("\n invalid choice ");
    }  
    } 
}
int menu()
{
    printf("\n 1.enter bus: ");
    printf("\n 2.enter riksha: ");
    printf("\n 3.enter cycle: ");
    printf("\n 4.show status: ");
    printf("\n 5. delete data: ");
    printf("\n 6. exit:");
    printf("\n\n enter your choice: ");
    scanf("%d",&ch);
    return(ch);
}
int delete(){
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
int show(){
    printf("\n number of bus=%d",nob);
    printf("\n number of riksha=%d",nor);
    printf("\n number of cycle=%d",noc);
    printf("\n total number of vehicle=%d",nob+noc+nor);
    printf("\n total gain amount=%d",amount);
}
int rikhsa(){
    printf("\n entry succesful ");
    nor++;
    amount=amount+50;
    count++;
}
int cycle(){
    printf("\n entry succesful ");
    noc++;
    amount=amount+20;
    count++;
}
int bus(){
    printf("\n entry succesful ");
    nob++;
    amount=amount+100;
    count++;
}
