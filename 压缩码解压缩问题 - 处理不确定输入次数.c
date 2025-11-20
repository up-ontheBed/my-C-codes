# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int code;
    int current=0;
    int count=0;
    while(scanf("%d",&code)==1){
        for(int i=0;i<code;i++){
            printf("%d",current);
            count++;
            if(count%n==0){
                printf("\n");
            }
        }
        current=1-current;
    }
    return 0;
}
