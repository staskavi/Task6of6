#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int counter_letters = 0;
	int counter_numbers = 0;
	int counter_other = 0;
	printf("Enter char (for exit enter #)...");
	//ch = getchar();
	scanf_s(" %c",&ch);

	if (ch == 35)
	{
		printf("Exit. You have entered #!");
		return 1;
	}
	while (ch != 35)
	{
		
		if (ch >= 97 && ch <= 122)
		{
			counter_letters++;
		}
		else if (ch >= 48 && ch <= 57)
		{
			counter_numbers++;
		}
		else
		{
			counter_other++;
		}
		printf("Enter char (for exit enter #)... ");
		//ch = getchar();
		scanf_s(" %c", &ch);
	}
	printf("Number of small letters is %d\n Number of numbers is %d\n Number of other symbols is %d", counter_letters, counter_numbers, counter_other);
	return 0;
}