#include<stdio.h>
// Write a C program to read the coordinates(x, y) (in Cartesian system) and find the 
// quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).     
// Note: A Cartesian coordinate system is a coordinate system that specifies each point 
// uniquely in a plane by a pair of numerical coordinates. 
// These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the 
// signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).Test Data : 

// Input the Coordinate(x,y):              Input the Coordinate(x,y): 
// x: 25                                    x: 25 
// y: -15                                   y: 15 
// Expected Output:                         Expected Output:
// Quadrant-IV(+,-)                         Quadrant-I(+,+)

int main(){
    int x,y;
    printf("Enter two number with any sign : ");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0){
        printf("Quadrant-I(+,+)");
    }else if(x<0 && y>0){
        printf("Quadrant-II(-,+)");
    }else if(x<0 && y<0){
        printf("Quadrant-III(-,-)");
    }else if(x>0 && y<0){
        printf("Quadrant-IV(+,-)");
    }else{
        printf("Thankyou");
    }

    return 0;

}