# include<stdio.h>
int main() {
    int a,b;
    char choice;


    printf("Enter your choice \n");
    printf("a. Addition \nb. subtraction \nc.Multiplication \nd.Division \n");
    scanf("%c",&choice);

    printf("Enter 2 integer numbers");
    scanf("%d %d, &a,&b");

         switch(choice)
         {
             case 'a':
                 printf("%d +%d = %d \n",a,b,(a+b));

            case 'b':
                 printf("%d-%d = %d \n",a,b,(a-b));
                 break;
            case 'c':
                printf("%d *%d =%d \n",a,b,(a*b));
                break;
            case 'd':
                if (b!= 0)
                 printf("%d/%d= %d \n", a,b,(a/b));
                else
                    printf("Number can't be divided by 0 \n");
                break;

            default:
                    printf("your entered wrong choice \n");
                    break;
          }

      return 0;

}













