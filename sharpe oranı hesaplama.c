#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    float yatirim_faizi,risksiz_faiz_orani,standart_sapma;    // kullanıcıdan alınacak üç değer
	float risk_primi, sharpe_orani;
	
	printf("yatirim faizini giriniz");
	scanf("%f",&yatirim_faizi);
	
	printf("risksiz faiz oranini giriniz");
	scanf("%f",&risksiz_faiz_orani);
	
	printf("standart sapmayı giriniz");
	scanf("%f",&standart_sapma);
	
	//yatırım faizinden risksiz faiz oranını çıkararak risk primini hesaplıyoruz
	
	risk_primi = yatirim_faizi - risksiz_faiz_orani;
	printf("Risk primi: %.2f\n", risk_primi);
	
	//risk primini sttandart sapmaya bölerek sharpe oranını hesaplıyoruz
	
	sharpe_orani = risk_primi / standart_sapma;
    printf("Sharpe orani: %.2f\n", sharpe_orani);
    
    // Sharpe oranına göre değerlendirme
    
    if (sharpe_orani > 3) {
        printf("Degerlendirme: Mukemmel bir performans!\n");
    } 
    else if (sharpe_orani > 2) {
        printf("Degerlendirme: Cok iyi bir performans!\n");
    } 
    else if (sharpe_orani > 1) {
        printf("Degerlendirme: Iyi bir performans.\n");
    } 
    else if(sharpe_orani < 0) {
    	printf("Değerlendirme: negatif bir performans.\n");
	}


	return 0;
}

