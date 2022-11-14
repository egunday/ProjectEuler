#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int	calculation(){
	int number = 0;
	int nums = 0,ngv = 0,pztf = 0,z;
	int iter;
	bool ch = 0;
	while(ch != 1){
		number++;
		if(number % 2520 == 0 && number % 11 == 0 && number % 13 == 0 && number % 14 == 0 
		&& number % 16 == 0 && number % 17 == 0 && number % 19 == 0 && number % 20 == 0){
			ch = 1;
		}
			
	}
	return number;
}
int main(void) {
	int f;
	f = calculation();
	printf("sonuc = %d",f);
	return 0;
}
