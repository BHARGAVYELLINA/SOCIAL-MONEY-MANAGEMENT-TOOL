#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int REMINDER()
{
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

int PAYMENTPAGE(char borrower[],char lender[],char date[],int amount,int interest,int term,int debt_amount)
{
    int g;
    char paymenttype[10], paymentmode[10];
    int cardno,otp,otp2,paymentamount,i,upino,cardpin,upipin,x=0;
    printf("REDIRECTED TO DEBT PAYMENT GATEWAY\n");
    /* printf("YOUR BILL PAYMENT DETAILS:- \n");
    for (i=0;i<11;i=i+2){
        printf("%d = %d\n",billinfo[i],billinfo[i+1]);
    } */
    printf("YOUR DEBT DETAILS:- ");
            printf("Name of the borrower:- %s",borrower);
            printf("\nName of the lender:- %s",lender);
            printf("\nDate of payment in form of dd/mm/yyyy:- %s",date);
            printf("\nAmount borrowed:- %d",amount);
            printf("\nInterest:- %d",interest);
            printf("\nTerm of repayments in months:- %d",term);
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
    g=REMINDER();
    return 0;
}

int DEBT()
{   
    int f;
    int term,type,emi_need;float amount,debt_amount,interest;char username[50],date[15],borrower[50],lender[50];double EMI,r;
    printf("Enter 1 to borrow money else enter 2 to lend money\n");
    scanf("%d",&type);
    if(type ==1)
    {
        printf("If you are opting to take EMI please enter 1 else please enter 2\n");
        scanf("%d",&emi_need);
        if(emi_need ==1)
        {
            printf("Please enter name of the borrower:");
            scanf("%s",&borrower[50]);
            printf("\nPlease enter name of the lender:");
            scanf("%s",&lender[50]);
            printf("\nPlease enter date of payment in form of dd/mm/yyyy:");
            scanf("%s",&date[15]);
            printf("\nPlease enter the amount borrowed:");
            scanf("%f",&amount);
            printf("\nPlease enter the interest:");
            scanf("%f",&interest);
            printf("\nPlease enter the term of repayments in months:");
            scanf("%d",&term);
            interest= interest/(12*100);
            EMI =amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1);
            printf("Monthly installment is rs%f\n",EMI);
        }
    else if(emi_need==2)
        {
            printf("Please enter name of the borrower:");
            scanf("%s",&borrower[50]);
            printf("\nPlease enter name of the lender:");
            scanf("%s",&lender[50]);
            printf("\nPlease enter date of payment in form of dd/mm/yyyy:");
            scanf("%s",&date[15]);
            printf("\nPlease enter the amount borrowed:");
            scanf("%f",&amount);
            printf("\nPlease enter the interest:");
            scanf("%f",&interest);
            printf("\nPlease enter the term of repayments in months:");
            scanf("%d",&term);
            interest= interest/(12*100);
            debt_amount =(amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1))*term;
            printf("Total amount to be paid is rs%f\n",debt_amount);
        }
        
    }
    else if(type == 2)
    {
        printf("If borrower is opting to take EMI please enter 1 else please enter 2:-");
        scanf("%d",&emi_need);
        if(emi_need ==1)
        {
            printf("Please enter name of the borrower:");
            scanf("%s",&borrower[50]);
            printf("\nPlease enter name of the lender:");
            scanf("%s",&lender[50]);
            //please enter in date double Quotes
            printf("\nPlease enter date of payment in form of dd/mm/yyyy:");
            scanf("%s",&date[15]);
            printf("\nPlease enter the amount borrowed:");
            scanf("%f",&amount);
            printf("\nPlease enter the interest:");
            scanf("%f",&interest);
            printf("\nPlease enter the term of repayments in months:");
            scanf("%d",&term);
            interest= interest/(12*100);
            EMI=amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1);
            printf("Monthly installment is rs%f\n",EMI);
        }
    else if(emi_need==2)
        {
            printf("Please enter name of the borrower:- ");
            scanf("%s",&borrower[50]);
            printf("Please enter name of the lender:- ");
            scanf("%s",&lender[50]);
            //please enter in date double Quotes
            printf("Please enter date of payment in form of dd/mm/yyyy:- ");
            scanf("%s",&date[15]);
            printf("Please enter the amount borrowed:- ");
            scanf("%f",&amount);
            printf("Please enter the interest- :");
            scanf("%f",&interest);
            printf("Please enter the term of repayments in months:- ");
            scanf("%d",&term);
            interest= interest/(12*100);
            debt_amount=(amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1))*term;
            printf("Total amount to be paid is:- %f rs",debt_amount);
        }
        
    }
    f=PAYMENTPAGE(borrower,lender,date,amount,interest,term,debt_amount);
    return 0;
}

