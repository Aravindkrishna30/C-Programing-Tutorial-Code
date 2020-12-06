//ArmStrong number or not.
#include <stdio.h>
#include <stdlib.h>
int cube(int n)
{
	return(n*n*n);
}
int armstrongno(int n)
{
	int last_digit, sum = 0;
	int ori_no=n;
	while (n != 0) {
        last_digit = n % 10;
        sum = sum + cube(last_digit);
        n = n / 10;
    }
    if(sum==ori_no)
    	printf("\n%d is ArmStrong Number",ori_no);
    else
    	printf("\n%d is Not ArmStrong Number",ori_no);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    armstrongno(n);
	return 0;
}
