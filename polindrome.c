//find largest polindrome product
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int reverse(int number){
	int arr[7];
	int i = 0,say = 0,z;
	while( number > 0 ){
		arr[i] = number % 10;
		number = number / 10;
		i++;
	}
	arr[i] = '\0';
	for(z = 0;z < i;z++){
		say = say * 10;
		say = say + arr[z];
			
	}
	return say;
}
bool chechk(int t){
	int tmp = 0;
	int num1;
	int num2;
	num1 = t;
	num2 = reverse(t);
	if(num1 == num2)
		return 1;
	return 0;
}
/*int pr(int z){
	int tmp = 0;
	
	while(z > 0){
		tmp = z %10;
		z = z / 10;
	}
	return tmp;
}*/
int	calc(){
	int number,nums,max = 0,x = 0;
	
	for(number = 100;number < 999;number++){
		
		for(nums = 100;nums < 999;nums++){
			x = number * nums;
			if(chechk(x) == 1){
				if(max < x)
					max = x;
			}
		}
	}
	return max;
}
int main(void) {
	int f;
	f = calc();
	printf("sonuc = %d",f);
	return 0;
}
