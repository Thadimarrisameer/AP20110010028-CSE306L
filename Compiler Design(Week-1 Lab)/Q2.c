#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    int state=0;
    char input[20];

    printf("Enter a String :");
    scanf("%s",input);

    for(int i=0;i<=strlen(input)-1;++i){
        if(state==0){
            if(input[i]=='a'){
                state=1;
            }
            else if(input[i]=='b'){
                state=3;
            }
            else{
                printf("Invalid Token");
                exit(0);
            }
        }

        else if(state==1){
            if(input[i]=='a'){
                state=2;
            }
            else if(input[i]=='b'){
                state=3;
            }
            else{
                printf("Invalid Token");
                exit(0);
            }
        }

        else if(state==2){
            if(input[i]=='a'){
                state=2;
            }
            else if(input[i]=='b'){
                state=3;
            }
            else{
                printf("Invalid Token");
                exit(0);
            }
        }

        else if(state==3){
            if(input[i]=='a'){
                state=1;
            }
            else if(input[i]=='b'){
                state=4;
            }
            else{
                printf("Invalid Token");
                exit(0);
            }
        }

        else if(state==4){
            if(input[i]=='a'){
                state=1;
            }
            else if(input[i]=='b'){
                state=4;
            }
            else{
                printf("Invalid Token");
                exit(0);
            }
        }
    }

    if(state==2||state==4){
        printf("The String is Accepted !!");
    }
    else{
        printf("The String is Not Accepted !!!");
    }
    return 0;
}
