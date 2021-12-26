//AYO SEMANGATTT!!!!!!!!!!!!!!!!!!!

#include <stdio.h>
#include <string.h>
#include <shlwapi.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

struct data_film{
    
    char judul_film[50];
    char genre_film[50];
    int tahunrilis_film;
    char sutradara_film[50];
    char studio_film[50];
    int harga_jual;
    int harga_sewa;

}film[100];

struct request_film{
    
    char judul_requestfilm[50];
    int tahunrilis_requestfilm;
    char studio_requestfilm[50];

}requestfilm[100];

struct riwayat_transaksifilm{

    char riwayat_judulfilm[50];
    char riwayat_genrefilm[50];
    int riwayat_tahunrilisfilm;
    char riwayat_sutradarafilm[50];
    char riwayat_studiofilm[50];
    int riwayat_transaksi;
    int riwayat_bayar;
    int riwayat_kembali;

}riwayatfilm[100];

int status = 0;

void login();
//Yang hanya bisa diakses oleh admin
void home_admin();
void list_film_admin();
void insert_datafilm();
void update_datafilm();
void delete_datafilm();
void read_requestfilm();
void read_riwayattransaksi();
void pilihan_admin();
//Yang hanya bisa diakses oleh user
void home_user();
void list_film_user();
void insert_requestfilm();
void bubblesort_judulfilm();
void selectionsort_genrefilm();
void selectionsort_tahunrilisfilm();
void insertionsort_sutradarafilm();
void insertionsort_studiofilm();
void pilihan_user();
//Bisa diakses secara umum
void read_datafilm();
void search_film();
void sequentialsearch_genrefilm();
void binarysearch_judulfilm();
void jumpsearch_sutradarafilm();
void interpolationsearch_tahunrilisfilm();
void exponentialsearch_studiofilm();
void transaksi_film();
void about_us();

int main(){

    system(" color f0 ");
    system("cls");
    login();
    return 0;

}

void login(){

    int pilih;
    printf("||===========================||\n");
    printf("||\t\t\t     ||\n");
    printf("||\t\t\t     ||\n");
    printf("||\t   Login as  \t     ||\n");
    printf("||\t   [1]. Admin\t     ||\n");
    printf("||\t   [2]. User  \t     ||\n");
    printf("||\t\t\t     ||\n");
    printf("||\t\t\t     ||\n");
    printf("||===========================||\n");
    scanf("%i",&pilih);

    switch (pilih){
    case 1:

        home_admin();
        break;
    
    default:

        home_user();
        break;
    }
}

void home_admin(){

    status = 0;
    system("cls");
    int pilihan;
    printf("||=============================================SELAMAT DATANG===========================================||\n");
    printf("||==================================================MENU================================================||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||          Halooooo! Selamat datang di Toko Film Suka-Suka!\t\t\t\t\t\t||\n");
    printf("||              Disini adalah tempat dimana kamu bisa mendapatkan film favoritmu!^^\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||          Action? Ada! Drama? Ada! Pokoknya lengkap deh disini!^^\t\t\t\t\t||\n");
    printf("||      Jangan lupa selalu cek notif aplikasi kami ya!\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t DISKON BESAR-BESARAN INCOMING GUYS!!^^\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t STAY TUNED YA!^^\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||[1]. Home\t");
    printf("   [2]. List Film");
    printf("        [3]. Search Film\t");
    printf("[4]. Transaksi Film\t");
    printf("  [5]. About Us ||\n");
    printf("||======================================================================================================||\n");
    scanf("%i",&pilihan);

    switch (pilihan){
    case 1:

        home_admin();
        break;
        
    case 2:

        list_film_admin();
        break;

    case 3:
    
        search_film();
        break;

    case 4:

        transaksi_film();
        pilihan_admin();
        break;

    case 5:

        about_us();
        pilihan_admin();
        break;
    
    default:
    
        printf("Selesai! Terima kasih^^");
        break;
    }
}

void list_film_admin(){

    system("cls");
    int pilih;
    printf("||==============================================================================||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||      Haloo!\t\t\t\t\t\t\t\t\t||\n");
    printf("||  Kamu sekarang lagi ada di list film admin nih!\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||      Pilihan menunya ada 3 nih, ketik sesuai yang ingin dituju ya!^^\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t[1].Kelola Data");
    printf("\t     [2]. List Film");
    printf("\t  [3]. List Request Film\t||\n");
    printf("||==============================================================================||\n");
    scanf("%i", &pilih);

    switch (pilih){

    case 1:
        system("cls");
        printf("||=======================================================================||\n");
        printf("||\t\t\t\t\t\t\t\t\t ||\n");
        printf("||   Halo Admin, jangan lupa untuk cek ulang data filmnya ya!\t\t ||\n");
        printf("||\t\t\t\t\t\t\t\t\t ||\n");
        printf("||      Barangkali ada typo atau salah harga^^\t\t\t\t ||\n");
        printf("||\t\t\t\t\t\t\t\t\t ||\n");
        printf("||  Jangan lupa juga untuk update film baru!\t\t\t\t ||\n");
        printf("||\t\t\t\t\t\t\t\t\t ||\n");
        printf("|| [1]. Insert Data");
        printf("  [2]. Lihat Data");
        printf("  [3]. Update Data");
        printf("  [4]. Delete Data ||\n");
        printf("||=======================================================================||\n");
        scanf("%i",&pilih);
        switch (pilih){
            case 1:
                insert_datafilm();
                pilihan_admin();
                break;

            case 2:
                read_datafilm();
                pilihan_admin();
                break;

            case 3:
                update_datafilm();
                pilihan_admin();
                break;

            case 4:
                delete_datafilm();
                pilihan_admin();
                break;

            default:
                list_film_admin();
                break;
        }
        break;

    case 2:

        read_datafilm();
            pilihan_admin();
            break;
        break;
    
    case 3:
        read_requestfilm();
            pilihan_admin();
            break;
        break;
    
    default:

        list_film_admin();
        break;
    }
}

void insert_datafilm(){

    system("cls");
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");

    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }
    fclose(datafilm);

    datafilm = fopen("datafilm.txt","a");
    printf("||==============Insert Data Film==============||\n");
    printf("    Masukkan Judul Film : ");
    fflush(stdin); gets(film[j].judul_film);
    printf("    Masukkan Genre Film : ");
    fflush(stdin); gets(film[j].genre_film);
    printf("    Masukkan Tahun Rilis Film : ");
    scanf("%i", &film[j].tahunrilis_film);
    printf("    Masukkan Sutradara Film : ");
    fflush(stdin); gets(film[j].sutradara_film);
    printf("    Masukkan Studio Film : ");
    fflush(stdin); gets(film[j].studio_film);
    printf("    Masukkan Harga Jual Film : ");
    scanf("%i", &film[j].harga_jual);
    printf("    Masukkan Harga Sewa Film : ");
    scanf("%i", &film[j].harga_sewa);
    fwrite(&film[j],sizeof(film[j]),1,datafilm);

    printf("||============================================||\n");
    printf("            Data berhasil ditambahkan           \n");
    fclose(datafilm);
}

