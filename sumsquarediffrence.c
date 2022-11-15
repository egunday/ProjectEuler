#include <stdio.h>
#include <stdlib.h>


int sum_of_the_squares(){
	int i = 0;
	int toplam = 0;
	int sonuc = 0;
	
	for(i = 0;i <= 100;i++){
		toplam = i * i;
		sonuc = sonuc + toplam;
	}
	return sonuc;
}
int square_of_the_sum(){
	int i = 0;
	int toplam = 0;
	
	for(i = 0;i <= 100;i++){
		toplam = toplam + i;
	}
	return (toplam * toplam);
}
int main() {
	int x = 0,y = 0;
	x = square_of_the_sum();
	y = sum_of_the_squares();
	printf("%d - %d = %d",x,y,x-y);
	return 0;
}
