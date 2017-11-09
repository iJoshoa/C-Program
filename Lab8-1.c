#include <stdio.h>
#define N 10 //จำนวนหนังสือ 10 สามารถ เพิ่มได้จากตรงนี้
typedef struct
{
    int id;
    char name[20];
    char nameAu[20];//ชื่อคนแต่ง
    int remain; //คงเหลือ
    int amount;//ทั้งหมด
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
void findname(Book b[]){ //ค้นหาหนังสือจากชื่อหนังสือ โดยแสดงรายละเอียดหนังสือทั้งหมด หากไม่พบ ให้แสดงว่า Not found
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
void findid(Book b[]){ //ค้นหาหนังสือจากรหัสหนังสือ โดยแสดงรายละเอียดหนังสือทั้งหมด หากไม่พบ ให้แสดงว่า Not found
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
void remain(Book b[]){ //นับจำนวนหนังสือทุกเล่มคงเหลือในห้องสมุด
    int i;
    int c=0;
    for(i=0; i<N; i++)
    {
       c+=b[i].remain;
    }
    printf("\nRemain = %d",c);
}
void price(Book b[]){ //แสดงมูลค่าหนังสือรวมทั้งห้องสมุดทั้งที่ถูกยืมไป และคงเหลือ
    int i;
    float c=0;
    for(i=0; i<N; i++)
    {
       c+=(b[i].amount)*(b[i].price);
    }
    printf("\nPrice All = %f",c);
}
int main()
{
    Book b[N];
    int i=0,in;

    while(i==0)
    {
        printf("\n------------------Menu------------------");
        printf("\n1 = Add Book");
        printf("\n2 = Find name");
        printf("\n3 = Find ID");
        printf("\n4 = Remain");
        printf("\n5 = Price");
        printf("\n6 = Exit");
        printf("\nEnter number : ");
        scanf("%d",&in);
        switch(in)
        {
        case 1 :
            addBook(b);
            break;
        case 2 :
            findname(b);
            break;
        case 3 :
            findid(b);
            break;
        case 4 :
            remain(b);
            break;
        case 5 :
            price(b);
            break;
        case 6 :
            i++;
        }
    }
}
