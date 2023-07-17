/*
 ============================================================================
 Name        : homework.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <math.h>

void first(char arr[]){
	int i=0;
	int a_counter=0;
	int e_counter=0;
	int u_was=0;
	int no_or_on=0;
	int plus_counter=0;
	int minus_counter=0;
	int plusminus=1;
	int plus_or_minus=0;
	int cplus_counter=0;
	int char_counter=0;
	int max_liter=0;
	int this_liter=0;
	int this_counter=0;
	int max_number=0;

	int this_num;
	int num_counter=0;
	while(arr[i]!='.'){

		if(arr[i]=='a'){a_counter++;}

		if(u_was==0){if(arr[i]=='e'){e_counter++;}}
		if(arr[i]=='u'){u_was++;}

		if(arr[i]=='n' && arr[i+1]=='o'){no_or_on++;}
		if(arr[i]=='o' && arr[i+1]=='n'){no_or_on++;}

		if(arr[i]=='-'){
			minus_counter++;
		if(plusminus==1){	if(plus_or_minus==1){plusminus=0;}
		plus_or_minus=1;
		}
		}
		if(arr[i]=='+'){
			 	plus_counter++;
				if(plusminus==1){	if(plus_or_minus==2){plusminus=0;}
				plus_or_minus=2;
				}
		}

		if(arr[i]=='c' && arr[i+1]=='+' && arr[i+2]=='+'){cplus_counter++;}

		if(arr[i]=='c' && arr[i+1]=='h' && arr[i+2]=='a' && arr[i+3]=='r'){char_counter++;}

		if(arr[i]=='a'){
			this_liter=1;
			this_counter=i;
			while(this_counter!=0){
				if(this_liter>25){this_counter=0;}
				if(arr[this_counter+1]-arr[this_counter]==1){this_liter++;}else{this_counter=0;}


				if(this_counter!=0){this_counter++;}
			}
			if(this_liter>max_liter){max_liter=this_liter;}
			this_liter=0;
			}

		if ((arr[i]=='0')||(arr[i]=='1')||(arr[i]=='2')||(arr[i]=='3')||
		(arr[i]=='4')||(arr[i]=='5')||(arr[i]=='6')||(arr[i]=='7')||(arr[i]=='8')||(arr[i]=='9')){
			char this_number[42];

			this_num=i+1;
			this_number[num_counter]=arr[i];
			num_counter++;
			while(this_num!=0){
				if ((arr[this_num]=='0')||(arr[this_num]=='1')||(arr[this_num]=='2')||(arr[this_num]=='3')||
						(arr[this_num]=='4')||(arr[this_num]=='5')||(arr[this_num]=='6')||
						(arr[this_num]=='7')||(arr[this_num]=='8')||(arr[this_num]=='9')){
				this_number[num_counter]=arr[this_num];
				num_counter++;
				this_num++;
				}else{this_num=0;}
			}
			if(strtol(this_number, NULL, 10)>max_number){max_number=strtol(this_number, NULL, 10);}

			num_counter=0;
			for(int i=0;i<42;i++){
				this_number[i]='a';
			}
		}

		i++;
	}
	printf("количество а: ");
	printf("%d\n",a_counter);
	printf("количество e: ");
	printf("%d\n",e_counter);
	printf("количество on или no: ");
	printf("%d\n",no_or_on);
	if(plusminus==1 && plus_counter>0 && minus_counter>0){printf("чередуются\n");}else{printf("нечередуются\n");}
	printf("количество минусов: ");
	printf("%d\n",minus_counter);
	printf("количество плюсов: ");
	printf("%d\n",plus_counter);
	printf("количество c++: ");
	printf("%d\n",cplus_counter);
	printf("количество char: ");
	printf("%d\n",char_counter);
	printf("максимальная длинна начала алфавита: ");
	printf("%d\n",max_liter);
	printf("максимальное число: ");
		printf("%d\n",max_number);

}

void second(char arr[]){
	char str[strlen(arr)*2];
	int i=0;
	int j=0;
	int star_counter=0;
	char numbers[42];
	int number_counter=0;
	while(arr[i]!='.'){
	//	if(arr[i]=='?'){str[j]='!';j++;}else if(arr[i]=='-'){}else if(arr[i]=='&'){str[j]='&';j++;str[j]='&';j++;}else{str[j]=arr[i]; j++;}
	//	if(arr[i]=='t' && arr[i+1]=='h' && arr[i+2]=='e'){i=i+3;}
	//	if(arr[i]>96 && arr[i]<123){str[j]=arr[i];j++;}

	//	if(arr[i]>64 && arr[i]<91){str[j]=arr[i]+32;j++;}

	/*	if(arr[i]=='+'){str[j]='+';j++;
		while(arr[i]=='+'){
			i++;
		}
		i--;
		} */

	/*	if(arr[i]=='*'){
				while(arr[i]=='*'){
					i++;
					star_counter++;
				}
				if(star_counter>1){
					int st=star_counter/2;
					for(int k=0;k<st;k++){str[j]='*';j++;}
				}else{str[j]='*';j++;}
				i--;
				star_counter=0;
				} */

	/*	if (arr[i]=='0'){
			numbers[0]='0';
			number_counter=1;
				while((arr[i]=='0')||(arr[i]=='1')||(arr[i]=='2')||(arr[i]=='3')||
						(arr[i]=='4')||(arr[i]=='5')||(arr[i]=='6')||(arr[i]=='7')||(arr[i]=='8')||(arr[i]=='9')){
					numbers[number_counter]=arr[i];
					number_counter++;
					i++;

				}
				numbers[number_counter]='.';

				int l=0;
				while(numbers[l]!='.'){
					if(numbers[l]=='0' && numbers[l+1]=='0'){l++;}else if(numbers[l]=='0' && numbers[l+1]!='.'){l++;} else{str[j]=numbers[l];j++;l++;}
				}


			i--;
			} */

		if (arr[i]=='{'){
					while((arr[i]!='}')){
							i++;
						}
					i++;
					}


		if(arr[i]=='c' && arr[i+1]=='h' && arr[i+2]=='i' && arr[i+3]=='l' && arr[i+4]=='d'){i=i+4;str[j]='c';j++;str[j]='h';j++;str[j]='i';j++;str[j]='l';j++;str[j]='d';j++;str[j]='r';j++;str[j]='e';j++;str[j]='n';j++;}else

		if ((arr[i]=='0')||(arr[i]=='1')||(arr[i]=='2')||(arr[i]=='3')||
				(arr[i]=='4')||(arr[i]=='5')||(arr[i]=='6')||(arr[i]=='7')||(arr[i]=='8')||(arr[i]=='9')){
					numbers[0]='0';
					number_counter=1;
						while((arr[i]=='0')||(arr[i]=='1')||(arr[i]=='2')||(arr[i]=='3')||
								(arr[i]=='4')||(arr[i]=='5')||(arr[i]=='6')||(arr[i]=='7')||(arr[i]=='8')||(arr[i]=='9')){
							numbers[number_counter]=arr[i];
							number_counter++;
							i++;

						}
						numbers[number_counter]='.';

						int l=0;
						while(numbers[l]!='.'){
							if(numbers[l+1]-numbers[l]==1){ str[j]=numbers[l];j++;}else if(numbers[l]-numbers[l-1]==1){str[j]=numbers[l];j++;}else{break;}
							l++;
						}

i--;
					}else{str[j]=arr[i];j++;}




		i++;
	}


	str[j]='\0';
	printf("%s\n",str);
}

