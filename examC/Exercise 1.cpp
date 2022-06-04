#include<stdio.h>

void checkInt(int &num, char text0[], char text1[], char text2[], char text3[]){
	int rc;
	char term;
	do{
		fflush(stdin);
		printf("%s", text0);
		rc = scanf("%d%c", &num, &term);
		if(rc<2 || term!='\n')
			printf("%s\n", text1);
		else if(num <= 99){
			printf("%s\n", text2);
		}else if(num > 999){
			printf("%s\n", text3);
		}
	}while(rc!=2);
}

int main() {
    int n;
	int tmp;
	checkInt (n, "Enter 3-digit integer: ", "Do not enter string here. Try again\n", "You have not entered all 3-digit integers, please re-enter!\n",
	"You have entered more than 3-digit integers, please re-enter!\n");
    printf("The number %d reads as: ", n);
    while(n != 0) {
        tmp = (tmp * 10) + (n % 10);
        n /= 10;
    } 
    while(tmp != 0) {
        switch(tmp % 10) {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }     
        tmp = tmp / 10;
    }
    return 0;
}
