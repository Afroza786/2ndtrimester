#include<stdio.h>
struct point{
    int x;
    int y;
};
struct point addPoints(struct point a,struct point b){
    struct point result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;
}

int main(){
    struct point p,q,r;
    p.x=40;
    p.y=39;
    q.x=50;
    q.y=90;

    r=addPoints(p,q);

    printf("Add points :%d %d",r.x,r.y);


}
