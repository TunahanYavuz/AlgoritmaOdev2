#include <stdio.h>
#include <math.h>
int main() {
    printf("Bir Vektorun p-Normunu Yazdiran Programa Hos Geldiniz.\nBu Programda Sizden Birer Tam Sayi n ve p Degeri, ve Girdiginiz n Degeri Kadar x Degeri Alinacaktir.\n");
    float n,p;
    double x,sum=0,result=0,resultOfExponent;
    printf("Lutfen Bir n Sonra p Degeri Giriniz\n");
    takeN:
    if(scanf("%f",&n)!=1){
        fflush(stdin);
        goto takeN;
    }
    takeP:
    if(scanf("%f",&p)!=1){
        fflush(stdin);
        goto takeP;
    }
    if(n<0||p<=0){                                  //Girilen sayıların hatalı olup olmadığını kontrol ediyoruz, öyleyse uyarı mesajıyla programı sonlandırıyoruz.
        printf("Hatali Tuslama Yaptiniz");
        return 1;
    }

    for (int i = 1; i <= n; ++i) {                                 //for döngüsüyle girilen n değeri kadar x değeri istiyoruz.
        printf("Lutfen %d. x Degerini Giriniz\n",i);
        scanf("%lf",&x);
        resultOfExponent =pow(x,p);                             //Girilen her x değerinin verilen p değeri kadar üssünü alıyoruz.
        printf("%lf\n",resultOfExponent);
        sum+=resultOfExponent;                                     //Her üs sonucu topluyoruz.

    }

    printf("Toplam Ussu Alinan x Degerlerinin Toplami:\n\t%lf\n",sum);         //Üs sonuçlarının toplamını yazdırıyoruz.
    result= pow(sum,1/p);                                                       //Toplam değerin 1/p' inci kökünü alıyoruz.
    printf("Sonuc:\n\t%lf",result);                                               //Sonucu yazdırıyoruz ve programı kapatıyoruz.
    return 0;
}
