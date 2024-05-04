//fourNineteen.c
//A program that find the total amount of products sold

#include <stdio.h>

int main(){
    int prodNum; 
    double prices[] = {2.98, 4.50, 9.98, 4.49, 6.87};
    float quantity, price, total, subtotal = 0;

    printf("Product Number\tRetail Price\n");
    printf("1\t\t$2.98\n");
    printf("2\t\t$4.50\n");
    printf("3\t\t$9.98\n");
    printf("4\t\t$4.49\n");
    printf("5\t\t$6.87\n");
    printf("Enter any number other than 1-5 to exit\n\n");

    printf("Please enter the product number: ");
    scanf("%d", &prodNum);

    while(prodNum > 0 && prodNum < 6){
        printf("Please enter the quantity sold: ");
        scanf("%f", &quantity);

        switch (prodNum){
        case 1:
            price = prices[0];
            break;
        case 2:
            price = prices[1];
            break;
        case 3:
            price = prices[2];
            break;
        case 4:
            price = prices[3];
            break;
        case 5:
            price = prices[4];
            break;
        
        default:
            break;
        }

        total = price * quantity;
        printf("\nTotal amount of product %d sold is $%.02f\n\n", prodNum, total);
        subtotal += total;

        printf("Please enter the product number: ");
        scanf("%d", &prodNum);
    }

    printf("The total value of products sold is: $%.02f\n", subtotal);

    return 0;
}