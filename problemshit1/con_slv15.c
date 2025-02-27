#include<stdio.h>

int main(){

int x,c1,c2,c3;
scanf("%d%d%d%d",&x,&c1,&c2,&c3);
if(c1==x){
    printf("Right,player 2 win's\n");
}
else{
    printf("Wrong,2 chance(s) left\n");
    if(c2==x){
        printf("Right,player 2 wins!\n");
    }
    else{
        printf("Wrong,1 chance(s) left\n");
        if(c3==x){
            printf("Right,player 3 wins\n");
        }
        else{
            printf("Wrong,0 chance left\n");
            printf("player 1 wins\n");
        }
    }
}

return 0;

}