void update_datafilm(){

    system("cls");
    int c = 0;
    FILE *datafilm,*update;
    char update_film[50];
    datafilm = fopen("datafilm.txt","r");
    update = fopen("temp.txt","w");
    printf("||====================Update Data Film====================||\n");
    printf("    Masukkan Judul yang ingin di edit : ");
    fflush(stdin); gets(update_film);
    while(fread(&film[c],sizeof(film[c]),1,datafilm)){
        if (strcasecmp(update_film,film[c].judul_film)==0){
    printf("||========================================================||\n");
            printf("    Data akan diedit!\n");
            printf("    Masukkan Judul Film : ");
            fflush(stdin); gets(film[c].judul_film);
            printf("    Masukkan Genre Film : ");
            fflush(stdin); gets(film[c].genre_film);
            printf("    Masukkan Tahun Rilis Film : ");
            scanf("%i", &film[c].tahunrilis_film);
            printf("    Masukkan Sutradara Film : ");
            fflush(stdin); gets(film[c].sutradara_film);
            printf("    Masukkan Studio Film : ");
            fflush(stdin); gets(film[c].studio_film);
            printf("    Masukkan Harga Jual Film : ");
            scanf("%i", &film[c].harga_jual);
            printf("    Masukkan Harga Sewa Film : ");
            scanf("%i", &film[c].harga_sewa);
    printf("||========================================================||\n");
    printf("               Data Berhasil Diperbaharui^^\n");
        }
        fwrite(&film[c],sizeof(film[c]),1,update);
        c++;
    }
    fclose(datafilm);
    fclose(update);
    remove("datafilm.txt");
    rename("temp.txt","datafilm.txt");
}

void delete_datafilm(){

    system("cls");
    FILE *datafilm,*hapus;
    int c = 0;
    char hapus_judul[50];
    
        datafilm = fopen("datafilm.txt","r");
        hapus = fopen("temp.txt","w");
            printf("||==============Insert Data Film==============||\n");
            printf("     Judul yang ingin dihapus : ");
            fflush(stdin); gets(hapus_judul);
                while(fread(&film[c],sizeof(film[c]),1,datafilm)){
                    if(strcmp(hapus_judul,film[c].judul_film)!=0){
                        fwrite(&film[c],sizeof(film[c]),1,hapus);
                    }else{
                    printf("||============================================||\n");
                    printf("           Data telah sukses dihapus\n");
                    }
                c++;
                }
            fclose(datafilm);
            fclose(hapus);
            remove("datafilm.txt");
            rename("temp.txt","datafilm.txt");
            
}

void read_requestfilm(){

    system("cls");
    int j = 0;
    FILE *datarequestfilm;
    datarequestfilm = fopen("datarequestfilm.txt","r");

    while(fread(&requestfilm[j],sizeof(requestfilm[j]),1,datarequestfilm)){
        j++;
    }
    fclose(datarequestfilm);

    datarequestfilm = fopen("datarequestfilm.txt","r");

    printf("||========================List Request Film=====================||\n");
    for (int i = 0; i < j; i++){
        printf("    Data ke\t: %i\n",i+1);
        printf("    Judul\t: %s\n",requestfilm[i].judul_requestfilm);
        printf("    Tahun Rilis\t: %i\n",requestfilm[i].tahunrilis_requestfilm);
        printf("    Studio\t: %s\n",requestfilm[i].studio_requestfilm);
    printf("||==============================================================||\n");
    }
    
    fclose(datarequestfilm);
}

void read_riwayattransaksi(){

    system("cls");
    int j = 0;
    FILE *riwayattransaksifilm;
    riwayattransaksifilm = fopen("riwayattransaksifilm.txt","r");

    while(fread(&riwayatfilm[j],sizeof(riwayatfilm[j]),1,riwayattransaksifilm)){
        j++;
    }
    fclose(riwayattransaksifilm);

    riwayattransaksifilm = fopen("riwayattransaksifilm.txt","r");

        printf("||==============Riwayat Transaksi===========||\n");
        for (int i = 0; i < j; i++){
        printf("    Transaksi ke-%i\n",i+1);
        printf("    Judul\t: %s\n",riwayatfilm[i].riwayat_judulfilm);
        printf("    Genre\t: %s\n",riwayatfilm[i].riwayat_genrefilm);
        printf("    Tahun Rilis\t: %i\n",riwayatfilm[i].riwayat_tahunrilisfilm);
        printf("    Sutradara\t: %s\n",riwayatfilm[i].riwayat_sutradarafilm);
        printf("    Studio\t: %s\n",riwayatfilm[i].riwayat_studiofilm);
        printf("    Harga Total\t: %i\n",riwayatfilm[i].riwayat_transaksi);
        printf("    Bayar\t: %i\n",riwayatfilm[i].riwayat_bayar);
        printf("    Kembali\t: %i\n",riwayatfilm[i].riwayat_kembali);
        printf("||==========================================||\n");
    }

    fclose(riwayattransaksifilm);
}

void pilihan_admin(){

    int pilih;
        printf("\t  [1]. Lanjut");
        printf("   [2]. Selesai\n");
        scanf("%i",&pilih);
        switch (pilih){
            case 1:
                home_admin();
                break;
                
            default:
                printf("Selesai!");
                exit(0);
                break;
        }
}

