#include<stdio.h>
int main(){

int x,y;
//taking input for X and Y
printf("Enter the value for X and Y: ");
scanf("%d %d",&x,&y);

if(x==y){
    printf("Reached!");
}
else{

    while(x!=y){
        printf(" %d ",x*x);
        if(x<y){
            x++;
        }
        else{
            x--;
        }

    }
    printf("Reached!\n");

}



return 0;
}
