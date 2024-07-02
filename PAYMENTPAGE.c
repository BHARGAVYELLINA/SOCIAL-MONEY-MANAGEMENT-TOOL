#include <stdio.h>
    #include <time.h>  
    #include <stdlib.h>
    int main(){
        printf("WELCOME TO THE PAYMENT SECTION\n");
        return 0;
    }
    int PAYMENTPAGE(){
        char paymenttype[10], paymentmode[10];
        int cardno,otp,otp2,paymentamount,i,upino,cardpin,upipin,x=0;
        
        printf("REDIRECTED TO DEBT PAYMENT GATEWAY\n");
        printf("YOUR DEBT PAYMENT DETAILS:- \n");
        for (i=0;i<11;i=i+2){
            printf("%d = %d\n",billinfo[i],billinfo[i+1]);
        }
        printf("ENTER CARD TO PAY USING CARD OR ENTER UPI TO PAY USING PAYMENT APPS:- ");
        scanf("%s",paymentmode);
        if (paymentmode=="card"){
            printf("YOU ARE BEING REDIRECTED TO CARD PAYMENT GATEWAY\n");
            printf("PLEASE ENTER YOUR CARD NUMBER:- ");
            scanf("%d",&cardno);
            printf("PLEASE ENTER CARDPIN:- ");
            scanf("%d",&cardpin);
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp2);
            if (otp2==otp){
                printf("DEBT PAYMENT SUCCESSFUL\n");
                x++;
            }
            else{
                printf("OTP ENTERED IS WRONG\n");
                printf("PAYMENT UNSUCCESSFUL\n");
                x=x-2;
            }
        }
        else{
            printf("YOU ARE BEING REDIRECTED TO UPI PAYMENT GATEWAY\n");
            printf("PLEASE ENTER YOUR UPI NUMBER:- ");
            scanf("%d",&upino);
            printf("PLEASE ENTER UPIPIN:- ");
            scanf("%d",&upipin);
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp2);
            if (otp2==otp){
                printf("DEBT PAYMENT SUCCESSFUL\n");
                x++;
            }
            else{
                printf("OTP ENTERED IS WRONG\n");
                printf("PAYMENT UNSUCCESSFUL\n");
                x=x-2;
            }
        }
        
        printf("REDIRECTED TO BILL PAYMENT GATEWAY\n");
        printf("YOUR BILL PAYMENT DETAILS:-\n");
        for (i=0;i<7;i=i+2){
            printf("%d = %d\n",debtinfo[i],debtinfo[i+1]);
        }
        printf("ENTER CARD TO PAY USING CARD OR ENTER UPI TO PAY USING PAYMENT APPS:- ");
        scanf("%s",paymentmode);
        if (paymentmode=="card"){
            printf("YOU ARE BEING REDIRECTED TO CARD PAYMENT GATEWAY\n");
            printf("PLEASE ENTER YOUR CARD NUMBER:- ");
            scanf("%d",&cardno);
            printf("PLEASE ENTER CARDPIN:- ");
            scanf("%d",&cardpin);
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp2);
            if (otp2==otp){
                printf("DEBT PAYMENT SUCCESSFUL\n");
                x++;
            }
            else{
                printf("OTP ENTERED IS WRONG\n");
                printf("PAYMENT UNSUCCESSFUL\n");
                x=x-2;
            }
        }
        else{
            printf("YOU ARE BEING REDIRECTED TO UPI PAYMENT GATEWAY\n");
            printf("PLEASE ENTER YOUR UPI NUMBER:- ");
            scanf("%d",&upino);
            printf("PLEASE ENTER UPIPIN:- ");
            scanf("%d",&upipin);
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp2);
            if (otp2==otp){
                printf("DEBT PAYMENT SUCCESSFUL\n");
                x++;
            }
            else{
                printf("OTP ENTERED IS WRONG\n");
                printf("PAYMENT UNSUCCESSFUL\n");
                x=x-2;
            }
        }
        return x;
    }