void home_user(){

    status = 1;
    system("cls");
    int pilihan;

    printf("||=============================================SELAMAT DATANG===========================================||\n");
    printf("||==================================================MENU================================================||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||          Halooooo! Selamat datang di Toko Film Suka-Suka!\t\t\t\t\t\t||\n");
    printf("||              Disini adalah tempat dimana kamu bisa mendapatkan film favoritmu!^^\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||          Action? Ada! Drama? Ada! Pokoknya lengkap deh disini!^^\t\t\t\t\t||\n");
    printf("||      Jangan lupa selalu cek notif aplikasi kami ya!\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t DISKON BESAR-BESARAN INCOMING GUYS!!^^\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t STAY TUNED YA!^^\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("||[1]. Home\t");
    printf("   [2]. List Film");
    printf("        [3]. Search Film\t");
    printf("[4]. Transaksi Film\t");
    printf("  [5]. About Us ||\n");
    printf("||======================================================================================================||\n");
    scanf("%i",&pilihan);

    switch (pilihan){
    case 1:

        home_user();
        break;
        
    case 2:

        list_film_user();
        break;

    case 3:
    
        search_film();
        break;

    case 4:

        transaksi_film();
        pilihan_user();
        break;

    case 5:

        about_us();
        pilihan_user();
        break;
    
    default:
        printf("Selesai! Terima kasih^^");
        break;
    }
}

void list_film_user(){

    system("cls");
    int pilih;
    printf("||==========================================================================||\n");
    printf("||\t\t\t\t\t\t\t\t\t    ||\n");
    printf("||      Haloo!\t\t\t\t\t\t\t\t    ||\n");
    printf("||  Kamu sekarang lagi ada di list film nih!\t\t\t\t    ||\n");
    printf("||\t\t\t\t\t\t\t\t\t    ||\n");
    printf("||      Pilihan menunya ada 2 nih, ketik sesuai yang ingin dituju ya!^^\t    ||\n");
    printf("||\t\t\t\t\t\t\t\t\t    ||\n");
    printf("||\t\t\t\t\t\t\t\t\t    ||\n");
    printf("||\t\t    [1]. Request Film");
    printf("\t  [2]. Daftar Film\t\t    ||\n");
    printf("||==========================================================================||\n");
    scanf("%i", &pilih);

    switch (pilih){
    case 1:

        insert_requestfilm();
        pilihan_user();
        break;
    
    case 2:

        printf("Daftar Film\n");
        read_datafilm();
        printf("      [1]. Urutkan Film");
        printf("  [2]. Selesai\n");
        scanf("%i",&pilih);
        switch (pilih){
            case 1:
            printf("\t     Urutkan Berdasarkan\n");        
            printf("      [1]. Judul Film\n");
            printf("      [2]. Genre Film\n");
            printf("      [3]. Tahun Rilis Film\n");
            printf("      [4]. Sutradara Film\n");
            printf("      [5]. Studio Film\n");
            printf("||==========================================||\n");
            scanf("%i",&pilih);

                switch (pilih){
                    case 1:

                    bubblesort_judulfilm();
                    pilihan_user();
                    break;
    
                case 2:

                    selectionsort_genrefilm();
                    pilihan_user();
                    break;

                case 3:

                    selectionsort_tahunrilisfilm();
                    pilihan_user();
                    break;

                case 4:

                    insertionsort_sutradarafilm();
                    pilihan_user();
                    break;
            
                case 5:

                    insertionsort_studiofilm();
                    pilihan_user();
                    break;

                default:

                    list_film_user();
                    break;
                }
            break;

            default:
                printf("\nSelesai!\n");
                exit(0);
            break;
        }
        
    default:
        printf("Inputan Salah\n");
        break;
    }
    

}

void insert_requestfilm(){

    system("cls");
    int j = 0;
    FILE *datarequestfilm;
    datarequestfilm = fopen("datarequestfilm.txt","r");

    while(fread(&requestfilm[j],sizeof(requestfilm[j]),1,datarequestfilm)){
        j++;
    }
    fclose(datarequestfilm);

    printf("||==============Request Film==============||\n");
    datarequestfilm = fopen("datarequestfilm.txt","a");
    printf("    Masukkan Judul Film : ");
    fflush(stdin); gets(requestfilm[j].judul_requestfilm);
    printf("    Masukkan Tahun Rilis Film : ");
    scanf("%i", &requestfilm[j].tahunrilis_requestfilm);
    printf("    Masukkan Studio Film : ");
    fflush(stdin); gets(requestfilm[j].studio_requestfilm);
    fwrite(&requestfilm[j],sizeof(requestfilm[j]),1,datarequestfilm);

    printf("||============================================||\n");
    printf("            Data berhasil ditambahkan           \n");
    fclose(datarequestfilm);

}

void bubblesort_judulfilm(){

    system("cls");
    int f = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[f],sizeof(film[f]),1,datafilm)){
        f++;
    }
    fclose(datafilm);
    
    datafilm = fopen("datafilm.txt","r");
    for (int i = 0; i < f-1; i++){
        for (int j = i+1; j < f; j++){
            if (strcmp(film[i].judul_film,film[j].judul_film)>0){
                char temp[50],temp1[50];int temp2;char temp3[50],temp4[50];int temp5,temp6;
                fread(&film[f],sizeof(film[f]),1,datafilm);
                strcpy(temp,film[j].judul_film);
                strcpy(temp1,film[j].genre_film);
                temp2 = film[j].tahunrilis_film;
                strcpy(temp3,film[j].sutradara_film);
                strcpy(temp4,film[j].studio_film);
                temp5 = film[j].harga_jual;
                temp6 = film[j].harga_sewa;

                strcpy(film[j].judul_film,film[i].judul_film);
                strcpy(film[j].genre_film,film[i].genre_film);
                film[j].tahunrilis_film = film[i].tahunrilis_film;
                strcpy(film[j].sutradara_film,film[i].sutradara_film);
                strcpy(film[j].studio_film,film[i].studio_film);
                film[j].harga_jual = film[i].harga_jual;
                film[j].harga_sewa = film[i].harga_sewa;

                strcpy(film[i].judul_film,temp);
                strcpy(film[i].genre_film,temp1);
                film[i].tahunrilis_film = temp2;
                strcpy(film[i].sutradara_film,temp3);
                strcpy(film[i].studio_film,temp4);
                film[i].harga_jual = temp5;
                film[i].harga_sewa = temp6;
            }
        }
    }
    fclose(datafilm);

    for (int c = 0; c < f; c++){
        printf("||==========================================||\n");
        printf("  Data ke : %i\n",c+1);
        printf("  Judul : %s\n",film[c].judul_film);
        printf("  Genre : %s\n",film[c].genre_film);
        printf("  Tahun Rilis : %i\n",film[c].tahunrilis_film);
        printf("  Sutradara : %s\n",film[c].sutradara_film);
        printf("  Studio : %s\n",film[c].studio_film);
        printf("  Harga Jual : %i\n",film[c].harga_jual);
        printf("  Harga Sewa : %i\n",film[c].harga_sewa);
    }
        printf("||==========================================||\n");
    
}

