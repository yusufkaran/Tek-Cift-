//
//  main.c
//  Soru 1
//
//  Created by Yusuf Karan on 9.04.2020.
//  Copyright © 2020 Yusuf Karan. All rights reserved.
//
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int CiftSayi[10],TekSayi[10],RandomSayilar[10];         /// Diziler
    
    int *RandomSayilarPtr = &RandomSayilar[0];              /// Random Sayilarin Pointer'ini Tanimladim
    int *CiftPointer=&CiftSayi[0];                          /// Cift Sayilarin Pointer'ini Tanimladim
    int *TekPointer=&TekSayi[0];                            /// Tek Sayilarin Pointer'ini Tanimladim
    int i;
    int TekSayac=0;
    int CiftSayac=0;
    
    srand(time(NULL));                                      /// Rastgele Sayi Fonksiyonu
    for (i=0; i<10; i++) {                                  /// 10 Tane Rastgele Sayi Yapma Dongusu
        *(RandomSayilarPtr+i)= 1+rand()%100;                /// Rastgele Sayi Atiyor
        printf("%d", i+1);
        printf(". Random Sayi %d\n", RandomSayilar[i]);
    }
    printf("\nˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ\n\n");
    
    for (i=0; i<10; i++) {
        if (*(RandomSayilarPtr+i)%2!=0) {                   /// Sayinin Tek Cift Oldugunu Anlama
           *(TekPointer+TekSayac)=*(RandomSayilarPtr+i);
           ++TekSayac;
        }
        else{                                               /// Cift Sayilar Icin
           *(CiftPointer+CiftSayac)=*(RandomSayilarPtr+i);
           ++CiftSayac;
            
        }
    }
    
    for (i=0; i<TekSayac; i++) {                           /// Tek Sayilari Sirasi Ile Yazdirma
        printf("%d", i+1);
        printf(". Tek sayi: %d\n", *(TekPointer+i));
    }
    printf("\nˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆˆ\n");
    for (i=0; i<CiftSayac; i++) {                          /// Cift Sayilari Sirasi Ile Yazdirma
        printf("%d", i+1);
        printf(". Cift sayi: %d\n", *(CiftPointer+i));
    }
    
    
    return 0;
}


























