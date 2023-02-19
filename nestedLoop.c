#include <stdio.h>
#include <stdlib.h>


void ketma_ketlik(int n){         // n = 5
    float a=0, b;                 // return 1 + 1/2 + 1/3 + 1/4 + 1/5
    for(float i=1; i<=n; i=i+1){
        b = 1/i;
        a = a + b;
    }
    printf("1 + 1/2 + 1/3 + ... + 1/%d = %f\n", n, a);
}


void tortburchak(int x){            // x = 4
    for(int i=0; i<x; i=i+1){       // ****
        for(int j=0; j<x; j=j+1){   // ****
            printf("*");            // ****
        }                           // ****
        printf("\n");
    }
}


void sonlar_juftligi(int x){                    // x = 9;
    for(int i=0; i<=x; i=i+1){                  // (0,0) (0,1) (0,2) ........... (0,9)
        for(int j=0; j<=x; j=j+1){              // (1,0) (1,1) (1,2) ........... (1,9)
            printf("(%.1f)  ", i+(float)j/10);    //                            ...........
        }                                       //                            ..........
        printf("\n");                           //                            ..........
    }                                           // (9,0) (9,1) (9,2) ........... (9,9)
}


void sonlar_juftligi_2(int x){          // x = 9;   //   (0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7) (0,8) (0,9)    
    for(float i=0; i<=x; i=i+1){                    //   (1,0)
        if(i==0 || i==x){                           //   (2,0)
            for(int j=0; j<=x; j=j+1){              //   (3,0)
                printf("(%.1f)  ", i+(float)j/10);  //   (4,0)
            }                                       //   (5,0)
        }                                           //   (6,0)
        printf("(%.1f)\n", i);                      //   (7,0)
    }                                               //   (8,0)
}                                                   //   (9,0) (9,1) (9,2) (9,3) (9,4) (9,5) (9,6) (9,7) (9,8) (9,9)


void sonlar_juftligida_ustunlar(int x){  // x = 9;      // (0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7) (0,8) (0,9)
    for(float i=0; i<=x; i=i+1){                        // (1,0)         (1,2)          (1,4)         (1,6)          (1,8)  
        if(i==0 || i==x){                               // (2,0)         (2,2)          (2,4)         (2,6)          (2,8)  
            for(float j=0; j<=x; j=j+1){                // (3,0)         (3,2)          (3,4)         (3,6)          (3,8) 
                printf("(%.1f)  ", i+(float)j/10);      // (4,0)         (4,2)          (4,4)         (4,6)          (4,8) 
            }                                           // (5,0)         (5,2)          (5,4)         (5,6)          (5,8)  
        }else{                                          // (6,0)         (6,2)          (6,4)         (6,6)          (6,8)   
            for(int j=0; j<x; j=j+1){                   // (7,0)         (7,2)          (7,4)         (7,6)          (7,8)  
                if(j%2==0){                             // (8,0)         (8,2)          (8,4)         (8,6)          (8,8) 
                    printf("(%.1f)  ", i+(float)j/10);  // (9,0) (9,1) (9,2) (9,3) (9,4) (9,5) (9,6) (9,7) (9,8) (9,9)
                }
            }
        }
        printf("\n");
    }
}


void sonlar_royxati(int x){
    for(int i=0; i<x; i=i+1){
        for(int j=0; j<x; j=j+1){
            printf("%d ", j+i*10);
        }
        printf("\n");
    }
}


void diaganal(int x){               // x = 5;
    for(int i=0; i<x; i=i+1){       // *
        for(int j=0; j<=i; j=j+1){  //  *
            if(j==0) continue;      //   *
            else printf(" ");       //    *     
        }                           //     *
        printf("*\n");              
    }
}


void teskari_diaganal(int x){    // x=5;
    for(int i=x; i>=0; i=i-1){   //      *
        for(int j=i; j>0; --j){  //     *
            printf(" ");         //    *
        }                        //   *
        printf("*\n");           //  *
    }
}


