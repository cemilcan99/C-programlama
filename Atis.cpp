#include <stdio.h>
int main()                  //10 ile 90 h yuksekliginden birakilan bir cisim her yere carptiginda 1/3 kadar sicriyor.Eger h<10 olursa sicramiyor
                           // Buna gore girilen h cm yükseklige göre sicrama sayisi ve aldigi toplam yol.
{
    
	float h;
	int i=0;
	printf("H degerini giriniz: ");
	scanf("%f",&h);

if(h>10&&h<90){
	
	float toplamy=0;
	
		
        for(;h>10&&h<30;){
       	toplamy=toplamy+h;
       	i++ ;
       	h=h/3;
       	if(h<10)
			toplamy=toplamy+h*3;
			
	    
		
		}
	for(;h>30||h>10;){
	    toplamy=toplamy+h;
	     i++ ;
	
	     h=h/3;
	     if (h==10)
			toplamy=toplamy+2*h; 
		else if(h<10)
			toplamy=toplamy+h*3;
			
		}
if(h<10)
toplamy=toplamy+h*2;
printf("sicrama:%d yol: %.2f",i,toplamy);
}
else 
printf("h degeri 10dan buyuk 90dan kucuk olmalidir");
	
}