void selectionsort_genrefilm(){

    system("cls");
    int position;
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }

    for (int c = 0; c < j-1; c++){
        position = c;
            for (int d = c+1; d < j; d++){
                if (strcmp(film[position].genre_film,film[d].genre_film)>0){
                    position = d;
                }
            }
            if (position != c){
                char temp[50],temp1[50];int temp2;char temp3[50],temp4[50]; int temp5,temp6;
                
                strcpy(temp,film[c].judul_film);
                strcpy(temp1,film[c].genre_film);
                temp2 = film[c].tahunrilis_film;
                strcpy(temp3,film[c].sutradara_film);
                strcpy(temp4,film[c].studio_film);
                temp5 = film[c].harga_jual;
                temp6 = film[c].harga_sewa;

                strcpy(film[c].judul_film,film[position].judul_film);
                strcpy(film[c].genre_film,film[position].genre_film);
                film[c].tahunrilis_film = film[position].tahunrilis_film;
                strcpy(film[c].sutradara_film,film[position].sutradara_film);
                strcpy(film[c].studio_film,film[position].studio_film);
                film[c].harga_jual = film[position].harga_jual;
                film[c].harga_sewa = film[position].harga_sewa;

                strcpy(film[position].judul_film,temp);
                strcpy(film[position].genre_film,temp1);
                film[position].tahunrilis_film = temp2;
                strcpy(film[position].sutradara_film,temp3);
                strcpy(film[position].studio_film,temp4);
                film[position].harga_jual = temp5;
                film[position].harga_sewa = temp6;
            }
    }

    for (int c = 0; c < j; c++){
        printf("||==========================================||\n");
        printf("  Data ke : %i\n",c+1);
        printf("  Judul : %s\n",film[c].judul_film);
        printf("  Genre : %s\n",film[c].genre_film);
        printf("  Tahun Rilis : %i\n",film[c].tahunrilis_film);
        printf("  Sutradara : %s\n",film[c].sutradara_film);
        printf("  Studio : %s\n",film[c].studio_film);
        printf("  Harga Jual : %i\n",film[c].harga_jual);
        printf("  Harga Sewa : %i\n",film[c].harga_sewa);
    }
        printf("||==========================================||\n");
    
    fclose(datafilm);
}

void selectionsort_tahunrilisfilm(){

    system("cls");
    int position;
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }

    for (int c = 0; c < j-1; c++){
        position = c;
            for (int d = c+1; d < j; d++){
                if (film[position].tahunrilis_film > film[d].tahunrilis_film){
                    position = d;
                }
            }
            if (position != c){
                char temp[50],temp1[50];int temp2;char temp3[50],temp4[50]; int temp5,temp6;
                
                strcpy(temp,film[c].judul_film);
                strcpy(temp1,film[c].genre_film);
                temp2 = film[c].tahunrilis_film;
                strcpy(temp3,film[c].sutradara_film);
                strcpy(temp4,film[c].studio_film);
                temp5 = film[c].harga_jual;
                temp6 = film[c].harga_sewa;

                strcpy(film[c].judul_film,film[position].judul_film);
                strcpy(film[c].genre_film,film[position].genre_film);
                film[c].tahunrilis_film = film[position].tahunrilis_film;
                strcpy(film[c].sutradara_film,film[position].sutradara_film);
                strcpy(film[c].studio_film,film[position].studio_film);
                film[c].harga_jual = film[position].harga_jual;
                film[c].harga_sewa = film[position].harga_sewa;

                strcpy(film[position].judul_film,temp);
                strcpy(film[position].genre_film,temp1);
                film[position].tahunrilis_film = temp2;
                strcpy(film[position].sutradara_film,temp3);
                strcpy(film[position].studio_film,temp4);
                film[position].harga_jual = temp5;
                film[position].harga_sewa = temp6;
            }
    }

    for (int c = 0; c < j; c++){
        printf("||==========================================||\n");
        printf("  Data ke : %i\n",c+1);
        printf("  Judul : %s\n",film[c].judul_film);
        printf("  Genre : %s\n",film[c].genre_film);
        printf("  Tahun Rilis : %i\n",film[c].tahunrilis_film);
        printf("  Sutradara : %s\n",film[c].sutradara_film);
        printf("  Studio : %s\n",film[c].studio_film);
        printf("  Harga Jual : %i\n",film[c].harga_jual);
        printf("  Harga Sewa : %i\n",film[c].harga_sewa);
    }
        printf("||==========================================||\n");
    
    fclose(datafilm);       
}

void insertionsort_sutradarafilm(){
    
    system("cls");
    int d;
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }

    for(int c = 0; c < j; c++){
        char temp[50],temp1[50];int temp2;char temp3[50],temp4[50];int temp5,temp6;
        strcpy(temp,film[c].judul_film);
        strcpy(temp1,film[c].genre_film);
        temp2 = film[c].tahunrilis_film;
        strcpy(temp3,film[c].sutradara_film);
        strcpy(temp4,film[c].studio_film);
        temp5 = film[c].harga_jual;
        temp6 = film[c].harga_sewa;
        d = c-1;
            while (d>=0 && strcmp(film[d].sutradara_film,temp3)>0){
                strcpy(film[d+1].judul_film,film[d].judul_film);
                strcpy(film[d+1].genre_film,film[d].genre_film);
                film[d+1].tahunrilis_film = film[d].tahunrilis_film;
                strcpy(film[d+1].sutradara_film,film[d].sutradara_film);
                strcpy(film[d+1].studio_film,film[d].studio_film);
                film[d+1].harga_jual = film[d].harga_jual;
                film[d+1].harga_sewa = film[d].harga_sewa;
                d = d-1;
            }
            strcpy(film[d+1].judul_film,temp);
            strcpy(film[d+1].genre_film,temp1);
            film[d+1].tahunrilis_film = temp2;
            strcpy(film[d+1].sutradara_film,temp3);
            strcpy(film[d+1].studio_film,temp4);
            film[d+1].harga_jual = temp5;
            film[d+1].harga_sewa = temp6;
    }

    for (int c = 0; c < j; c++){
        printf("||==========================================||\n");
        printf("  Data ke : %i\n",c+1);
        printf("  Judul : %s\n",film[c].judul_film);
        printf("  Genre : %s\n",film[c].genre_film);
        printf("  Tahun Rilis : %i\n",film[c].tahunrilis_film);
        printf("  Sutradara : %s\n",film[c].sutradara_film);
        printf("  Studio : %s\n",film[c].studio_film);
        printf("  Harga Jual : %i\n",film[c].harga_jual);
        printf("  Harga Sewa : %i\n",film[c].harga_sewa);
    }
        printf("||==========================================||\n");

    fclose(datafilm);
}

