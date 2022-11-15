#include <stdio.h>
#include <stdlib.h>

int prime_number_finder(int x){
	int i;
	for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int find_gvn_prime_number(int x){
	int counter = -1,check = 0;
	
	while(counter != x){
		check++;
		if(prime_number_finder(check) != 1){
			counter++;
		}
			
	}
	
	return check;
}
int main() {
	int x = 0,y = 10001;
	x = find_gvn_prime_number(y);
	printf("%d ",x);
	return 0;
}
