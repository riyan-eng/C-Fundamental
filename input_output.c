#include <stdio.h>

int main()
{
    // OUTPUT
    // fungsi printf
    printf("Hello, ini adalah text output\n");
    printf("Nama saya %s\n", "riyan");
    printf("Umur saya %d tahun\n", 20);
    printf("\n");

    // fungsi puts
    puts("Halo semuanya");
    puts("Nama saya banu");
    puts("");

    // fungsi putchar
    putchar('a');
    puts("");

    // INPUT
    // fungsi scanf
    char nama, alamat;
    printf("Nama: ");
    scanf("%s", &nama);

    printf("Alamat: ");
    scanf("%s", &alamat);

    printf("Nama yang dimasukkan: %d\n", nama);
    printf("Alamat yang dimasukkan: %d\n", alamat);

    // fungsi fgets
    char name[50], email[50];
    
    printf("Nama: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Email: ");
    fgets(email, sizeof(email), stdin);
   
    printf("\n-------------------------\n");
    printf("Nama anda: %s", name);
    printf("Alamat email: %s", email);

    return 0;
}