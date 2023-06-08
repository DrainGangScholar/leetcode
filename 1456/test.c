#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		return 1;
	return 0;
}


int maxVowels(char * s, int k){
	int max_number=0;
	int curr_number=0;
	int length=strlen(s);
	for(int i=0;i<length-k;i++) {
		curr_number+=isVowel(s[i]);
		if(i>=k)
			curr_number-=isVowel(s[i-k]);
		if(curr_number>max_number)
			max_number=curr_number;
		curr_number=0;
	}
	return max_number;
}

int main(int argc,char* argv[]){
	int k=3;
	char s[]="hello world";
	printf("%d\n",maxVowels(s,k));
}
