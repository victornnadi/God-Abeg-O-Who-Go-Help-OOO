#include <cs50.h>
#include <stdio.h>

void draw(int n); //function declaration at top of code so that I can call it later

int main(void)
{
	int height = get_int("Height: ");
	
	draw(height); //assuming someone has built a function for draw
}

void draw(int n) // the function takes an integer n. Refer to how functions are declared in notes. Doesn't return a value, just creates an effect

{
for (int i = 0; i < n; i++) //defining the number of rows. keeping the convention that counting starts from 0 and ends at n, instead of 1 to <=n
	{
		for (int j = 0; j < i + 1; j++) //defining the number of columns on each row.
		{
			printf("#");
		}
		printf("\n");
	}
}
