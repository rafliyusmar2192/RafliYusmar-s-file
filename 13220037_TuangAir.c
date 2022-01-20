#include <stdio.h>
#include <stdlib.h>

#define true 1

int main()
{
    /*KAMUS*/
    int A, B, p;

    /*ALGORITMA*/
    A = 0;
    B = 0;
    printf("Masukkan perintah p: ");
    scanf("%d", &p);

    while (true)
    {
        if (p>=1 && p<=6){
            if ((A != 4)||(B != 4)){
                  if (p==1){
                    A = 3;
                    B = B;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                    printf("Masukkan perintah p: ");
                    scanf("%d", &p);
                } else if (p==2){
                    A = A;
                    B = 5;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                    printf("Masukkan perintah p: ");
                    scanf("%d", &p);
                } else if (p==3){
                    if (A+B>=5){
                        A = (A+B)-5;
                        B = 5;
                        printf("Nilai A: %d\n", (A+B)-5);
                        printf("Nilai B: %d\n", B);
                        printf("Masukkan perintah p: ");
                        scanf("%d", &p);
                    } else if (A+B<5){
                        A = 0;
                        B = A+B;
                        printf("Nilai A: %d\n", A);
                        printf("Nilai B: %d\n", A+B);
                        printf("Masukkan perintah p: ");
                        scanf("%d", &p);
                    }
                } else if (p==4){
                    if (A+B>3){
                        A = 3;
                        B = (A+B)-3;
                        printf("Nilai A: %d\n", A);
                        printf("Nilai B: %d\n", (A+B)-3);
                        printf("Masukkan perintah p: ");
                        scanf("%d", &p);
                    } else if (A+B<=3){
                        A = A+B;
                        B = 0;
                        printf("Nilai A: %d\n", A+B);
                        printf("Nilai B: %d\n", B);
                        printf("Masukkan perintah p: ");
                        scanf("%d", &p);
                    }
                } else if (p==5){
                    A = 0;
                    B = B;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                    printf("Masukkan perintah p: ");
                    scanf("%d", &p);
                } else if (p==6){
                    A = A;
                    B = 0;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                    printf("Masukkan perintah p: ");
                    scanf("%d", &p);
                }
            }
        } else {
        printf("Tidak ada nomor perintah");
        break;
        }
    }
    return 0;
}


