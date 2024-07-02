#include <math.h>
#include <stdio.h>
int term,type,emi_need;
    float amount,debt_amount,interest;
    char username[50],date[15],borrower[50],lender[50];
    double EMI,r;
int main()
{
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
            EMI =amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1);
            printf("Monthly installment is rs%f",EMI);
        }
    else if(emi_need==2)
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
            debt_amount =(amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1))*term;
            printf("Total amount to be paid is rs%f",debt_amount);
        }
        
    }
    else if(type == 2)
    {
        printf("If borrower is opting to take EMI please enter 1 else please enter 2\n");
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
            printf("Monthly installment is rs%f",EMI);
        }
    else if(emi_need==2)
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
            debt_amount=(amount*interest* pow(1+interest,term)/(pow(1+interest,term)-1))*term;
            printf("Total amount to be paid is rs%f",debt_amount);
        }
        
    }
}