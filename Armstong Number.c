#include <stdio.h>
#define MAX 100000
int main(){
	int a,b,c,d,e,f,g=0,h;
	int dizi[MAX],m;
	printf("---Armstong Sayi Bulma Robotu---\n\n");
	printf("Alt Araliginizi Giriniz.");
	scanf("%d",&a);
	printf("Ust Araliginizi Giriniz.");
	scanf("%d",&b);
	for(c=a;c<=b;c++){
							
	d=(c/1000);
	e=(c/100)%10;
	f=(c/10)%10;
	h=(c%10);
		if((d*d*d)+(e*e*e)+(f*f*f)+(h*h*h)==c){
		dizi[g]=c;
		g=g+1;		
			}			
	}
	printf("%d - % d Araligindaki Armstong Sayilarimiz:   ",a,b);
		for(m=0;m<g;m++){
		printf("%d\t",dizi[m]);
	}
	return 0;
}
