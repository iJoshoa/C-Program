#include<stdio.h>
int f(int x){
    int fi = 0;
    if(x>=0){
        fi = (x+f(x-1));
        printf("%d, ",x);
        return fi;
    }
}
int main(){
    int x,sum=0;
    printf("Enter num : ");
    scanf("%d",&x);
    printf("\nsum = %d",f(x)+1);
 return 0;
}
