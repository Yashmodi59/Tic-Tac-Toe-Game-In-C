
#include<stdio.h>
int main()
{
	int i,j,m,n,a[3][3]={0};
	printf("LET'S PLAY TIC TAC TOE........\n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("\t*");
		}
		printf("\n");
	}
	int k,b;
	printf("\nRules :- ");
	printf("\n1)\t Row and Column must be enter from 1, 2 and 3.");
	printf("\n2)\t Player 1 will play with 'O'");
		printf("\n2)\t Player 2 will play with 'X'");
		printf("\n\n\t\t\tLET's START THE GAME..........\n");
	for  ( k=1;k<=9;k++)
	{
		printf("Enter row= ");
		scanf ("%d",&m);
		printf("Enter column= ");
		scanf ("%d",&n);
		if(k%2==0)
		{
			a[m-1][n-1]=1;
		}
		else
		{
			a[m-1][n-1]=2;
		}
		for (i=0;i<=2;i++)
		{
			for (j=0;j<=2;j++)
			{
				
				if (a[i][j]==0)
				{
					printf("\t*");
				}
				else if (a[i][j]==1)
				{
					printf("\tO");
				}
				else
				{
					printf("\tX");
				}
				if (a[i][j]!=0)
				{
					if ((a[0][0]==a[1][1] && a[1][1]==a[2][2]) && (a[0][0]==1 || a[0][0]==2))
					{
						b=1;
					}
					else if ((a[2][0]==a[2][1] && a[2][1]==a[2][2]) && (a[2][0]==1 || a[2][0]==2))
					{
						b=1;
					}
					else if ((a[1][0]==a[1][1] && a[1][1]==a[1][2]) && (a[1][0]==1 || a[1][0]==2))
					{
						b=1;
					}
					else if ((a[0][0]==a[0][1] && a[0][1]==a[0][2]) && (a[0][0]==1 || a[0][0]==2))
					{
						b=1;
					}
					else if ((a[0][0]==a[1][0] && a[1][0]==a[2][0]) && (a[2][0]==1 || a[2][0]==2))
					{
						b=1;
					}
					else if ((a[1][0]==a[1][1] && a[1][1]==a[1][2]) && (a[1][0]==1 || a[1][0]==2))
					{
						b=1;
					}
					else if ((a[2][0]==a[2][1] && a[2][1]==a[2][2]) && (a[2][0]==1 || a[2][0]==2))
					{
						b=1;
					}
					else if ((a[0][2]==a[1][1] && a[1][1]==a[2][0]) && (a[2][0]==1 || a[2][0]==2))
					{
						b=1;
					}
					else
					{
						b=0;
					}
				}
			}
			printf("\n");
		
		}
		if (b==1)
		{
			printf("We have a winner");
			break;
		}
	}
	if (b==0)
	{
		printf("Game is tied");
	}
	return 0;
}