void sonlar_diaganali(int x){               // x = 5;
    for(int i=0; i<=x; i=i+1){              // 0.0
        for(int j=0; j<=i; j=j+1){          //  1.1
            printf(" ");                    //   2.2
        }                                   //    3.3
        printf("%.1f\n", i*(float)1.1);     //     4.4
    }                                       //      5.5
}


void uchburchak1(int x){                         // x=5;
    for(int i=0; i<x; ++i){                     // *
        for(int j=0; j<=i; ++j) printf("*");    // **
        printf("\n");                           // ***
    }                                           // ****
}                                               // *****


void teskari_uchburchak1(int x){     // x=5;
    for(int i=x; i>0; --i){         // *****
        for(int j=0; j<=i; ++j){    // ****
            printf("*");            // ***
        }                           // **
        printf("\n");               // *
    }
}


void sonlar_uchburchagi(int x){     // x=5
    for(int i=1; i<=x; ++i){        // 1
        for(int j=1; j<=i; ++j){    // 12
            printf("%d", j);        // 123
        }printf("\n");              // 1234
    }                               // 12345
}


void sonlar_uchburchagi_tartibli(int x){  // x=5
    for(int i=1; i<=x; ++i){              // 1
        for(int j=1; j<=i; ++j){          // 22
            printf("%d", i);              // 333
        }printf("\n");                    // 4444
    }                                     // 55555
}


void parallelogram(int x){          // x=5;
    for(int i=0; i<x; ++i){         // *****
        for(int j=0; j<i; ++j){     //  *****
            printf(" ");            //   *****
        }                           //    *****
        for(int k=0; k<x; ++k){     //     *****
            printf("*");
        }
        printf("\n");
    }
}