void insertionsort_studiofilm(){

    system("cls");
    int d;
    int j = 0;

    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }

    for(int c = 0; c < j; c++){
        char temp[50],temp1[50];int temp2;char temp3[50],temp4[50];int temp5,temp6;
        strcpy(temp,film[c].judul_film);
        strcpy(temp1,film[c].genre_film);
        temp2 = film[c].tahunrilis_film;
        strcpy(temp3,film[c].sutradara_film);
        strcpy(temp4,film[c].studio_film);
        temp5 = film[c].harga_jual;
        temp6 = film[c].harga_sewa;
        d = c-1;
            while (d>=0 && strcmp(film[d].studio_film,temp4)>0){
                strcpy(film[d+1].judul_film,film[d].judul_film);
                strcpy(film[d+1].genre_film,film[d].genre_film);
                film[d+1].tahunrilis_film = film[d].tahunrilis_film;
                strcpy(film[d+1].sutradara_film,film[d].sutradara_film);
                strcpy(film[d+1].studio_film,film[d].studio_film);
                film[d+1].harga_jual = film[d].harga_jual;
                film[d+1].harga_sewa = film[d].harga_sewa;
                d = d-1;
            }
            strcpy(film[d+1].judul_film,temp);
            strcpy(film[d+1].genre_film,temp1);
            film[d+1].tahunrilis_film = temp2;
            strcpy(film[d+1].sutradara_film,temp3);
            strcpy(film[d+1].studio_film,temp4);
            film[d+1].harga_jual = temp5;
            film[d+1].harga_sewa = temp6;
    }
    fclose(datafilm);

    for (int c = 0; c < j; c++){
        printf("||==========================================||\n");
        printf("  Data ke : %i\n",c+1);
        printf("  Judul : %s\n",film[c].judul_film);
        printf("  Genre : %s\n",film[c].genre_film);
        printf("  Tahun Rilis : %i\n",film[c].tahunrilis_film);
        printf("  Sutradara : %s\n",film[c].sutradara_film);
        printf("  Studio : %s\n",film[c].studio_film);
        printf("  Harga Jual : %i\n",film[c].harga_jual);
        printf("  Harga Sewa : %i\n",film[c].harga_sewa);
    }
        printf("||==========================================||\n");
}

void transaksi_film(){

    system("cls");
    FILE *datafilm;
    FILE *riwayattransaksifilm;
    int pilih,d,durasi;
    int j = 0;
    int f = 0;
    int bayar,sewa;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }
    fclose(datafilm);

    riwayattransaksifilm = fopen("riwayattransaksifilm.txt","r");
        while (fread(&riwayatfilm[f],sizeof(riwayatfilm[f]),1,riwayattransaksifilm)){
        f++;
    }
    fclose(riwayattransaksifilm);

    if (status == 0){
        printf("||======================================================||\n");
        printf("||\t\t\t\t\t\t\t||\n");
        printf("||\t\t\t\t\t\t\t||\n");
        printf("|| [1]. List Riwayat Transaksi Film\t");
        printf("[0]. Selesai\t||\n");
        printf("||======================================================||\n");
        scanf("%i",&pilih);
        switch (pilih){

        case 1:
            read_riwayattransaksi();
            pilihan_admin();
            break;
        default:
            printf("selesai!\n");
            exit(0);
        }

    }else{
        printf("||===================================||\n");
        printf("||\t\t\t\t     ||\n");
        printf("||  Yeay! Dah sampe menu beli hihi!  ||\n");
        printf("||\t\t\t\t     ||\n");
        printf("||\t\t\t\t     ||\n");
        printf("||      Beli yang banyak ya!^^\t     ||\n");
        printf("||\t\t\t\t     ||\n");
        printf("|| [1]. Beli Film");
        printf("   [2]. Sewa Film   ||\n");
        printf("||===================================||\n");
        scanf("%i",&pilih);
        switch (pilih){

    case 1:
        riwayattransaksifilm = fopen("riwayattransaksifilm.txt","a");
        read_datafilm();
        printf("     Silakan pilih filmnya : ");
        scanf("%i", &pilih);

        for (int i = 0; i < j; i++){
        if ((pilih-1)==i){
            
            printf("Anda harus membayar sebanyak %i\n",film[i].harga_jual);
            printf("Masukan Uang Pembayaran : ");
            scanf("%i",&bayar);

            if (bayar < film[i].harga_jual){
                printf("Mohon maaf uang anda kurang!, silakan kembali lagi^^\n");
                break;
            }else{
                strcpy(riwayatfilm[f].riwayat_judulfilm,film[i].judul_film);
                strcpy(riwayatfilm[f].riwayat_genrefilm,film[i].genre_film);
                riwayatfilm[f].riwayat_tahunrilisfilm = film[i].tahunrilis_film;
                strcpy(riwayatfilm[f].riwayat_sutradarafilm,film[i].sutradara_film);
                strcpy(riwayatfilm[f].riwayat_studiofilm,film[i].studio_film);
                riwayatfilm[f].riwayat_transaksi = film[i].harga_jual;
                riwayatfilm[f].riwayat_bayar = bayar;
                riwayatfilm[f].riwayat_kembali = bayar-film[i].harga_jual;
                fwrite(&riwayatfilm[f],sizeof(riwayatfilm[f]),1,riwayattransaksifilm);

                printf("\n");
                printf("||=============Struk Pembelian==============||\n");
                printf("  Judul\t\t: %s\n",riwayatfilm[f].riwayat_judulfilm);
                printf("  Genre\t\t: %s\n",riwayatfilm[f].riwayat_genrefilm);
                printf("  Tahun Rilis\t: %i\n",riwayatfilm[f].riwayat_tahunrilisfilm);
                printf("  Sutradara\t: %s\n",riwayatfilm[f].riwayat_sutradarafilm);
                printf("  Studio\t: %s\n",riwayatfilm[f].riwayat_studiofilm);
                printf("  Harga Jual\t: %i\n",riwayatfilm[f].riwayat_transaksi);
                printf("||==========================================||\n");
                printf("  Harga Total\t: %i\n",riwayatfilm[f].riwayat_transaksi);
                printf("  Bayar\t\t: %i\n",riwayatfilm[f].riwayat_bayar);
                printf("  Kembali\t: %i\n",riwayatfilm[f].riwayat_kembali);
                printf("||==========================================||\n");
            }
        }
        }
        
        fclose(riwayattransaksifilm);
        break;
    
    case 2:
        
        riwayattransaksifilm = fopen("riwayattransaksifilm.txt","a");
        read_datafilm();
        printf("      Silakan pilih filmnya : ");
        scanf("%i", &pilih);
        for (int i = 0; i < j; i++){
            if ((pilih-1)==i){

                printf("    Masukkan durasi penyewaan : ");
                scanf("%i",&durasi);
                printf("Anda harus membayar sebanyak %i\n",film[i].harga_sewa*durasi);
                printf("Masukan Uang Pembayaran : ");
                scanf("%i",&sewa);

                if (sewa < film[i].harga_sewa*durasi){
                    printf("Mohon maaf uang anda kurang!, silakan kembali lagi^^\n");
                    break;
                }else{
                    strcpy(riwayatfilm[f].riwayat_judulfilm,film[i].judul_film);
                    strcpy(riwayatfilm[f].riwayat_genrefilm,film[i].genre_film);
                    riwayatfilm[f].riwayat_tahunrilisfilm = film[i].tahunrilis_film;
                    strcpy(riwayatfilm[f].riwayat_sutradarafilm,film[i].sutradara_film);
                    strcpy(riwayatfilm[f].riwayat_studiofilm,film[i].studio_film);
                    riwayatfilm[f].riwayat_transaksi = film[i].harga_sewa*durasi;
                    riwayatfilm[f].riwayat_bayar = sewa;
                    riwayatfilm[f].riwayat_kembali = sewa-film[i].harga_sewa*durasi;
                    fwrite(&riwayatfilm[f],sizeof(riwayatfilm[f]),1,riwayattransaksifilm);

                    printf("\n");
                    printf("||=============Struk Pembelian==============||\n");
                    printf("  Judul\t\t: %s\n",riwayatfilm[f].riwayat_judulfilm);
                    printf("  Genre\t\t: %s\n",riwayatfilm[f].riwayat_genrefilm);
                    printf("  Tahun Rilis\t: %i\n",riwayatfilm[f].riwayat_tahunrilisfilm);
                    printf("  Sutradara\t: %s\n",riwayatfilm[f].riwayat_sutradarafilm);
                    printf("  Studio\t: %s\n",riwayatfilm[f].riwayat_studiofilm);
                    printf("  Harga Jual\t: %i\n",riwayatfilm[f].riwayat_transaksi);
                    printf("||==========================================||\n");
                    printf("  Harga Total\t: %i\n",riwayatfilm[f].riwayat_transaksi);
                    printf("  Bayar\t\t: %i\n",riwayatfilm[f].riwayat_bayar);
                    printf("  Kembali\t: %i\n",riwayatfilm[f].riwayat_kembali);
                    printf("||==========================================||\n");
                }
            }
        }

        fclose(riwayattransaksifilm);
        break;

        default:
            printf("Selesai!\n");
            break;
    }
    }
    
}

