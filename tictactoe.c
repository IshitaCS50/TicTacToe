#include<stdio.h>
#include<cs50.h>
bool valid(int,int);

int main(void)
{
	printf("Let the games begin!!\nyour tictactoe table is below\nGood Luck Player A!!\n| | \n-------\n  | | \n-------\n  | | \n");
	
	printf("Player A's turn\n");

	int x; 
	int y;
	
	do
	{
		x=get_int("x: ");
		y=get_int("y: ");

		if (!valid(x,y))
		{
			printf("Please enter values between 1&3 you dumb shit!!!!\n");
		}

	}
	while(!valid(x, y));

	printf("User entered: (%i,%i)\n",x,y);
}

bool valid(int x, int y)
{
		return x>0 && x<4 &&
			y>0 && y<4;
}
//		1 2 3
// 1   | | 
//   -------   
// 2   | | 
//   -------  
// 3   | | 
//  
// Player A: 1, 2 ( , y) (horizontal, vertical)
// 
// 1   | | 
//   -------   
// 2  P| | 
//   -------  
// 3   | | 
//
//
