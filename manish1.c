#include<stdio.h>
void main(){
    int x,y,z,p,sum;
    float per;
    printf("enter marks of subject:\n");
    scanf("%d%d%d%d",&x,&y,&z,&p);
    sum= x+y+z+p;
    per=sum/5;
    
    if(per>=90 && per<=100){
        printf("the grade is A");
    }
    else if("PER>=80" && per<=90 ){
        printf("the grade is B");}
        else if (per>=70 && per<=80) {
            printf("the grade is C");
        }
    return 0;






}