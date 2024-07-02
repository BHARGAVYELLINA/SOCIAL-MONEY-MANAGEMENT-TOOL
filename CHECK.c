#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    printf("WELCOME TO THE PAYMENT SECTION");
    return 0;
}
int CHECK()
{
    char credentials[10];
    int i,otp,otp1=0,k,j,age;
    printf("ENTER LOGIN IF ACCOUNT EXISTS OR ENTER SIGNUP TO CREATE ACCOUNT:- ");
    scanf("%s",&credentials);
    if (credentials=="login"){
        printf("PLEASE ENTER YOUR USERNAME:- ");
        scanf("%s",&usernameL);
        printf("PLEASE ENTER YOUR USERMAIL:- ");
        scanf("%s",&usermailL);
        printf("PLEASE ENTER YOUR USERPASSWORD:- ");
        scanf("%s",&userpasswordL);
        k=0;
        i=0;
        while(i<number+1){
            if(usernameL==username[i]){
                k++;
                j=i;
            }
            i++;
        }
        i=0;
        while(i<number+1 && k==1){
            if(usermailL==usermail[i]){
                k++;
                j=i;
            }
            i++;
        i=0;
        }
        while(i<number+1 && k==2){
            if(userpasswordL==userpassword[i]){
                k++;
                j=i;
            }
            i++;
        }
        if (k==3){
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp1);
            if (otp1==otp){
                printf("ACCOUNT SUCCESSFULLY LOGGED-IN\n");
                printf("CONNECTED TO USERGROUP1\n");
                username1=username[j];
                usermail1=usermail[j];
                userpassword=userpassword[j];
            }
            else { 
                printf("OTP ENTERED IS WRONG\n"); 
                break;
            }
        }
        else { printf("WRONG CREDENTIALS ENTERED, RE-CHECK YOUR CREDENTIALS\n"); }
            break;
    }
    else {
        printf("PLEASE ENTER YOUR AGE:- ");
        scanf("%d",&age);
        if (age>=16){
            printf("PLEASE ENTER YOUR USERNAME:- ");
            scanf("%s",&usernameS);
            printf("PLEASE ENTER YOUR USERMAIL:- ");
            scanf("%s",&usermailS);
            printf("PLEASE ENTER YOUR USERPASSWORD:- ");
            scanf("%s",&userpasswordS);
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp1);
            if (otp1==otp){
                printf("ACCOUNT SUCCESSFULLY REGISTERED\n");
                printf("CONNECTED TO USERGROUP1\n");
                i=number+1;
                username[i]=usernameS;
                usermail[i]=usermailS;
                userpassword[i]=userpasswordS;
                username1=usernameS;
                usermail1=usermailS;
                userpassword=userpasswordS;
            }
            else {
                printf("OTP ENTERED IS WRONG\n");
                break;
            }
        }
        else {
            printf("AGE ELIGIBILITY IS NOT SATISFIED\n");
            break;
        }
    }
}
