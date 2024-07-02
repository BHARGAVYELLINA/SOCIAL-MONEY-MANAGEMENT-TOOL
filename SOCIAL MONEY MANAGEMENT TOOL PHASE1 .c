#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int REMINDER()
{
    printf("WELCOME TO REMINDER SECTION \n");
    char payment1[10];
    char timefrequency1[]="24hrs";
    printf("ENTER PAID IF PAYMENT IS DONE OR ENTER NOT PAID:- ");
    scanf("%s",payment1);
    char temp6[]="paid";
    if(strcmp(payment1,temp6)==0) 
    {
        printf("REMAINDER IS OFF\n");
    }
    else
    {
        while(strcmp(payment1,temp6)!=0)
        {
            printf("COMPLETE THE PAYMENT in %s\n",timefrequency1);
            printf("ENTER PAID IF PAYMENT IS DONE OR ENTER NOT DONE:- ");
            scanf("%s",payment1);
        }
    }
    return 0;
}

int SMMTSCORE(int x)
{
    int i;
    int smmt_score=250,status;
    printf("Enter 1 if the user have paid the money with in the given time else enter 2:- ");
    scanf("%i",&status);
    smmt_score+(x*10);
    printf("your current smmt score is %d \n",smmt_score);
    if (smmt_score<0)
    printf("Your account have been deactivated due to low smmt score");
    else if (smmt_score>=0 && smmt_score<200)
    printf("You are currently in bronze club");
    else if (smmt_score>=200 && smmt_score<400)
    printf("You are currently in sliver club");
    else if (smmt_score>=400 && smmt_score<600)
    printf("You are currently in gold club");
    else if (smmt_score>=600 && smmt_score<800)
    printf("You are currently in diamond club");
    else if (smmt_score>=800 && smmt_score<1000)
    printf("You are currently in platinum club");
    i=REMINDER();
    return 0;
}

int PAYMENTPAGE()
{
    printf("WELCOME TO PAYMENT PAGE SECTION \n");
    int h;
    char paymenttype[10], paymentmode[10];
    int cardno,otp,otp2,paymentamount,i,upino,cardpin,upipin,x=0;
    printf("REDIRECTED TO DEBT PAYMENT GATEWAY\n");
    /* printf("YOUR BILL PAYMENT DETAILS:- \n");
    for (i=0;i<11;i=i+2){
        printf("%d = %d\n",billinfo[i],billinfo[i+1]);
    } */
    /* printf("YOUR DEBT DETAILS:- ");
            printf("Name of the borrower:- %s\n",borrower);
            printf("Name of the lender:- %s\n",lender);
            printf("Date of payment in form of dd/mm/yyyy:- %s\n",date);
            printf("Amount borrowed:- %d\n",amount);
            printf("Interest:- %d\n",interest);
            printf("Term of repayments in months:- %d\n",term);
            printf("Total amount to be paid is:- %d rs\n",debt_amount); */
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
    /* printf("REDIRECTED TO DEBT PAYMENT GATEWAY\n");
    printf("YOUR DEBT PAYMENT DETAILS:-\n");
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
    } */
    h=SMMTSCORE(x);
    return 0;
}

int BILL(int billid[],char billpur[][60],int totalbill[],int billamdbem[],char billdate[][60],char absentmemnames[][60])
{
    int g;
    int num3,i,number,a;
    char choice[5];
    char choice1[]="yes";
    printf("WAS ANY MEMBER OF THE GROUP ABSENT FOR THIS ACTIVIY?(yes/no):- ");
    scanf("%s",choice);
    if(strcmp(choice,choice1)==0){
        printf("NO.OF MEMBERS THAT WERE ABSENT FOR THIS ACTIVITY:");
        scanf("%d",&num3);
        for(i=0;i<num3;i++){
            printf("Enter The Name Of Absent Member%d:",i+1);
            scanf("%s",absentmemnames[i]);
        }
    }
    else{
        num3=0;
    }
    number=5;
    printf("WELCOME TO THE BILL SECTION:\n");
    int billamt;
    printf("Enter The Total Bill Amount:");
    scanf("%d",&billamt);
    billid[0]=rand();
    printf("Enter The Purpose Of Bill:");
    scanf("%s",billpur[0]);
    if(num3>0){
        billamdbem[0]=(billamt)/(number-num3);
    }
    else{
        billamdbem[0]=(billamt)/(number);
    }
    printf("Enter The Date Of Bill:");
    scanf("%s",billdate[0]);
    for(i=0;i<1;i++){
        printf("BILL ID: ");
        printf("%d \n ",billid[i]);
        printf("BILL NAME: ");
        printf("%s \n",billpur[i]);
        printf("TOTAL BILL AMOUNT: ");
        printf("%d \n",billamt);
        printf("AMOUNT DUE BY EACH MEMBER: ");
        printf("%d \n",billamdbem[i]);
        printf("BILL DATE: ");
        printf("%s \n",billdate[i]);
    }
    g=PAYMENTPAGE();
    return 0;
}

