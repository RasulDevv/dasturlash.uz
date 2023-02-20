#include <stdio.h>
#include <stdlib.h>


int num_of_digits(int x){
    int q=0;
    while(x!=0){
        x=x/10;
        ++q;
    }
    return q;
}


long int degree(int x, int a){ // (x^a) 'x' ning 'a' inchi darajasi
    int q=1;
    for(int i=0; i<a; ++i){
        q=q*x;
    }
    return q;
}


// https://dasturlash.uz/exercise-solving/exercise_for/article/94cfd34a-68fa-11eb-8c87-fc15b4289200
#define Sonlar_yigindisi(a)\
    printf("%d", a*(a+1)/2);


// https://dasturlash.uz/exercise-solving/exercise_for/article/c073acf0-68fb-11eb-8c87-fc15b4289200
void juft_sonlar_yigindisi(int a){
    int q=0;
    for(int i=0; i<=a; i=i+2){
        q=q+i;
    }printf("%d", q);
}


// https://dasturlash.uz/exercise-solving/exercise_for/article/085ac890-68fd-11eb-8c87-fc15b4289200
void toq_sonlar_yigindisi(int a){
    int q=0;
    for(int i=1; i<=a; i=i+2){
        q=q+i;
    }printf("%d", q);
}


// https://dasturlash.uz/exercise-solving/exercise_for/article/527ba5d8-68fe-11eb-b8b6-fc15b4289200
void beshga_bolinadigan_sonlar_yigindisi(int a){
    int q=0;
    for(int i=5; i<=a; i=i+5){
        q=q+i;
    }printf("%d", q);
}


// https://dasturlash.uz/exercise-solving/exercise_for/article/011a4c88-6900-11eb-a96d-fc15b4289200
#define juft_sonlar_soni(a)\
    printf("%d", a/2);


// https://dasturlash.uz/exercise-solving/exercise_for/article/de3a8496-6902-11eb-843a-fc15b4289200
#define a_va_b_sonlar_orasidagi_sonlar_yigindisi(a, b)\
    printf("%d\n", (a+b)*(b-a+1)/2);


void a_va_b_sonlar_orasidagi_juft_sonlar(int a, int b){ // https://dasturlash.uz/exercise-solving/exercise_for/article/d0d30f56-6904-11eb-843a-fc15b4289200
    int q=0;
    for(int i=a; i<=b; ++i){
        if(i%2==0) ++q;
        else continue;
    }printf("%d", q);
}


void a_va_b_sonlar_orasida_uchga_bolinadiganlar(int a, int b){ //https://dasturlash.uz/exercise-solving/exercise_for/article/bceb8ae8-693d-11eb-b1ed-fc15b4289200
    int sum=0, q=0;
    for(int i=a; i<b; ++i){
        if(i%3==0){
            sum=sum+i;
            ++q;
        }else continue;
    }printf("summa: %d\nlength: %d\n", sum, q);
}


void a_va_b_sonlar_orasida_ikki_va_uch_ga_bolinadiganlar(int a, int b){ // https://dasturlash.uz/exercise-solving/exercise_for/article/f515a05e-694a-11eb-8d36-fc15b4289200
    int q=0;
    for(int i=a; i<=b; ++i){
        if(i%2==0 && i%3==0) ++q;
        else continue;
    }printf("%d", q);
}


void a_va_b_sonlar_orasida_musbat_sonlar(int a, int b){ // https://dasturlash.uz/exercise-solving/exercise_for/article/8d8e83d6-694c-11eb-b1f1-fc15b4289200
    int q=0;
    for(int i=a; i<=b; ++i){
        if(i>0) ++q;
        else continue;
    }printf("%d", q);
}


void ketma_ketlik(int a, int n){ // https://dasturlash.uz/exercise-solving/exercise_for/article/7b0060c4-6959-11eb-809b-fc15b4289200
    int s=0, q=1;
    for(int i=1; i<=n; ++i){
        s=s+q*a;
        q=q*10+1;
    }printf("%d", s);
}


void mukammal_son(int a){ // https://dasturlash.uz/exercise-solving/exercise_for/article/734e221a-695b-11eb-809b-fc15b4289200
    int s=0;
    for(int i=1; i<a; ++i){
        if(a%i==0) s=s+i;
    }
    if(a==s) printf("True");
    else printf("False");
}


void ketma_ketlik_kvadrati(int n){ // https://dasturlash.uz/exercise-solving/exercise_for/article/13323358-6960-11eb-9fea-fc15b4289200
    int s=0;
    for(int i=1; i<=n; ++i){
        s=s+i*i;
    }printf("%d", s);
}


void armstrong_raqami(int n){ // https://dasturlash.uz/exercise-solving/exercise_for/article/db3f6846-69da-11eb-9464-fc15b4289200
    int s=0, q=n, z;
    for(int i=num_of_digits(n); i>=1; --i){
        if(num_of_digits(q)!=1){
            z=q%10;
            s=s+degree(z, num_of_digits(n));
            q=q/10;
        }
        else{
            s=s+degree(q, num_of_digits(n));
        } 
    }
    if(n==s) printf("True");
    else if(n!=s) printf("False");
}


void tub_son(int n){ // https://dasturlash.uz/exercise-solving/exercise_for/article/984db94c-69ea-11eb-a823-fc15b4289200
    int s=0;
    for(int i=1; i<=n; ++i){
        if(n%i==0) ++s;
    }
    if(s==2) printf("True");
    else printf("False");
}


void raqamlar_yigindisi(int n){ // https://dasturlash.uz/exercise-solving/exercise_for/article/4b3e3aba-6a20-11eb-b8d2-fc15b4289200
    int q=n, s=0;
    while(num_of_digits(q)!=1){
        int w=q%10;
        s=s+w;
        q=q/10;
    }
    if(num_of_digits(q)==1) s=s+q;
    printf("%d", s);
}


long int teskari_son(int n){ // https://dasturlash.uz/exercise-solving/exercise_for/article/29d449ac-6a23-11eb-aade-fc15b4289200
    int q=n, s=0;
    while(num_of_digits(q)!=1){
        int z=q%10, x=1;
        for(int i=1; i<=num_of_digits(q)-1; ++i){
            x=x*10;
        }
        s=s+x*z;
        q=q/10;
    }
    if(num_of_digits(q)==1) s=s+q;
    return s;
}


void palindrome_son(int n){ // https://dasturlash.uz/exercise-solving/exercise_for/article/9cb26984-6a25-11eb-947a-fc15b4289200
    if(teskari_son(n)==n) printf("True");
    else printf("False");
}


long int factorial(int x){ // https://dasturlash.uz/exercise-solving/exercise_for/article/ca047f92-6a27-11eb-97da-fc15b4289200
    int q=1;
    for(int i=1; i<=x; ++i){
        q=q*i;
    }
    return q;
}


long int fibonacci_ketma_ketligi(int x){ // https://dasturlash.uz/exercise-solving/exercise_for/article/774304c4-6a2a-11eb-92db-fc15b4289200
    int f1=0, f2=1, q=x, s=0, i=1;
    while(i<=x){
        int z=f2;
        f2=f1+f2;
        f1=z;
        i=i+1;
    }
    return f2-1;
}

int main(){
    // printf("%d", teskari_son(12345));
    // palindrome_son(12345);
    printf("%d", fibonacci_ketma_ketligi(5));
    return 0;
}