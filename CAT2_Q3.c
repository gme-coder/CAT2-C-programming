#include <stdio.h>
int main(int argc, char** argv)
{
	float hours, grosspay, tax, increment, overtime, wage, netpay;
	
	//prompting use to enter hours worked and hourly wage
	printf("enter hours worked during the week:");
	scanf("%f",&hours);
	printf("enter hourly wage:");
	scanf("%f",&wage);
	
	// calculating overtime and increment
	overtime = hours-40;
	increment = overtime*(1.5*wage);
	if(hours<=40){grosspay = wage*hours;}
		else{grosspay =(40*wage)+increment;}
		
		//calculating tax
	if(grosspay<600)(tax = grosspay*0.15);
		else(tax =(grosspay-600)*0.2);
		
		//calculating the netpay
	netpay = grosspay - tax;
	
	
	//printing the output
	printf("grosspay: %.2f\n",grosspay);
	printf("tax: %.2f\n",tax);
	printf("netpay: %.2f\n",netpay);
	
	
	return 0;
}