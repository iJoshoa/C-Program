#include<stdio.h>
int f(int x){
    int fac=1;
    if(x==1){
        printf("1");
        return fac;
    }
    else if(x<=0){
        printf("0");
        return 0;
    }
    else{
        printf("%dX",x);
        fac = x*f(x-1);
        return fac;
    }
}

int main(){
    int x,sum=0;
    printf("Enter num : ");
    scanf("%d",&x);
    printf("%d! = ",x);
    printf(" = %d",f(x));
 return 0;
}
