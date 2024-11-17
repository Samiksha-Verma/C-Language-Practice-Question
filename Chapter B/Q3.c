#include<stdio.h>
// Take the three sides of a Triangle and check whether the triangle is equilateral, isosceles or 
// scalene. Provide necessary messages.

int main(){
    int side1,side2, side3;
    printf("Enter three sides of a triangle : ");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1 == side2 && side1 == side3){
        printf("This triangle is Equilateral triangle");
    }else if(side1 == side2 && side1 != side3 || side1 == side3 && side1 != side2){
        printf("This triangle is Isosceles triangle");
    }else{
        printf("this triangle is Scalene triangle");
    }
    return 0;
}