void read_datafilm(){

    system("cls");
    FILE *datafilm;
    int j = 0;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }
    fclose(datafilm);

    datafilm = fopen("datafilm.txt","r");
        printf("||================Daftar Film===============||\n");
    for (int i = 0; i < j; i++){
        printf("    Data ke\t: %i\n",i+1);
        printf("    Judul\t: %s\n",film[i].judul_film);
        printf("    Genre\t: %s\n",film[i].genre_film);
        printf("    Tahun Rilis\t: %i\n",film[i].tahunrilis_film);
        printf("    Sutradara\t: %s\n",film[i].sutradara_film);
        printf("    Studio\t: %s\n",film[i].studio_film);
        printf("    Harga Jual\t: %i\n",film[i].harga_jual);
        printf("    Harga Sewa\t: %i\n",film[i].harga_sewa);
        printf("||==========================================||\n");
    }
        
    fclose(datafilm);
}

void search_film(){

    system("cls");
    int pilih;

    printf("||======================================Cari berdasarkan=====================================||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t     ||\n");
    printf("||       Mau nyari Film apa nih Sahabat Bioskop Suka-Suka?\t\t\t\t     ||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t     ||\n");
    printf("||  Kamu bisa mencari Film lewat Judul, Genre, Tahun Rilis, Sutradara, Studio nih!\t     ||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t     ||\n");
    printf("||\t\t\t\t      SELAMAT MENCARI!!^^\t\t\t\t     ||\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t     ||\n");
    printf("||[1]. Judul Film ");
    printf("[2]. Genre Film ");
    printf("[3]. Tahun Rilis Film ");
    printf("[4]. Sutradara Film ");
    printf("[5]. Studio Film ||\n");
    printf("||===========================================================================================||\n");
    scanf("%i",&pilih);

    switch (pilih){
    case 1:
        
        binarysearch_judulfilm();
        if (status == 1){
            pilihan_user();
        }else{
            pilihan_admin();
        }
        break;

    case 2:

        sequentialsearch_genrefilm();
        if (status == 1){
            pilihan_user();
        }else{
            pilihan_admin();
        }
        break;

    case 3:

        interpolationsearch_tahunrilisfilm();
        if (status == 1){
            pilihan_user();
        }else{
            pilihan_admin();
        }
        break;

    case 4:

        jumpsearch_sutradarafilm();
        if (status == 1){
            pilihan_user();
        }else{
            pilihan_admin();
        }
        break;  

    case 5:

        exponentialsearch_studiofilm();
            if (status == 1){
                pilihan_user();
            }else{
                pilihan_admin();
            }
        break;

    default:

        search_film();
        break;
    }
}

void binarysearch_judulfilm(){
    
    system("cls");
    int d;
    char search_judul[50];
    int f = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[f],sizeof(film[f]),1,datafilm)){
        f++;
    }
    int j,k,l;
    j = 0;
    k = f - 1;
    char sementara[50];
    int flag = 0;

    for(int c = 0; c < f; c++){
        char temp[50],temp1[50];int temp2;char temp3[50],temp4[50];int temp5, temp6;
        strcpy(temp,film[c].judul_film);
        strcpy(temp1,film[c].genre_film);
        temp2 = film[c].tahunrilis_film;
        strcpy(temp3,film[c].sutradara_film);
        strcpy(temp4,film[c].studio_film);
        temp5 = film[c].harga_jual;
        temp6 = film[c].harga_sewa;
        d = c-1;
            while (d>=0 && strcmp(film[d].judul_film,temp)>0){
                strcpy(film[d+1].judul_film,film[d].judul_film);
                strcpy(film[d+1].genre_film,film[d].genre_film);
                film[d+1].tahunrilis_film = film[d].tahunrilis_film;
                strcpy(film[d+1].sutradara_film,film[d].sutradara_film);
                strcpy(film[d+1].studio_film,film[d].studio_film);
                film[d+1].harga_jual = film[d].harga_jual;
                film[d+1].harga_sewa = film[d].harga_sewa;
                d = d-1;
            }
            strcpy(film[d+1].judul_film,temp);
            strcpy(film[d+1].genre_film,temp1);
            film[d+1].tahunrilis_film = temp2;
            strcpy(film[d+1].sutradara_film,temp3);
            strcpy(film[d+1].studio_film,temp4);
            film[d+1].harga_jual = temp5;
            film[d+1].harga_sewa = temp6;
    }

    printf("||=======================Search Film======================||\n");
    printf("     Masukkan Judul yang ingin dicari : ");
    fflush(stdin); gets(search_judul);

    while (j<=k && flag == 0){
        l = (j+k)/2;

        if (StrStrIA(film[l].judul_film,search_judul)){
            strcpy(sementara,film[l].judul_film);
        }
        if (strcmp(sementara,film[l].judul_film)==0){
            printf("\n");
            printf("||====================Data Ditemukan!=====================||\n");
            printf("    Judul\t: %s\n",film[l].judul_film);
            printf("    Genre\t: %s\n",film[l].genre_film);
            printf("    Tahun Rilis\t: %i\n",film[l].tahunrilis_film);
            printf("    Sutradara\t: %s\n",film[l].sutradara_film);
            printf("    Studio\t: %s\n",film[l].studio_film);
            printf("    Harga Jual\t: %i\n",film[l].harga_jual);
            printf("    Harga Sewa\t: %i\n",film[l].harga_sewa);
            printf("||========================================================||\n");
            flag = 1;
        }else if (strcmp(search_judul,film[l].judul_film)>0){
            j = l+1;
        }else{
            k = l-1;
        }
    }
    
}