int DEBT()
{   
    printf("WELCOME TO DEBT SECTION \n");
    int f;
    int term,type,emi_need;float amount,debt_amount,interest;char username[50],date[15],borrower[50],lender[50];double EMI,r;
    printf("Enter 1 to borrow money else enter 2 to lend money:- ");
    scanf("%d",&type);
    if(type==1)
    {
        printf("If you are opting to take EMI please enter 1 else please enter 2:- ");
        scanf("%d",&emi_need);
        if(emi_need==1)
        {
            printf("Please enter name of the borrower:- ");
            scanf("%s",&borrower[50]);
            printf("Please enter name of the lender:- ");
            scanf("%s",&lender[50]);
            printf("Please enter date of payment in form of dd/mm/yyyy:- ");
            scanf("%s",&date[15]);
            printf("Please enter the amount borrowed:- ");
            scanf("%f",&amount);
            printf("Please enter the interest:- ");
            scanf("%f",&interest);
            printf("Please enter the term of repayments in months:- ");
            scanf("%d",&term);
            interest= interest/(12*100);
            EMI =amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1);
            printf("Monthly installment is:- %f rs",EMI);
        }
        else if(emi_need==2)
        {
            printf("Please enter name of the borrower:- ");
            scanf("%s",&borrower[50]);
            printf("Please enter name of the lender:- ");
            scanf("%s",&lender[50]);
            printf("Please enter date of payment in form of dd/mm/yyyy:- ");
            scanf("%s",&date[15]);
            printf("Please enter the amount borrowed:- ");
            scanf("%f",&amount);
            printf("Please enter the interest:- ");
            scanf("%f",&interest);
            printf("Please enter the term of repayments in months:- ");
            scanf("%d",&term);
            interest= interest/(12*100);
            debt_amount =(amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1))*term;
            printf("Total amount to be paid is:- %f rs",debt_amount);
        }
    }
    else if(type == 2)
    {
        printf("If borrower is opting to take EMI please enter 1 else please enter 2:-");
        scanf("%d",&emi_need);
        if(emi_need ==1)
        {
            printf("Please enter name of the borrower:- ");
            scanf("%s",&borrower[50]);
            printf("Please enter name of the lender:- ");
            scanf("%s",&lender[50]);
            printf("Please enter date of payment in form of dd/mm/yyyy:- ");
            scanf("%s",&date[15]);
            printf("Please enter the amount borrowed:- ");
            scanf("%f",&amount);
            printf("Please enter the interest:- ");
            scanf("%f",&interest);
            printf("Please enter the term of repayments in months:- ");
            scanf("%d",&term);
            interest= interest/(12*100);
            EMI =amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1);
            printf("Monthly installment is:- %f rs",EMI);
        }
    else if(emi_need==2)
        {
            printf("Please enter name of the borrower:- ");
            scanf("%s",&borrower[50]);
            printf("Please enter name of the lender:- ");
            scanf("%s",&lender[50]);
            printf("Please enter date of payment in form of dd/mm/yyyy:- ");
            scanf("%s",&date[15]);
            printf("Please enter the amount borrowed:- ");
            scanf("%f",&amount);
            printf("Please enter the interest:- ");
            scanf("%f",&interest);
            printf("Please enter the term of repayments in months:- ");
            scanf("%d",&term);
            interest= interest/(12*100);
            debt_amount =(amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1))*term;
            printf("Total amount to be paid is:- %f rs",debt_amount);
        }  
    }
    f=BILL();
    return 0;
}

int RECURRINGPAYMENT()
{
   int e;
   int otp3,otp4,amount1,timefrequency,bankno,upipin1;
   otp3=1000;
   printf("WELCOME TO RECURRING PAYMENT SECTION \n");
   char purpose1,select,agreement[20],subscription[20],temp7[]="agreed",temp8[]="subscribe";
   printf("ENTER AGREED IF YOU AGREE WITH THE TERMS AND CONDITIONS:- ");
   scanf("%s",agreement);
   if(strcmp(agreement,temp7)==0){
   printf("SETTING UP RECURRING PAYMENT\nPLEASE ENTER THE PURPOSE OF THE RECURRING PAYMENT");
   scanf("%s",&purpose1);
   printf("ENTER AMOUNT:- ");
   scanf("%d",&amount1);
   printf("CHOOSE TIME FREQUENCY[no. of days]:- ");
   scanf("%d",&timefrequency);
   printf("ENTER UPI PIN- ");
   scanf("%d",&upipin1);
   printf("ENTER THE RECEIVED OTP:- ");
   scanf("%d",&otp4);
   if(otp3==otp4){
   printf("AMOUNT PROCESSING\n");
   printf("PAYMENT SUCCESSFULLY AMOUNT SENT TO MERCHANT\n");
   printf("ENTER SUBSCRIBE TO LET THE RECURRING PAYMENT OCCUR   OR  ENTER STOP TO END THE RECURRING PAYMENT\n");
   scanf("%s",subscription);
   if(strcmp(subscription,temp8)==0){
       printf("SUBSCRIBED");
   }
   else{
       printf("NOT SUBSCRIBED");
   }
   }
   else{
       printf("OTP ENTERED IS WRONG");
   }
   }
   else{
    printf("OBEY THE TERMS AND CONDITIONS TO CONTINUE");
   } 
   e=DEBT();
   return 0;
}

