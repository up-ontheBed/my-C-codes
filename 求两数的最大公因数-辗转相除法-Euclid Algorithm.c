int calculate_gcd(int a,int b){
    int min,max;
    if(a<b){
        min=a;
        max=b;
    }else{
        max=a;
        min=b;
    }
    while(min!=0){
        int temp=min;
        min=max%min;
        max=temp;
    }
    return max;
}
