                                                            /**C program to print inverted half pyramid of integers**/
#include<stdio.h>
main()
{
    int row,i,j;        //i represents i'th row,  j represents no. of integers in i'th row
    printf("Enter number of rows: ");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%i ",j);
        }
        printf("\n");
    }
}
