#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int order = 0, time = 0;
	float cost = 0.0;
	printf("WELCOME TO FIIFI'S ICE CREAM SHOP\nWhat would you like to order\n");

	do
	{
		int flavour = 0, topping = 0, size = 0;
		printf("1- Vanilla\n2- Strawberry\n3- Chocolate\n4- Mango\n5 -Enquiries\n");
		scanf("%d", &flavour);

		switch (flavour) {
		case 1:
			printf("What size would you like:\n1- Small\n2- Large\n");
			scanf_s("%d", &size);
			if (flavour == 1) {
				if (size == 1) {
					printf("You ordered a small Vanilla ice cream");
					cost += 5;
					time += 2;
				}
				else
				{
					printf("You ordered a large Vanilla ice cream");
					cost += 8;
					time += 3;
				}
			}break;
		case 2:
			printf("What size would you like:\n1- Small\n2- Large\n");
			scanf("%d", &size);
			if (flavour == 2) {
				if (size == 1) {
					printf("You ordered a small Strawberry ice cream");
					cost += 5;
					time += 2;
				}
				else
				{
					printf("You ordered a large Strawberry ice cream");
					cost += 8;
					time += 3;
				}
			}break;
		case 3:
			printf("What size would you like:\n1- Small\n2- Large\n");
			scanf("%d", &size);
			if (flavour == 3) {
				if (size == 1) {
					printf("You ordered a small Chocolate ice cream");
					cost += 6;
					time += 2;
				}
				else
				{
					printf("You ordered a large Chocolate ice cream");
					cost += 9;
					time += 3;
				}
			}break;
		case 4:
			printf("What size would you like:\n1- Small\n2- Large\n");
			scanf("%d", &size);
			if (flavour == 4) {
				if (size == 1) {
					printf("You ordered a small Mango ice cream");
					cost += 7;
					time += 2;
				}
				else
				{
					printf("You ordered a large Mango ice cream");
					cost += 10;
					time += 3;
				}
			}break;
		case 5:
			printf("A customer service agent will be with you soon\n");
			break;
		default:
			printf("Invalid Flavour Entry\n");
		}

		int toppings = 0;
		do
		{
			printf("\nWhat toppings would you like:\n");
			printf("1-Sprinkles\n2- Whipped Cream\n3- Chopped Nuts\n4- Coconut Shavings\n");
			scanf("%d", &topping);

			switch (topping) {
			case 1:
				printf("Srpinkles");
				cost += 2;
				time += 1;
				++toppings;
				break;
			case 2:
				printf("Whipped Cream");
				cost += 3;
				time += 1;
				++toppings;
				break;
			case 3:
				printf("Chopped Nuts");
				cost += 4;
				time += 1;
				++toppings;
				break;
			case 4:
				printf("Coconut Shavings");
				cost += 5;
				time += 1;
				++toppings;
				break;
			case 5:
				if (topping == 5) {
					toppings = 0;
				}
				break;
			default:
				printf("Invalid topping entry\n");
				break;
			}
		} while (toppings <= 0);
		char choice[20];
		printf("\nWould you like anything else?\n1 - Yes\n2 - No\n");
		scanf("%s", choice);

		if (choice == "yes" || choice == "Yes") {
			++order;
		}
		else
		{
			order = 0;
			printf("Your order will be ready in %dmins, and your bill will be %fcedis\n", time, cost);
		}
		
	} while (order > 0);

	printf("Kindly wait for your order\n");

	int i;
	for (i = time; i >= 0; i--) {
		printf("%d\n", i);
	}
	printf("Here is your order\nThanks for coming to Fiifi's Ice Cream");



	return 0;
}