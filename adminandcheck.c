#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int CHECK(char username[][60],char userpassword[][60],char usermail[][60],int number)
{
    char usernameL[25], usermailL[25], userpasswordL[25], usernameS[25], usermailS[25], userpasswordS[25], username1[25], usermail1[25], userpassword1[25];
    char credentials[10];
    char temp2[]="login",temp3[25],temp4[25],temp5[25];
    int i,otp,otp1=0,k,j,age;
    printf("ENTER LOGIN IF ACCOUNT EXISTS OR ENTER SIGNUP TO CREATE ACCOUNT:- ");
    scanf("%s",credentials);
    int c1=strcmp(credentials,temp2);
    printf("c1:-%d\n",c1);
    if (strcmp(credentials,temp2)==0){
        printf("PLEASE ENTER YOUR USERNAME:- ");
        scanf("%s",usernameL);
        printf("PLEASE ENTER YOUR USERMAIL:- ");
        scanf("%s",usermailL);
        printf("PLEASE ENTER YOUR USERPASSWORD:- ");
        scanf("%s",userpasswordL);
        strcpy(temp3,usernameL);
        strcpy(temp4,usermailL);
        strcpy(temp5,userpasswordL);
        k=0;
        for (i=0;i<=number;i++){
            printf("username[%d]:- %s\n",i,username[i]);
            printf("temp3:- %s\n",temp3);
            int c5=0;
            c5=strcmp(username[i],temp3);
            printf("c1:-%d\n",c5);
            if(strcmp(username[i],temp3)==10){
                k++;
                j=i;
                printf("k1:- %d\n",k);
            }
            else {printf("CHECK1\n");}
        }
        for (i=0;i<=number;i++){
            printf("usermail[%d]:- %s\n",i,usermail[i]);
            printf("temp4:- %s\n",temp4);
            int c6=0;
            c6=strcmp(usermail[i],temp4);
            printf("c2:-%d\n",c6);
            if(strcmp(usermail[i],temp4)==10){
                k++;
                j=i;
                printf("k2:- %d\n",k);
            }
            else {printf("CHECK2\n");}
        }
        for (i=0;i<=number;i++){
            printf("userpassword[%d]:- %s\n",i,userpassword[i]);
            printf("temp5:- %s\n",temp5);
            int c7=0;
            c7=strcmp(userpassword[i],temp5);
            printf("c3:-%d\n",c7);
            if(strcmp(userpassword[i],temp5)==10){
                k++;
                j=i;
                printf("k3:- %d\n",k);
            }
            else {printf("CHECK3\n");}
        }
        if (k==3){
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp1);
            if (otp1==otp){
                printf("ACCOUNT SUCCESSFULLY LOGGED-IN\n");
                printf("LOGIN\n");
                printf("CONNECTED TO USERGROUP1\n");
                strcpy(username1,username[j]);
                strcpy(usermail1,usermail[j]);
                strcpy(userpassword1,userpassword[j]);
            }
            else { 
                printf("OTP ENTERED IS WRONG\n"); 
                exit(0);
            }
        }
        else { printf("WRONG CREDENTIALS ENTERED, RE-CHECK YOUR CREDENTIALS\n"); }
            exit(0);
    }
    else {
        printf("PLEASE ENTER YOUR AGE:- ");
        scanf("%d",&age);
        if (age>=16){
            printf("signup");
            printf("PLEASE ENTER YOUR USERNAME:- ");
            scanf("%s",usernameS);
            printf("PLEASE ENTER YOUR USERMAIL:- ");
            scanf("%s",usermailS);
            printf("PLEASE ENTER YOUR USERPASSWORD:- ");
            scanf("%s",userpasswordS);
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp1);
            if (otp1==otp){
                printf("ACCOUNT SUCCESSFULLY REGISTERED\n");
                printf("SIGNUP\n");
                printf("CONNECTED TO USERGROUP1\n");
                strcpy(username[number+1],usernameS);
                strcpy(usermail[number+1],usermailS);
                strcpy(userpassword[number+1],userpasswordS);
                strcpy(username1,usernameS);
                strcpy(usermail1,usermailS);
                strcpy(userpassword1,userpasswordS);
            }
            else {
                printf("OTP ENTERED IS WRONG\n");
                exit(0);
            }
        }
        else {
            printf("AGE ELIGIBILITY IS NOT SATISFIED\n");
            exit(0);
        }
    }
    return 0;
}


int ADMIN(char username[][60],char userpassword[][60],char usermail[][60],int number)
{
    int i,age,b;
    
    char temp1[number][60];
    char str1[50];
    char str2[50];
    char str3[50];
    char str4[50];
    

    printf("Enter Age Of Admin:- ");
    scanf("%d",&age);
    if(age>=16){
        fgets(str4, 50, stdin);
        strcpy(temp1[0], str4);
        printf("Enter The Name Of Admin:- ");
        fgets(str1, 50, stdin);
        strcpy(username[0], str1);
        printf("Enter The Email Of Admin:- ");
        fgets(str2, 50, stdin);
        strcpy(usermail[0], str2);
        printf("Enter The Password Of Admin:- ");
        fgets(str3, 50, stdin);
        strcpy(userpassword[0], str3);
        for(i=1;i<=number;i++){
            printf("Enter Age Of Group Member:- ");
            scanf("%d",&age);
            if(age>=16){
                fgets(str4, 50, stdin);
                strcpy(temp1[0], str4);
                printf("Enter The Name Of Member %d:- ",i);
                fgets(str1, 50, stdin);
                strcpy(username[i], str1);
                printf("Enter The Email Of Member %d:- ",i);
                fgets(str2, 50, stdin);
                strcpy(usermail[i], str2);
                printf("Enter The Password Of Member %d:- ",i);
                fgets(str3, 50, stdin);
                strcpy(userpassword[i], str3);
            }
            else{
                printf("The Age Criteria Is Not Met\n");
            }
        }
    }
    else{
        printf("The Age Criteria Is Not Met\n");
    }
    b=CHECK(username,userpassword,usermail,number);
    return 0;
}

int main()
{
    int a;
    printf("WELCOME TO THE SOCIAL MONEY MANAGEMENT TOOL\n");
    int number;
    printf("PLEASE ENTER THE NUMBER OF MEMBERS IN THE GROUP AND MAXIMUM NUMBER OF USERS IN A GROUP IS 10 AND MINIMUM NUMBER OF USERS IN A GROUP IS 2 (EXCLUDING THE ADMIN):- ");
    scanf("%d",&number);
    if (number<0 || number>10){
        printf("MINIMUM NUMBER OF USERS IN A GROUP IS 2 AND MAXIMUM NUMBER OF USERS IN A GROUP IS 10\n");
        exit(0);
    }
    char username[number][60];
    char usermail[number][60];
    char userpassword[number][60];
    a=ADMIN(username,userpassword,usermail,number);
    return 0;
}