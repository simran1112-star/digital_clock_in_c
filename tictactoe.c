#include<stdio.h>
#include<conio.h>
void print_board();
int checking();
void system();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void main(){
    int player=1,input,status=-1;
while(status==-1){
    player=(player%2==0)? 2 : 1;
     char mark=(player==1) ? 'X' :'0';
     printf("please enter number player %d",player);
    scanf("%d",&input);
    if(input<1 || input>9){
        printf("invalid input");
    }
    board[input]=mark;
    print_board();
    int checking();
    int result=checking();
    if(result==1){
        printf("player %d is winner",player);
        return;
    }
    else if(result==0){
        printf("draw");
        return;
    }
    player++;
}
}

    void print_board(){
        system("cls");
    printf("\n\n");
    printf("___TIC TAC TOE___\n");
    
    printf("  %c    |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("  _____|_____|____  \n");
    printf("       |     |      \n");
    printf("    %c  |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("  _____|_____|____  \n");
    printf("       |     |      \n");
    printf("   %c   |  %c  |  %C  \n",board[7],board[8],board[9]);
}
int checking(){
    if(board[1]==board[4]&& board[4]==board[7]){
        return 1;
    }
     if(board[7]==board[8]&& board[8]==board[9]){
        return 1;
    }
     if(board[3]==board[6]&& board[6]==board[9]){
        return 1;
    }
     if(board[1]==board[5]&& board[5]==board[9]){
        return 1;
    }
     if(board[3]==board[5]&& board[5]==board[7]){
        return 1;
    }
     if(board[2]==board[5]&& board[5]==board[8]){
        return 1;
    }
     if(board[4]==board[5]&& board[5]==board[6]){
        return 1;
    }
    int count=0;
    for(int i=1;i<=9;i++){
        if(board[i]=='x'||board[i]=='0'){
            count++;
        }
    }
    if(count==9){
        return 0;
    }
    return -1;
}
    