int RECURRINGPAYMENT()
{
   int e;
   int otp3,otp4,amount1,timefrequency,bankno,upipin1;
   otp3=1000;
   printf("WELCOME TO RECURRING PAYMENT SECTION: \n");
   char purpose1,select,agreement[20],subscription[20],temp7[]="agreed",temp8[]="subscribe";
   printf("ENTER AGREED IF YOU AGREE WITH THE TERMS AND CONDITIONS :\n");
   scanf("%s",agreement);
   if(strcmp(agreement,temp7)==0){
   printf("SETTING UP RECURRING PAYMENT\nPLEASE ENTER THE PURPOSE OF THE RECURRING PAYMENT");
   scanf("%s",&purpose1);
   printf("ENTER AMOUNT: \n");
   scanf("%d",&amount1);
   printf("CHOOSE TIME FREQUENCY[no. of days]: \n");
   scanf("%d",&timefrequency);
   printf("ENTER UPI PIN");
   scanf("%d",&upipin1);
   printf("ENTER THE RECEIVED OTP \n");
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
    int d;
    int x, i, cost, j;
    cost=0;
    j=0;
    printf("Enter number of products items you bought\t");
    scanf("%d",&i);
    x=1;
    while(x<i){
        printf("Enter the price of item number %d\n",x);
        scanf("%d",&j);
        cost=j+cost;
        x++;
    }
    printf("The total cost is %d\n", cost);
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
    int c;
    char usernameL[25], usermailL[25], userpasswordL[25], usernameS[25], usermailS[25], userpasswordS[25], username1[25], usermail1[25], userpassword1[25];
    char credentials[10];
    char temp1[]="login",temp2[25],temp3[25],temp4[25];
    int i,otp,otp1,k,j,age;
    printf("ENTER LOGIN IF ACCOUNT EXISTS OR ENTER SIGNUP TO CREATE ACCOUNT:- ");
    scanf("%s",credentials);
    if (strcmp(credentials,temp1)==0){
        printf("PLEASE ENTER YOUR USERNAME:- ");
        scanf("%s",usernameL);
        printf("PLEASE ENTER YOUR USERMAIL:- ");
        scanf("%s",usermailL);
        printf("PLEASE ENTER YOUR USERPASSWORD:- ");
        scanf("%s",userpasswordL);
        /* strcpy(temp2,usernameL);
        strcpy(temp3,usermailL);
        strcpy(temp4,userpasswordL); */
        k=0;
        i=0;
        while(i<=number && k==0){
            if (username[i]==usernameL){
                printf("%s\n",usernameL);
                j=i;
                k++;
            }
            else{printf("failed1\n");}
            i++;   
        }
        while(i<=number && k==1){
            if (usermail[i]==usermailL){
                printf("%s\n",usermailL);
                k++;
        }
            else{printf("failed2\n");}
            i++;   
        }
        while(i<=number && k==2){
            if (userpassword[i]==userpasswordL){
                printf("%s\n",userpasswordL);
                k++;
        }
            else{printf("failed3\n");}
            i++;   
        }
        
        /* for (i=0;i<=number & k==0;i++){
            printf("c1:- %d\n",strcmp(username[i],temp2));
            if(strcmp(username[i],temp2)==49){
                k++;
                j=i;
            }
        }
        for (i=0;i<=number & k==1;i++){
            printf("c2:- %d\n",strcmp(usermail[i],temp3));
            if(strcmp(usermail[i],temp3)==-15){
                k++;
                j=i;
            }
        }
        for (i=0;i<=number & k==2;i++){
            printf("c3:- %d\n",strcmp(userpassword[i],temp4));
            if(strcmp(userpassword[i],temp4)==10){
                k++;
                j=i;
            }
        } */
        
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
    }
    else {
        printf("PLEASE ENTER YOUR AGE:- ");
        scanf("%d",&age);
        if (age>=16){
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
        }
    }
    c=EXPENSETRACKER();
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
    printf("THANK YOU FOR USING SOCIAL MONEY MANAGEMENT TOOL");
    return 0;
}

