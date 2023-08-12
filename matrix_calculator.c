#include<stdio.h>
int addition(int mat1[][10],int mat2[][10],int r1,int c1)
{
    int i,j,sum[10][10];
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        sum[i][j]=(mat1[i][j]+mat2[i][j]);
    }
}
printf("your addition is\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
return 0;
}
int substraction(int mat1[][10],int mat2[][10],int r1,int c1)
{
    int i,j,sub[10][10];
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        sub[i][j]=(mat1[i][j]-mat2[i][j]);
    }
}
printf("your substraction is\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d\t",sub[i][j]);
    }
    printf("\n");
}
return 0;
}
int transpose(int mat1[][10],int mat2[][10],int r1,int c1)
{
    int i,j,trans1[10][10],trans2[10][10];
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        trans1[i][j]=mat1[j][i];
        trans2[i][j]=mat2[j][i];
    }
}
printf("transpose of matrix 1 is\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d\t",trans1[i][j]);
    }
    printf("\n");
}
printf("transpose of matrix 2 is\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d\t",trans2[i][j]);
    }
    printf("\n");
}
return 0;
}
int multiplication(int mat1[][10],int mat2[][10],int r1,int c1,int r2,int c2)
{
    int i,j,mult[10][10];
if(c1==r2){
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        mult[i][j]=0;
        for(int k=0;k<c1;k++)
        {
        mult[i][j]+=(mat1[i][k]*mat2[k][j]);
    }
}
}
}
  printf("your multiplication is\n");
for(i=0;i<r2;i++)
{   
     for(j=0;j<c2;j++)
   {      
         printf("%d\t",mult[i][j]);
   }   
    printf("\n");
 }
return 0;
}

int main()
{
    int mat1[10][10],mat2[10][10],sub[10][10];
    int r1,c1,r2,c2,i,j,ch;
    printf("enter the number of rows and coloumns you want in matrix 1 ");
    scanf("%d %d",&r1,&c1);
    printf("enter the number of rows and coloumns you want in matrix 2 ");
    scanf("%d %d",&r2,&c2);
    if((r1==r2)&&(c1==c2))
    {
        printf("enter elements of matrix1\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1 ;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("enter elements of matrix2\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }

    }
    printf("enter what operation would you like to make\n");
    printf("press 1 for addition\n");
    printf("press 2 for substraction\n");
    printf("press 3 for transpose\n");
    printf("press 4 for multiplication\n");
    scanf("%d",&ch);
    switch (ch){
    case 1: addition(mat1,mat2,r1,c1);
    break;
    case 2:substraction(mat1,mat2,r1,c1);
    break;
    case 3: transpose(mat1,mat2,r1,c1);
    break;
    case 4:multiplication(mat1,mat2,r1,c1,r2,c2);
    break;
    default:
    printf("you entered wrong number");
    }
return 0;
}