void tortburchak_qolibli(int x){                // x=5;
    for(int i=0; i<x; ++i){                     // *****
        if(i==0 || i==x-1){                     // *   *
            for(int j=0; j<x; ++j) printf("*"); // *   *
        }                                       // *   *
        else{                                   // *****
            for(int j=0; j<x; ++j){
                if(j==0 || j==x-1) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
}


void diaganal_va_uchburchaklar(int x){  // x=5;
    for(int i=0; i<x; ++i){             // *++++
        for(int j=0; j<=i; ++j){        // -*+++
            if(j==0) continue;          // --*++
            else printf("-");           // ---*+
        }                               // ----*
        printf("*");
        for(int j=x-2; j>=i; --j){
            if(j==i) printf("+\n");
            else printf("+");
        }
    }
}


void yulduzli_x(int x){                         // x=5
    for(int i=0; i<x; i=i+1){                   // *   *
        for(int j=0; j<x; ++j){                 //  * *
            if(j==i || j==x-i-1) printf("*");   //   *
            else printf(" ");                   //  * *
        }                                       // *   *
        printf("\n");
    }
}


void teskari_parallelogram(int x){ // x = 5;
    for(int i=0; i<x; ++i){        //      *****
        for(int j=x; j>i; --j){    //     *****
            printf(" ");           //    *****
        }                          //   *****
        for(int k=0; k<x; ++k){    //  *****
            printf("*");
        }
        printf("\n");
    }
}


void galati_parallelogram(int x){                   // x = 5
    for(int i=0; i<x; ++i){                         //      *****
        for(int j=x; j>i; --j){                     //     *   *
            printf(" ");                            //    *   *
        }                                           //   *   *
        for(int k=0; k<x; ++k){                     //  *****
            if(k==0 || k==x-1) printf("*");
            else if(i==0 || i==x-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}


void uchburchak2(int x){      
    for(int i=0; i<x; ++i){      
        for(int q=x; q>i/2; --q){   
            printf(" ");
        }
        for(int j=0; j<=i; ++j){
            printf("*");
        }
        printf("\n");
    }
}


void teskari_uchburchak2(int x){
    for(int i=0; i<x; ++i){
        for(int q=i/2; q>0; --q){   
            printf(" ");
        }
        for(int j=x; j>i; --j){
            printf("*");
        }
        printf("\n");
    }
}


void uchburchak_karkazi(int x){                         // x=5;
    for(int i=0; i<x; ++i){                             // *****
        for(int j=0; j<x; ++j){                         //  *  *
            if(i>j) printf(" ");                        //   * *
            else{                                       //    **
                if(i==0 || i==j || j==x-1) printf("*"); //     *
                else printf(" ");
            }
        }
        printf("\n");
    }
}


void yoyma_uchburchak(int x){
    for(int i=0; i<x; ++i){
        for(int j=0; j<=i; ++j){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<x-1; ++i){
        for(int j=x-1; j>i; --j){
            printf("*");
        }
        printf("\n");
    }
}



void A_va_B_sonlar_orasidagi_palindrom(int a, int b){   // a, b sonlari berilgan.
    int num_of_digits(int x){                           // (a, b eng kamida ikki xonali son)
        int a=0;                                        // a dan b gacha bo'lgan palindrom sonlarni  konsolga chiqaring
        while(x!=0){                                    // 
            x=x/10;                                     // Masalan: a=12, b = 50
            ++a;                                        // 22  33  44
        }
        return a;
    }
    int c=11;
    if(a<b){
        for(int i=a; i<=b; ++i){
            if(i==0) continue;
            else if(i%c==0 && num_of_digits(c)==num_of_digits(i)) printf("%d ", i);
            else if(num_of_digits(c)<num_of_digits(i)) c=c*10+1;
        }
    }
    else printf("False");
}


long int Aning_Bdarajasi(int a, int b){
    if(b==0) return 1;
    else{
        int c=1;
        for(int i=1; i<=b; ++i){
            c=c*a;
        }
        return c;
    }
}
void a_va_b_sonlar_orasidagi_sonlar_darajasi(int a, int b, int c){
    int x=0;                            // a, b, c  sonlari berilgan.
    if(a<b){                            // a dan b gacha bo'lgan sonlarni. c - chi darajasini yig'indisini hisoblovchi dastur yozing.
        for(int i=a; i<=b; ++i){        // 
            x=x+Aning_Bdarajasi(i, c);  // Masalan: a=2, b = 10,c=3
        }                               // 3024
        printf("%d", x);                // Bunda  2^3 + 3^3 + 4^3 + 5^3 + 6^3 + 7^3 + 8^3 + 9^3 + 10^3 = 3024
    }
    else printf("False");
}


void x_va_n_ketma_ketligi(int x, int n){    // x , n soni berilgan.
    int a=1, b=1, y=0;                      // [ x - x^3 + x^5 - ......]
    if(n>0){                                // Shu ketma ketlikni hisoblovchi dastur yozing.
        for(int i=1; i<=n; ++i){            // n buyerda ketma ketlikni  n chi hadi.
            y=y+b*Aning_Bdarajasi(x, a);    // 
            a=a+2;                          // Shu ketma ketlik: [ 5^1 -5^3 + 5^5 - 5^7]
            b=-1*b;                         // Masalan: n=4, x = 5
        }                                   // -75120
        printf("%d", y);
    }
    else printf("False");
}


void x_ning_daraja_ketma_ketligi(int x, int n){
    if(n>0){
        int y=0;
        for(int i=0; i<=n; ++i){
            y=y+Aning_Bdarajasi(x, i);
        }
        printf("%d", y);
    }else printf("False");
}

int main(){
    // ketma_ketlik(10);
    // printf("%f", (float)1/4);
    // tortburchak(5);
    // sonlar_juftligi_2(9);
    yulduzli_x(5);
    // yoyma_uchburchak(7);
    // A_va_B_sonlar_orasidagi_palindrom(0, 90000);
    // a_va_b_sonlar_orasidagi_sonlar_darajasi(2, 10, 3);
    // x_ning_daraja_ketma_ketligi(2, 7);
    return 0;
}