void sequentialsearch_genrefilm(){

    system("cls");
    char search_genre[50];
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }

    printf("||=======================Search Film======================||\n");
    printf("    Masukkan genre yang ingin dicari : ");
    fflush(stdin); gets(search_genre);
    for (int i = 0; i < j; i++){
        if (StrStrIA(film[i].genre_film,search_genre)){
            printf("\n");
            printf("||====================Data Ditemukan!=====================||\n");
            printf("    Judul\t: %s\n",film[i].judul_film);
            printf("    Genre\t: %s\n",film[i].genre_film);
            printf("    Tahun Rilis\t: %i\n",film[i].tahunrilis_film);
            printf("    Sutradara\t: %s\n",film[i].sutradara_film);
            printf("    Studio\t: %s\n",film[i].studio_film);
            printf("    Harga Jual\t: %i\n",film[i].harga_jual);
            printf("    Harga Sewa\t: %i\n",film[i].harga_sewa);
            printf("||========================================================||\n");
        }
    }
}

void jumpsearch_sutradarafilm(){

    system("cls");
    int d;
    char search_sutradarafilm[50];
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }

    int length = j;
    int jump = sqrt(length);
    int jumper = jump;

    for(int c = 0; c < j; c++){
        char temp[50],temp1[50];int temp2;char temp3[50],temp4[50];int temp5, temp6;
        strcpy(temp,film[c].judul_film);
        strcpy(temp1,film[c].genre_film);
        temp2 = film[c].tahunrilis_film;
        strcpy(temp3,film[c].sutradara_film);
        strcpy(temp4,film[c].studio_film);
        temp5 = film[c].harga_jual;
        temp6 = film[c].harga_sewa;
        d = c-1;
            while (d>=0 && strcmp(film[d].sutradara_film,temp3)>0){
                strcpy(film[d+1].judul_film,film[d].judul_film);
                strcpy(film[d+1].genre_film,film[d].genre_film);
                film[d+1].tahunrilis_film = film[d].tahunrilis_film;
                strcpy(film[d+1].sutradara_film,film[d].sutradara_film);
                strcpy(film[d+1].studio_film,film[d].studio_film);
                film[d+1].harga_jual = film[d].harga_jual;
                film[d+1].harga_sewa = film[d].harga_sewa;
                d = d-1;
            }
            strcpy(film[d+1].judul_film,temp);
            strcpy(film[d+1].genre_film,temp1);
            film[d+1].tahunrilis_film = temp2;
            strcpy(film[d+1].sutradara_film,temp3);
            strcpy(film[d+1].studio_film,temp4);
            film[d+1].harga_jual = temp5;
            film[d+1].harga_sewa = temp6;
    }

    printf("||=======================Search Film======================||\n");
    printf("    Masukkan Nama Sutradara yang ingin dicari : ");
    fflush(stdin); gets(search_sutradarafilm);
    int prev = 0;
    while (strcmp(film[jumper].sutradara_film,search_sutradarafilm)<=0 && jumper < length){

        prev = jumper;
        jumper += jump;

    }

    int flag = 0;
    for (int i = prev; i <= jumper; i++){
        if(StrStrIA(film[i].sutradara_film,search_sutradarafilm)){
            flag = 1;
            printf("\n");
            printf("||====================Data Ditemukan!=====================||\n");
            printf("    Judul\t: %s\n",film[i].judul_film);
            printf("    Genre\t: %s\n",film[i].genre_film);
            printf("    Tahun Rilis\t: %i\n",film[i].tahunrilis_film);
            printf("    Sutradara\t: %s\n",film[i].sutradara_film);
            printf("    Studio\t: %s\n",film[i].studio_film);
            printf("    Harga Jual\t: %i\n",film[i].harga_jual);
            printf("    Harga Sewa\t: %i\n",film[i].harga_sewa);
            printf("||========================================================||\n");
        }
    }
    if(flag == 0){
        printf("data tidak ditemukan!");
    }
}

void interpolationsearch_tahunrilisfilm(){

    system("cls");
    int d;
    int search_tahunrilisfilm;
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }
    fclose(datafilm);

    datafilm = fopen("datafilm.txt","r");
    int low = 0;
    int high = j-1;
    int position;
    int flag = 0;

    for(int c = 0; c < j; c++){
        char temp[50],temp1[50];int temp2;char temp3[50],temp4[50];int temp5,temp6;
        strcpy(temp,film[c].judul_film);
        strcpy(temp1,film[c].genre_film);
        temp2 = film[c].tahunrilis_film;
        strcpy(temp3,film[c].sutradara_film);
        strcpy(temp4,film[c].studio_film);
        temp5 = film[c].harga_jual;
        temp6 = film[c].harga_sewa;
        d = c-1;
            while (d>=0 && film[d].tahunrilis_film > temp2){
                strcpy(film[d+1].judul_film,film[d].judul_film);
                strcpy(film[d+1].genre_film,film[d].genre_film);
                film[d+1].tahunrilis_film = film[d].tahunrilis_film;
                strcpy(film[d+1].sutradara_film,film[d].sutradara_film);
                strcpy(film[d+1].studio_film,film[d].studio_film);
                film[d+1].harga_jual = film[d].harga_jual;
                film[d+1].harga_sewa = film[d].harga_sewa;
                d = d-1;
            }
            strcpy(film[d+1].judul_film,temp);
            strcpy(film[d+1].genre_film,temp1);
            film[d+1].tahunrilis_film = temp2;
            strcpy(film[d+1].sutradara_film,temp3);
            strcpy(film[d+1].studio_film,temp4);
            film[d+1].harga_jual = temp5;
            film[d+1].harga_sewa = temp6;
    }
    
    printf("||=======================Search Film======================||\n");
    printf("    Masukkan tahun rilis yang ingin kamu cari : ");
    scanf("%i", &search_tahunrilisfilm);

    while (low <= high){
        
        position = low+((search_tahunrilisfilm-film[low].tahunrilis_film)/(film[high].tahunrilis_film-film[low].tahunrilis_film))*(high-low);

        if (film[position].tahunrilis_film == search_tahunrilisfilm){
            printf("\n");
            printf("||====================Data Ditemukan!=====================||\n");
            printf("    Judul\t: %s\n",film[position].judul_film);
            printf("    Genre\t: %s\n",film[position].genre_film);
            printf("    Tahun Rilis\t: %i\n",film[position].tahunrilis_film);
            printf("    Sutradara\t: %s\n",film[position].sutradara_film);
            printf("    Studio\t: %s\n",film[position].studio_film);
            printf("    Harga Jual\t: %i\n",film[position].harga_jual);
            printf("    Harga Sewa\t: %i\n",film[position].harga_sewa);
            printf("||========================================================||\n");
            flag = 1;
            break;
        }else if(search_tahunrilisfilm > film[position].tahunrilis_film){
            low = position + 1;
            
        }else{
            high = position - 1;
        }
    }

    if (flag == 0){
        printf("data tidak ditemukan!");
    }
}

