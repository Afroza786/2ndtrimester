#include<stdio.h>
struct Point{
    float x;
    float y;
};

int main(){
    struct Point p1;
    p1.x=2.0;
    p1.y=3.0;

    struct Point * ptr;
    ptr=&p1;

    ptr->x=20.0;
    ptr->y=30.0;

    printf("p1.x = %.2f\n",p1.x);
    printf("p1.y = %.2f\n",p1.y);

    printf("ptr->x = %.2f\n",ptr->x);
    printf("ptr->y = %.2f\n",ptr->y);
    return 0;
}
