#include<stdio.h>
int f(int x){
    int fi = 0; //ให้ มีค่าเริ่มต้นเป็น 0 ไม่งั้นเป็นค่าขยะ
    if(x>=0){ //ให้วน เริ่มต้นที่ 0 ด้วย จึงต้องใส่ = ถ้าใส่ > ตัวเดียวจะไม่นับ 0 
        fi = (x+f(x-1)); //ให้ fi เก็บค่าผลรวมทั้งหมด f(x-1) เพื่อให้ค่าลดลงทีละ 1 
        printf("%d, ",x); //แสดงผล เริ่มจาก 0
        return fi; // ส่งค่าที่เก็บใน fi ที่มันรวมๆ กันแล้วส่งไปใน main
    }
}
int main(){
    int x; //ประกาศตัวแปรเก็บ
    printf("Enter num : ");
    scanf("%d",&x); //รับค่า
    printf("\nsum = %d",f(x)+1); //แสดงผลลัพธ์ + 1 เพราะ จะให้นับ 1 ด้วย ตอนวนลูปมันไม่ได้รวม 1
 return 0;
}