void second_second(char arr[]){
	char str[strlen(arr)*2];
	int i=0;
	int j=0;
	while(arr[i]!='$'){

		if(arr[i]=='.' && (arr[i+1]>47 && arr[i+1]<58 ) && (arr[i+2]>47 && arr[i+2]<58 )){
			str[j]=arr[i];j++;
			i++;
			str[j]=arr[i];j++;
			i++;
			str[j]=arr[i];j++;
			i++;

			while((arr[i]>47 && arr[i]<58 )){
									i++;
								}
i--;
							}else{str[j]=arr[i];j++;}


		i++;}
	str[j]='\0';
	printf("%s\n",str);}

unsigned int third(unsigned int n) {
    if (n==0) {
        return 1;
    } else {
        return n*third(n-1);
    }
}
double fourth(double x, int n){
	if(n==0){return 1;}
else if(n>0){return x*fourth(x,n-1);}
	else{return 1/fourth(x,(n*(-1)));}
}
int five(int arr[]) {
	for (int i=1; i<strlen(arr);i++) {
		if(arr[i] < arr[i - 1]) {
			return 0;
		}
	}
	return 1;
}
int six(int arr[],  int x) {

    for (int i=0;i<strlen(arr);i++) {
        if (arr[i]==x) {
            return i;
        }
    }
    return -1;
}
int seven(int arr[], int n) {
	int m=n-1;
	int sum=0;
	for (int i=0; i<n;i++) {
		if (arr[i]<0) {
			m=i;
			break;
		}
	}
	int tmp=1;
	for (int i=0; i<m;i++) {
		tmp *=arr[i];
		if (tmp==0) {
			return sum;
		}
		sum+=tmp;
	}
	return sum;
}

int eighth(int arr[], int n) {
	int res = INT_MIN;

	for (int i = 0, j = n - 1 - i; i <= (n - 1) / 2; i++, j--) {
		int tmp = arr[i] + arr[j];
		if (tmp > res) {
			res = tmp;
		}
	}

	return res;
}


void ten(int arr[], int n) {
    int i, j, maxIndex, temp;
    for (i = n-1; i>0;i--) {
        maxIndex=0;

        for (j =1; j<=i;j++) {
            if (arr[j]>arr[maxIndex]) {
                maxIndex=j;
            }
        }
        temp=arr[maxIndex];
        arr[maxIndex]=arr[i];
        arr[i]=temp;
    }
}


void ten_b(int arr[], int n) {
    int i, j, temp;
    for (i=0;i<n-1;i++) {
        for (j=0; j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(void) {
first("rgenuhwnc++c++-oc++oocabcdeh235a9rac+hg35135fonigheabc.");
second("?childth1{23e05}1e.");

second_second("a+12.3456-b-0.456789+1.3-45678");
//3 задание
/*  for(int i = 1; i <= 10; i++) {
		printf("%u! = %u\n", i, third(i));
	}
float a=5;
printf("%f\n", fourth(a,3));
*/
	return EXIT_SUCCESS;

}
