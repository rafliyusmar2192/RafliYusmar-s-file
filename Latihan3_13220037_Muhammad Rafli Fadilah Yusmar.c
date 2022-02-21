// Latihan 3
// Buatlah sebuah program dengan bahasa C yang menerima nama, nim, dan
// persentase kehadiran dalam suatu kelas kemudian menampilkan ke layar
// nama dan nim mahasiswa yang memiliki kehadiran kurang dari 80%
// Gunakan konsep structure dan array!

// Nama/NIM: Muhammad Rafli Fadilah Yusmar/13220037

#include<stdio.h>
#include<string.h>
// Definisikan Ukuran Nama
#define NAME_SIZE 100
// Inisialisasi Struktur
struct Mahasiswa
{
    int nim;
    char nama[NAME_SIZE];
    float kehadiran;
};
int main()
{
    // Definisikan Ukuran Array (Jumlah Mahasiswa yang Ingin Diinput)
    int n;
    n = printf("Jumlah Mahasiswa: ");
    scanf("%d", &n);
    #define ARRAY_SIZE n
    // Inisialisasi
    struct Mahasiswa mhs[ARRAY_SIZE];
    int index, nomor;
    // Masukkan Input Nama, NIM, dan Kehadiran sesuai Jumlah Mahasiswa.
    index = 0;
    for(index = 0; index < ARRAY_SIZE; ++index )
    {
        // Menampilkan Mahasiswa ke-index
        printf("\nMahasiswa ke-%d\n\n", index+1);
        // Input NIM Mahasiswa
        printf("NIM: ");
        scanf("%d", &mhs[index].nim);
        fflush(stdin);
        // Input Nama Mahasiswa
        printf("Nama: ");
        if(fgets(mhs[index].nama,NAME_SIZE,stdin) == NULL)
        {
            printf("Error in reading the string\n");
            exit(1);
        }
        else
        {
            char *p = strchr(mhs[index].nama, '\n');
            if (p)
            {
                *p = '\0';
            }
        }
        // Input Persentase Kehadiran Mahasiswa
        printf("Persentase Kehadiran: ");
        scanf("%f", &mhs[index].kehadiran);
    }
    // Menampilkan Mahasiswa dengan Persentase Kehadiran < 80%
    printf("\n");
    printf("Mahasiswa dengan Persentase Kehadiran Kurang Dari 80 Persen:\n");
    nomor = 0;
    for(index = 0; index < ARRAY_SIZE; ++index )
    {
        if (mhs[index].kehadiran<80){
             nomor++;
             printf("%d) Nama/NIM: %s/%d\n", nomor,
               mhs[index].nama, mhs[index].nim);
        }
    }
    return 0;
}

