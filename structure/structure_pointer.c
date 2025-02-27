#include<stdio.h>
struct Point{
    float x;
    float y;
};

struct Point addPoints(struct Point a,struct Point b){
    struct Point result;
    result.x= a.x+b.x;
    result.y= a.y+b.y;
    return result;
}


int main(){
    struct Point P,Q,R;
    P.x=2;
    P.y=4;

    Q.x=2;
    Q.y=2;


    R= addPoints(P,Q);

    printf("The point R is (%.2f,%.2f)",R.x,R.y);
    return 0;
}
