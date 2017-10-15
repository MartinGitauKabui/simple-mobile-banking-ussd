#include <stdio.h>

char login()
{
    char username,password;;
    printf("Enter username\n");
    scanf("%s\n",&username);
    printf("Enter password\n");
    scanf("%s\n",&password);
    return login;
}
int openaccount()
{
  char  name1,name2,newpassword;
    int ID,option;
        printf("Enter your First name\n");
        scanf("%s",&name1);
        printf("Enter your second name\n");
        scanf("%s",&name2);
        printf("Enter ID number\n");
        scanf("%d",&ID);
        printf("Enter newpassword\n");
        scanf("%s",&newpassword);

            printf("First Name :%s\n",&name1);
            printf("Second Name :%s\n",&name2);
            printf("ID number :%d\n",&ID);
            printf("Password :%s\n",&newpassword);
            printf("Please validate your details\n1.confirm\n2.cancel\n");
            scanf("%d",option);
            if(option==1)
            {
                return WithdrawDepositDelete();
            }
            else
            {
                return openaccount();
            }
        return openaccount();
}
int validatedetails()
{
    char name1,name2,newpassword;
    int ID;
   printf("Please validate your details\n");
            printf("First Name :%s\n",&name1);
            printf("Second Name :%s\n",&name2);
            printf("ID number :%d\n",&ID);
            printf("Password :%s\n",&newpassword);
            return validatedetails;
}

int WithdrawDepositDelete()
{
    int wdd,deposit,withdraw;
    char yesno;
    printf("1.Withdraw\n\n2.Deposit3.Delete account\n");

    switch (wdd)
    {
       case 1:
           printf("How much would you like to withdraw\n");
            scanf("%d",&withdraw);
            printf("You would successfully deposited %d\n",&deposit);
        case 2:
             printf("How much would you like to deposit\n");
            scanf("%d",&deposit);
            printf("You would successfully deposited %d\n",&deposit);
            break;
        case 3:
            printf("are you sure you want to delete account ?\n");
            scanf("%s",&yesno);
            if("yes")
            {
                printf("Account not deleted\n");
                return WithdrawDepositDelete();
            }
            else
            {
                printf("Account deleted successfully");
                return  main();
            }
        default:
            printf("Failed");
    }

}

int  main()
{
    int choice;
    printf("1.Log in\n2.Open an account\n");
    scanf("%d",&choice);

        switch(choice)
        {
           case 1:
            return login();
            return WithdrawDepositDelete();
        break;

        case 2:
            return openaccount();
            return validatedetails();
        break;

        default:
            printf("Failed");
            break;
        }

}
