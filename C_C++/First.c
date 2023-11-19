#include <stdio.h>
#include <stdlib.h>

int main()
{
    char errorcheckerf='\n';
    int salary;
    double tax;
    int i=0;


    if (scanf("%d%c",&salary,&errorcheckerf)==0|| errorcheckerf !='\n'||salary<0){
        printf("%d",-1);
}
    else{
        while((salary>=100000+41666.67*i)&&(i<6)){
            i++;
        }
        //printf("%d\n",i);
        tax=1250*(i-1)*i+(salary-(100000+41666.667*(i-1)))*0.06*i;
        if (tax<0){
            printf("No Tax");
        }
        else{
           printf("Total tax = %.2lf LKR",tax);

        }
        }
    return 0;
}