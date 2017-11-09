#include <stdio.h>
#define N 3
typedef struct
{
    int id;
    char name[20];
    int room;
    int work;
    float mid;
    float fi;
} Std;
void add(Std s[])
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("\n----------------_%d_----------------------\n",i+1);
        printf("Enter id : ");
        scanf("%d",&s[i].id);
        printf("Enter name : ");
        scanf("%s",s[i].name);
        printf("Enter room : ");
        scanf("%d",&s[i].room);
        printf("Enter work : ");
        scanf("%d",&s[i].work);
        printf("Enter mid : ");
        scanf("%f",&s[i].mid);
        printf("Enter final : ");
        scanf("%f",&s[i].fi);
        printf("\n----------------------------------------\n");
    }
}
void sumS(Std s[])
{
    int i;
    float sum=0;
    for(i=0; i<N; i++)
    {
        sum=s[i].room+s[i].work+s[i].mid+s[i].fi;
        printf("%d id : %d,\tname : %s,\t Sum : %.2f\n",i+1,s[i].id,s[i].name,sum);
    }
}
void sumAll(Std s[])
{
    int i;
    float sum=0;
    for(i=0; i<N; i++)
    {
        sum+=(s[i].room+s[i].work+s[i].mid+s[i].fi);
    }
    printf("Sum : %.2f Avr = %.2f\n",sum,sum/N);
}
void max(Std s[]){
    int i;
    float sum=0,max;
    float std2[N];
    for(i=0;i<N;i++){
        std2[i]=0;
        std2[i]=(s[i].room+s[i].work+s[i].mid+s[i].fi);
    }
    max=std2[0];
    for(i=0;i<N;i++){
        if(max<=std2[i]){
            max=std2[i];
        }
    }
    printf("Max = %.2f",max);
}
void min(Std s[]){
    int i;
    float sum=0,min;
    float std2[N];
    for(i=0;i<N;i++){
        std2[i]=0;
        std2[i]=(s[i].room+s[i].work+s[i].mid+s[i].fi);
    }
    min=std2[0];
    for(i=0;i<N;i++){
        if(min>=std2[i]){
            min=std2[i];
        }
    }
    printf("Min = %.2f",min);
}
int main()
{
    Std s[N];
    int i=0,in;

    while(i==0)
    {
        printf("\n------------------Menu------------------");
        printf("\n1 = Add");
        printf("\n2 = Total all");
        printf("\n3 = Average");
        printf("\n4 = Max");
        printf("\n5 = Min");
        printf("\n6 = Exit");
        printf("\nEnter number : ");
        scanf("%d",&in);
        switch(in)
        {
        case 1 :
            add(s);
            break;
        case 2 :
            sumS(s);
            break;
        case 3 :
            sumAll(s);
            break;
        case 4 :
            max(s);
            break;
        case 5 :
            min(s);
            break;
        case 6 :
            i++;
        }
    }
}
