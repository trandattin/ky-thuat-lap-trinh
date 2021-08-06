#include "stdio.h"
#include "math.h"

struct circle{
    int center_x;
    int center_y;
    int arc_x;
    int arc_y;
};

circle inputCircle();
float radius(circle a);
float area(circle a);

int main(){
    circle a = inputCircle();
    float s = area(a);
    printf("Area of circle is: %f",s);
}

circle inputCircle(){
    circle a;
    printf("Input arc point of circle (x,y): ");
    scanf("%d,%d",&a.arc_x,&a.arc_y);
    printf("Input center of circle (x,y): ");
    scanf("%d,%d",&a.center_x,&a.center_y);
    return a;
}

float radius(circle a){
    return sqrt(pow(a.arc_x-a.center_x,2)+pow(a.arc_y-a.center_y,2));
}

float area(circle a){
    float r = radius(a);
    return r*(22.0/7.0) ;
}