# include<stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    long long infection=1;
    while(n>0){
        infection+=(infection*x);
        n--;
    }
    printf("%lld",infection);
    return 0;
}