int EXPENSETRACKER()
{
    printf("WELCOME TO EXPENSE TRACKER SECTION \n");
    int d;
    int x, i, cost, j;
    cost=0;
    j=0;
    printf("Enter number of products items you bought:- ");
    scanf("%d",&i);
    x=1;
    while(x<i){
        printf("Enter the price of item number %d:- ",x);
        scanf("%d",&j);
        cost=j+cost;
        x++;
    }
    printf("The total cost is:- %d\n", cost);
    if(cost>25000){
        if(cost>50000){
            if(cost>100000){
                printf("Reduce your expense\n");
            }else{
                printf("Your expense is too high\n");
            }

        }else{
            printf("Your expense is high\n");
        }
    }else{
        printf("Your expense is under limit\n");
    }
    d=RECURRINGPAYMENT();
    return 0;
}

int CHECK(char username[][60],char userpassword[][60],char usermail[][60],int number)
{
    printf("WELCOME TO CHECK SECTION \n");
    int c;
    char usernameL[25], usermailL[25], userpasswordL[25], usernameS[25], usermailS[25], userpasswordS[25], username1[25], usermail1[25], userpassword1[25];
    char credentials[10];
    char temp2[]="login";
    int i,otp,otp1=0,k,j,age;
    printf("ENTER LOGIN IF ACCOUNT EXISTS OR ENTER SIGNUP TO CREATE ACCOUNT:- ");
    scanf("%s",credentials);
    int c1=strcmp(credentials,temp2);
    if (strcmp(credentials,temp2)==0){
        printf("PLEASE ENTER YOUR USERMAIL:- ");
        scanf("%s",usermailL);
        printf("PLEASE ENTER YOUR USERPASSWORD:- ");
        scanf("%s",userpasswordL);
        k=0;
        for (i=0;i<=number;i++){
            if(strcmp(usermail[i],usermailL)==0){
                k++;
                j=i;
            }
        }
        for (i=0;i<=number & k==1;i++){
            if(strcmp(userpasswordL,userpassword[i])==0){
                k++;
                j=i;
            }
        }
        if (k==2){
            srand(time(NULL));
            otp=(rand()%(10000-1000));
            printf("otp-%d\n",otp);
            printf("PLEASE ENTER THE OTP YOU RECEIVED:- ");
            scanf("%d",&otp1);
            if (otp1==otp){
                printf("ACCOUNT SUCCESSFULLY LOGGED-IN\n");
                printf("LOGIN\n");
                printf("CONNECTED TO USERGROUP1\n");
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
    c=EXPENSETRACKER();
    return 0;
}

int ADMIN(char username[][60],char userpassword[][60],char usermail[][60],int number)
{
    int i,age,b;
    char temp1[number+1][60];
    printf("WELCOME TO ADMIN SECTION \n");
    printf("Enter Age Of Admin:- ");
    scanf("%d",&age);
    if(age>=16){
        printf("Enter The Name Of Admin:- ");
        scanf("%s",username[0]);
        printf("Enter The Email Of Admin:- ");
        scanf("%s",usermail[0]);
        printf("Enter The Password Of Admin:- ");
        scanf("%s",userpassword[0]);
        for(i=1;i<=number;i++){
            printf("Enter Age Of Group Member %d:- ",i);
            scanf("%d",&age);
            if(age>=16){
                printf("Enter The Name Of Member %d:- ",i);
                scanf("%s",username[i]);
                printf("Enter The Email Of Member %d:- ",i);
                scanf("%s",usermail[i]);
                printf("Enter The Password Of Member %d:- ",i);
                scanf("%s",userpassword[i]);
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
    if (number<2 || number>10){
        printf("MINIMUM NUMBER OF USERS IN A GROUP IS 2 AND MAXIMUM NUMBER OF USERS IN A GROUP IS 10\n");
        exit(0);
    }
    char username[number][60];
    char usermail[number][60];
    char userpassword[number][60];
    a=ADMIN(username,userpassword,usermail,number);
    printf("THANK YOU FOR USING THE SOCIAL MONEY MANAGEMENT TOOL");
    return 0;
}