void exponentialsearch_studiofilm(){

    system("cls");
    int d;
    char search_studiofilm[50];
    int j = 0;
    FILE *datafilm;
    datafilm = fopen("datafilm.txt","r");
    while(fread(&film[j],sizeof(film[j]),1,datafilm)){
        j++;
    }

    for(int c = 0; c < j; c++){
        char temp[50],temp1[50];int temp2;char temp3[50],temp4[50];int temp5, temp6;
        strcpy(temp,film[c].judul_film);
        strcpy(temp1,film[c].genre_film);
        temp2 = film[c].tahunrilis_film;
        strcpy(temp3,film[c].sutradara_film);
        strcpy(temp4,film[c].studio_film);
        temp5 = film[c].harga_jual;
        temp6 = film[c].harga_sewa;
        d = c-1;
            while (d>=0 && strcmp(film[d].studio_film,temp4)>0){
                strcpy(film[d+1].judul_film,film[d].judul_film);
                strcpy(film[d+1].genre_film,film[d].genre_film);
                film[d+1].tahunrilis_film = film[d].tahunrilis_film;
                strcpy(film[d+1].sutradara_film,film[d].sutradara_film);
                strcpy(film[d+1].studio_film,film[d].studio_film);
                film[d+1].harga_jual = film[d].harga_jual;
                film[d+1].harga_sewa = film[d].harga_sewa;
                d = d-1;
            }
            strcpy(film[d+1].judul_film,temp);
            strcpy(film[d+1].genre_film,temp1);
            film[d+1].tahunrilis_film = temp2;
            strcpy(film[d+1].sutradara_film,temp3);
            strcpy(film[d+1].studio_film,temp4);
            film[d+1].harga_jual = temp5;
            film[d+1].harga_sewa = temp6;
    }
    
    printf("||=======================Search Film======================||\n");
    printf("    Studio yang ingin dicari : ");
    fflush(stdin); gets(search_studiofilm);

    if(strcmp(film[0].studio_film,search_studiofilm)==0){
            printf("\n");
            printf("||====================Data Ditemukan!=====================||\n");
            printf("    Judul\t: %s\n",film[0].judul_film);
            printf("    Genre\t: %s\n",film[0].genre_film);
            printf("    Tahun Rilis\t: %i\n",film[0].tahunrilis_film);
            printf("    Sutradara\t: %s\n",film[0].sutradara_film);
            printf("    Studio\t: %s\n",film[0].studio_film);
            printf("    Harga Jual\t: %i\n",film[0].harga_jual);
            printf("    Harga Sewa\t: %i\n",film[0].harga_sewa);
            printf("||========================================================||\n");
        
        if (status == 1){
                pilihan_user();
            }else{
                pilihan_admin();
            }
    }
    
    int i = 1;
    while (i<j && strcmp(film[i].studio_film,search_studiofilm)<0){
        i = i*2;
    }
    
    int start = i/2;
    int end = (i<j-1?i:j-1);

    gas:
    if(end >= start){
        
        int mid = start+(end-start)/2;

        if(strcmp(film[mid].studio_film,search_studiofilm)==0){
            printf("||====================Data Ditemukan!=====================||\n");
            printf("  Judul : %s\n",film[mid].judul_film);
            printf("  Genre : %s\n",film[mid].genre_film);
            printf("  Tahun Rilis : %i\n",film[mid].tahunrilis_film);
            printf("  Sutradara : %s\n",film[mid].sutradara_film);
            printf("  Studio : %s\n",film[mid].studio_film);
            printf("  Harga Jual : %i\n",film[mid].harga_jual);
            printf("  Harga Sewa : %i\n",film[mid].harga_sewa);
            printf("||========================================================||\n");
            
        }else if (strcmp(search_studiofilm,film[mid].studio_film)>0){
            start = mid+1;
            goto gas;
        }else{
            end = mid-1;
            goto gas;
        }
    }
    fclose(datafilm);
}

void pilihan_user(){

    int pilih;
        printf("\t  [1]. Lanjut");
        printf("   [2]. Selesai\n");
        scanf("%i",&pilih);
        switch (pilih){
            case 1:
                home_user();
                break;
                
            default:
                printf("Selesai!");
                exit(0);
                break;
        }
}

void about_us(){

    system("cls");
    printf("||================================About Us=================================||\n");
    printf("|| Program ini ditujukan untuk Final Project Pemrograman Lanjut kelas D081 ||\n");
    printf("||            Dosen Pengampu : Fawwaz Ali Akbar, S.Kom, M.Kom.\t\t   ||\n");
    printf("||\t\t\t\t\t\t\t\t\t   ||\n");
    printf("|| Dengan Anggota Kelompok : \t\t\t\t\t\t   ||\n");
    printf("|| [1]. Rico Putra Anugerah\t\t- 20081010024\t\t\t   ||\n");
    printf("|| [2]. Achmad Arif Taufiqqur Rahman\t- 20081010088\t\t\t   ||\n");
    printf("|| [3]. Nadif Rayhan Julio Mohede\t- 20081010135\t\t\t   ||\n");
    printf("|| [4]. Yosia Triputra Rahardjo\t\t- 20081010158\t\t\t   ||\n");
    printf("|| [5]. Ahmad Haikal Nuqqy Zahhar\t- 20081010207\t\t\t   ||\n");
    printf("||=========================================================================||\n");

}