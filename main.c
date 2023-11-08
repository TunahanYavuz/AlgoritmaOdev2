#include <stdio.h>
#include <math.h>
int main() {
    float n,p;
    double x,toplam=0,sonuc=0;
    scanf("%f%f",&n,&p);
    if(n<0||p<0){
        printf("Sayilar 0 dan buyuk olmalidir");
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        printf("Lutfen %d. x degerini giriniz\n",i);
        scanf("%lf",&x);
        double usSonucu =pow(x,p);
        printf("%lf\n",usSonucu);
        toplam+=usSonucu;

    }

    printf("\t%lf\n",toplam);
    sonuc= pow(toplam,1/p);
    printf("\t%lf",sonuc);
    return 0;
}
