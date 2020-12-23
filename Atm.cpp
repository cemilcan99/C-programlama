#include <stdio.h>
int main()
{
	int islem;
	int bakiye=1000;
	int tutar;
	printf("1.Para yatirma\n2.Para cekme\n3.Havale Yapma\n4.Bakiye sorgulama\n5.Kart iade\nYapmak istediginiz islemi seciniz:");
	scanf("%d",&islem);
	switch (islem)
	{
		case 1:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Yatirmak istediginiz tutar:");
			scanf("%d",&tutar);
			bakiye+=tutar;
			printf("Islem basarili...\n%d TL hesabiniza yatirildi.\nYeni Bakiyeniz:%d",tutar,bakiye);
			break;
			
			
			
		
		case 2:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Cekmek istediginiz tutar:");
			scanf("%d",&tutar);
			if (tutar>bakiye)
			{
				printf("Yetersiz bakiye");
				break;
			}
			bakiye-=tutar;
			printf("Islem basarili...\n%d TL cekildi.\nYeni Bakiyeniz:%d",tutar,bakiye);
			break;
		
		case 3:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Havale yapmak istediginiz tutar:");
			scanf("%d",&tutar);
			if (tutar>bakiye)
			{
				printf("Yetersiz bakiye");
				break;
				
			}
			bakiye-=tutar;
			printf("Islem basarili...\n%d TL havale edildi.\nYeni Bakiyeniz:%d",tutar,bakiye);
			break;
		
		case 4:
			printf("Bakiyeniz:%d",bakiye);
			break;
		
		case 5:
			printf("Islem basarili...\nKartiniz iade edildi.");
			break;
		
		default:
			printf("Bilinmeyen islem kodu.");
			break;
	}
	
	
	
	
	
	return 0;
}
