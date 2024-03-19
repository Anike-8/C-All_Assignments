#include<stdio.h>
int main()
{
	int quantity,price=5;
	float total_price,discount,Total;

	printf("Enter the quantity=>");
	scanf("%d",&quantity);
	
	if(quantity>=30  &&  quantity<=50)
	{
		total_price=quantity*price;
		discount=(total_price*10)/100;
		Total=total_price-discount;
		printf("Total discount above 30kg =%0.2f",Total);
	}
	else
	{
		if(quantity>=50)
		{
			total_price=quantity*price;
            discount=(total_price*15)/100;
            Total=total_price-discount;
            printf("Total discount above 50kg =%0.2f",Total);
		}

	}

}

