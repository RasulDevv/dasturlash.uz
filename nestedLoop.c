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


void uchburchak(int x){                         // x=5;
    for(int i=0; i<x; ++i){                     // *
        for(int j=0; j<=i; ++j) printf("*");    // **
        printf("\n");                           // ***
    }                                           // ****
}                                               // *****


void teskari_uchburchak(int x){     // x=5;
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


int main(){
    // ketma_ketlik(10);
    // printf("%f", (float)1/4);
    // tortburchak(5);
    // sonlar_juftligi_2(9);
    diaganal_va_uchburchaklar(9);
    return 0;
}