#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("WELCOME TO THE PAYMENT SECTION");
    return 0;
}

int number;
printf("PLEASE ENTER THE NUMBER OF MEMBERS IN THE GROUP AND MAXIMUM NUMBER OF USERS IN A GROUP IS 10 AND MINIMUM NUMBER OF USERS IN A GROUP IS 2 (EXCLUDING THE ADMIN)");
scanf("%d",&number);
if (number<2 || number>10){
    printf("MINIMUM NUMBER OF USERS IN A GROUP IS 2 AND MAXIMUM NUMBER OF USERS IN A GROUP IS 10");
    break;
}
char username[number][60];
char usermail[number][60];
char userpassword[number][60];


int ADMIN(char username[][60],char userpassword[][60],char usermail[][60],int number))
{
    int i,age;
    printf("Enter The Number Of Memebers In The Group:");
    scanf("%d",&number);
    
    char temp1[number][60];
    char str1[50];
    char str2[50];
    char str3[50];
    char str4[50];
    

    printf("Enter Age Of Admin:");
    scanf("%d",&age);
    if(age>=16){
        fgets(str4, 50, stdin);
        strcpy(temp1[0], str4);
        printf("Enter The Name Of Admin:");
        fgets(str1, 50, stdin);
        strcpy(name[0], str1);
        printf("Enter The Email Of Admin:");
        fgets(str2, 50, stdin);
        strcpy(email[0], str2);
        printf("Enter The Password Of Admin:");
        fgets(str3, 50, stdin);
        strcpy(pwd[0], str3);
        for(i=1;i<number+1;i++){
            printf("Enter Age Of Group Member:");
            scanf("%d",&age);
            if(age>=16){
                fgets(str4, 50, stdin);
                strcpy(temp1[0], str4);
                printf("Enter The Name Of Member %d:",i);
                fgets(str1, 50, stdin);
                strcpy(name[i], str1);
                printf("Enter The Email Of Member %d:",i);
                fgets(str2, 50, stdin);
                strcpy(email[i], str2);
                printf("Enter The Password Of Member %d:",i);
                fgets(str3, 50, stdin);
                strcpy(pwd[i], str3);
            }
            else{
                printf("The Age Criteria Is Not Met\n");
            }
        }
        
    }
    else{
        printf("The Age Criteria Is Not Met\n");
    }
    
    return 0;
}

char usernameL[25], usermailL[25], userpasswordL[25], usernameS[25], usermailS[25], userpasswordS[25], username1[25], usermail1[25], userpassword1[25];

int CHECK(char username[][60],char userpassword[][60],char usermail[][60],int number)
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
