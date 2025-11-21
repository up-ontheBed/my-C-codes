# include<stdio.h> 
# include<string.h>
# define NUMBER 9
//也许可以从棋盘入手，把棋盘所有位置设为0，a为1，b为2，然后判断数组棋盘
//P.S.前提条件：a为先手
int judgement_win(int []);
int main()
{
    int board[NUMBER];
    for(int i=0;i<NUMBER;i++){
        board[i]=0;
    }
    char chess[NUMBER];
    scanf("%s",chess);
    int length=strlen(chess);
    for(int i=0;i<length;i++){
        int number=chess[i]-'0';//使用字符串处理一串数字后，要记得将数字字符转化为真正的数字处理
        if((i+1)%2==1){
            board[number-1]=1;
        }else if((i+1)%2==0){
            board[number-1]=2;
        }
    }
    int win=judgement_win(board);
    if(win==1){
        printf("a wins.");
    }else if(win==2){
        printf("b wins.");
    }else if(win==0){
        printf("drew.");
    }
    return 0;
}
int judgement_win(int n[]){
    int value;
    if((n[0]==n[1]&&n[1]==n[2])||(n[0]==n[3]&&n[3]==n[6])||(n[0]==n[4]&&n[4]==n[8])){
        value=n[0];
        return value;
    }else if((n[2]==n[5]&&n[5]==n[8])||(n[2]==n[4]&&n[4]==n[6])){
        value=n[2];
        return value;
    }else if((n[3]==n[4]&&n[4]==n[5])){
        value=n[3];
        return value;
    }else if((n[6]==n[7]&&n[7]==n[8])){
        value=n[6];
        return value;
    }else if((n[1]==n[4]&&n[4]==n[7])){
        value=n[1];
        return value;
    }else{
        return 0;
    }
}
