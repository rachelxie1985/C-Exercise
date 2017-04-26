#include <stdio.h>
int i, pass;
decimal temp, nums[7];
int main() {
	printf("Enter 7 decimal numbers: ");
	for(i=0;i<7;i++) {
		scanf("%f", &nums[i]);
	}
	for(pass=0;pass<7;pass++) {
		for(i=0;i<6;i++) {
			if(nums[i] < nums[i+1]){
				temp = nums[i];
				nums[i] = nums[i+1];
				nums[i+1] = temp;
			}
		}
	}
	for(i=0;i<7;i++){printf("%f ", nums[i]);}
}