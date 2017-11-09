#include <stdio.h>
#define N 10
typedef struct
{
    int id;
    char name[20];
    char nameAu[20];
    int remain;
    int amount;
    float price;
} Book;
void addBook(Book b[])
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("\n----------------_%d_----------------------\n",i+1);
        printf("Enter Book id : ");
        scanf("%d",&b[i].id);
        printf("Enter name : ");
        scanf("%s",b[i].name);
        printf("Enter name Author : ");
        scanf("%s",b[i].nameAu);
        printf("Enter remain : ");
        scanf("%d",&b[i].remain);
        printf("Enter amount : ");
        scanf("%d",&b[i].amount);
        printf("Enter price : ");
        scanf("%f",&b[i].price);
        printf("\n----------------------------------------\n");
    }
}
void findname(Book b[]){
    int i,f;
    char namef[20];
    printf("Enter find name : ");
    scanf("%s",namef);
    for(i=0; i<N; i++)
    {
        if(strcmp((b[i].name),namef)==0){
            f=i;
        }
        else{
            f=N+1;
        }
    }
    if(f==N+1){
        printf("\nNot found");
    }
    else{
        printf("\nid : %d, name : %s, name Author : %s, remain : %d, amount : %d, price :%f\n",b[f].id,b[f].name,b[f].nameAu,b[f].remain,b[f].amount,b[f].price);
    }
}
void findid(Book b[]){
    int i;
    int idf,f;
    printf("Enter find id : ");
    scanf("%d",&idf);
    for(i=0; i<N; i++)
    {
        if(b[i].id==idf){
            f=i;
        }
        else{
            f=N+1;
        }
    }
    if(f==N+1){
        printf("\nNot found");
    }
    else{
        printf("\nid : %d, name : %s, name Author : %s, remain : %d, amount : %d, price :%f\n",b[f].id,b[f].name,b[f].nameAu,b[f].remain,b[f].amount,b[f].price);
    }
}
void remain(Book b[]){
    int i;
    int c=0;
    for(i=0; i<N; i++)
    {
       c+=b[i].remain;
    }
    printf("\nremain = %d",c);
}
void amount(Book b[]){
    int i;
    int c=0;
    for(i=0; i<N; i++)
    {
       c+=b[i].amount;
    }
    printf("\nremain = %d",c);
}
int main()
{
    Book b[N];
    addBook(b);
    findname(b);
    findid(b);
    amount(b);
    remain(b);
    return 0;
}
