#include <stdio.h>
#include <stdlib.h>

#define true 1

int main()
{
    /*KAMUS*/
    int A, B, p;

    /*ALGORITMA*/
    A = 0;
    B = 4;

    while(B != 4) // berhenti ketika B = 4
    {
        printf("Masukkan perintah p: ");
        scanf("%d", &p);
            if (p>=1 && p<=6){
                if (p==1){ // isi A
                    A = 3;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                } else if (p==2){ // isi B
                    B = 5;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                } else if (p==3){ // tuang A ke B
                    if (A+B>=5){
                        A = (A+B)-5;
                        B = 5;
                        printf("Nilai A: %d\n", A);
                        printf("Nilai B: %d\n", B);
                    } else if (A+B<5){
                        B = A+B;
                        A = 0;
                        printf("Nilai A: %d\n", A);
                        printf("Nilai B: %d\n", B);
                    }
                } else if (p==4){ // tuang B ke A
                    if (A+B>3){
                        B = (A+B)-3;
                        A = 3;
                        printf("Nilai A: %d\n", A);
                        printf("Nilai B: %d\n", B);
                    } else if (A+B<=3){
                        A = A+B;
                        B = 0;
                        printf("Nilai A: %d\n", A);
                        printf("Nilai B: %d\n", B);
                    }
                } else if (p==5){
                    A = 0;
                    B = B;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                } else if (p==6){
                    A = A;
                    B = 0;
                    printf("Nilai A: %d\n", A);
                    printf("Nilai B: %d\n", B);
                }
            } else {
                printf("Tidak ada nomor perintah");
                break;
            }
    }

    printf("salah satu sudah mencapai 4 liter");
    return 0;
}


