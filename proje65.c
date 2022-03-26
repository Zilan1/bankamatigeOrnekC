#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char isim[10]="Ali";
	int parola=1234;
	int bakiye=1000;
	int secim;
	char istenilecekIsim[10];
	int istenilecekParola;
	int yatirilacakPara;
	int cekilecekPara;
	
	printf("~~~~~Bankamatige Hosgeldiniz~~~~~\n\n");
	
    printf("Isminizi Giriniz: ");
    scanf("%s",&istenilecekIsim);
	
	printf("Parolanizi Girin: ");
	scanf("%d",&istenilecekParola);
	
	if(strcmp(isim,istenilecekIsim)==0 && istenilecekParola==parola)
	{
		printf("Kullanici Bilgileriniz Eslesmistir.");
		printf("Asagidaki Islemlerden Birini Secin: \n[1]-Para Yatirma\n[2]-Para Cekme\n[3]-Kullanici Bilgileri\nYukardakilerden Birini Secin: ");
		scanf("%d",&secim);
		
		   if(secim==1)
		    {
		    	printf("Yatirilacak Para Miktarini Giriniz: ");
		    	scanf("%d",&yatirilacakPara);
		    	bakiye=bakiye+yatirilacakPara;
		    	printf("Para Yatirma Isleminiz Basariyla Gerceklesmistir.\nPara Yatirdiginiz Miktar: %d\nToplam Bakiye: %d",yatirilacakPara,bakiye);
			}
			
			else if(secim==2)
			{
				printf("Cekilecek Para Miktarini Giriniz: ");
				scanf("%d",&cekilecekPara);
				bakiye=bakiye-cekilecekPara;
				printf("Para Cekme Isleminiz Basariyla Gerceklesmistir.\nPara Cektiginiz Miktar: %d\nToplam Bakiye: %d",cekilecekPara,bakiye);
			}
			
			else if(secim==3)
			{
				printf("Kullanici Ara Yuzune Hosgeldiniz.\nKullanici Adiniz: %s\nSifreniz: %d\nHesabinizdaki Bakiye: %d\n",isim,parola,bakiye);
			}
			
			else 
			{
				printf("Yanlis Secim Yaptiniz. Lutfen Kontrol Ediniz!");
			}
	}
	else 
	{
		printf("Kullanici Bilgileriniz ya da Sifreniz Yanlistir.");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
