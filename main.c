#include <stdio.h>
#include <stdlib.h>


void detailPelanggan(char nama[], char alamat[], int pembayaran, char kelompok[], char golongan[], int tanggalBayar ) {
    
    printf("============================================= \n");
    printf("           Pembayaran Rekening Air \n");
    printf("============================================= \n");
    printf(" Nama Lengkap = %s \n", nama);
    printf(" Alamat       = %s \n", alamat);
    printf(" Kelompok     = %s \n", kelompok);
    printf(" Golongan     = %s \n", golongan);
    printf(" Jatuh Tempo  = 31 - 10 - 2022 \n");
    printf("Tanggal Bayar = %d - 10 - 2022 \n", tanggalBayar);
    printf("============================================= \n");
    printf("Total         = %d \n", pembayaran);
    printf("============================================= \n");
}

// golongan rumah tangga
void D11(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D1-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat: ");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<=10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*1780;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2060;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*5820;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D12(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D1-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat: ");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<=10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2060;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2340;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*5940;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D13(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D1-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6340;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9200;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9600;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D14(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D1-4";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6420;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9350;
    } else if(pemakaianBulanini-pemakaianBulanlalu<30){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9650;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D21(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D2-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2340;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2620;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6000;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D22(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D2-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2620;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2900;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6060;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D23(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D2-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6490;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9500;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9800;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D24(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D2-4";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6570;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9650;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9950;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D31(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D3-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*2900;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*3180;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6120;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D32(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D3-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*3180;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*3460;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6180;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D33(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D3-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6640;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9800;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10100;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D34(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D3-4";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6720;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9950;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10250;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D41(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D4-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*3460;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*3740;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6240;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D42(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D4-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*3740;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*4020;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6300;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D43(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D4-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6790;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10100;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10400;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D44(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D1-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6870;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10250;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10550;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D51(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D5-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*6940;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10400;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10700;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D52(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D5-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*7020;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10550;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10850;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D53(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D5-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*7090;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10700;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11000;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void D54(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Rumah Tangga";
    char golongan[]="D5-4";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*7170;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10850;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11150;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E11(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E1-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9200;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9850;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10950;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E12(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E1-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9500;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10150;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11250;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E13(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E1-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*9800;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10450;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11550;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E14(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E1-4";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10100;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10750;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11850;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E21(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E2-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10400;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11050;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*12150;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E22(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E2-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*10700;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11350;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*12550;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E23(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E2-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11000;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11650;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*13150;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E24(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E2-4";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11300;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11950;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*13950;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E31(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E3-1";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11600;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*12250;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*14750;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E32(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E3-2";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*11900;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*12550;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*15050;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E33(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E3-3";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*12200;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*12850;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*15850;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void E34(){
    system("clear");
    char nama[50], alamat[50];
    int pembayaran, tanggalBayar;
    char kelompok[]="Usaha";
    char golongan[]="E3-4";
    float pemakaianBulanini, pemakaianBulanlalu;
    
    printf("=================================== \n");
    printf("                DATA                \n");
    printf("=================================== \n");
    getchar();
    printf(" Nama Lengkap: ");
    scanf("%[^\n]", nama);
    getchar();
    printf(" Alamat:");
    scanf("%[^\n]", alamat);
    getchar();
    printf(" Pemakaian bulan lalu (m3): ");
    scanf("%f", &pemakaianBulanlalu);
    printf(" Pemakaian bulan ini  (m3): ");
    scanf("%f", &pemakaianBulanini);
    printf(" Tanggal Bayar: ");
    scanf("%d", &tanggalBayar);
    
    if(pemakaianBulanini-pemakaianBulanlalu<10){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*12500;
    } else if(pemakaianBulanini-pemakaianBulanlalu<=20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*13150;
    } else if(pemakaianBulanini-pemakaianBulanlalu>20){
        pembayaran=(pemakaianBulanini-pemakaianBulanlalu)*16650;
    }
    detailPelanggan( nama, alamat, pembayaran, kelompok, golongan, tanggalBayar);
}

void dayaListrik1(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            D11();
            break;
        case 2:
            D12();
            break;
        case 3:
            D13();
            break;
        case 4:
            D14();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrik1();
    }
}

void dayaListrik2(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            D21();
            break;
        case 2:
            D22();
            break;
        case 3:
            D23();
            break;
        case 4:
            D24();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrik2();
    }
}

void dayaListrik3(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            D31();
            break;
        case 2:
            D32();
            break;
        case 3:
            D33();
            break;
        case 4:
            D34();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrik3();
    }
}

void dayaListrik4(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            D41();
            break;
        case 2:
            D42();
            break;
        case 3:
            D43();
            break;
        case 4:
            D44();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrik4();
    }
}

void dayaListrik5(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            D51();
            break;
        case 2:
            D52();
            break;
        case 3:
            D53();
            break;
        case 4:
            D54();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrik5();
    }
}

void dayaListrikE1(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            E11();
            break;
        case 2:
            E12();
            break;
        case 3:
            E13();
            break;
        case 4:
            E14();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrikE1();
    }
}

void dayaListrikE2(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            E21();
            break;
        case 2:
            E22();
            break;
        case 3:
            E23();
            break;
        case 4:
            E24();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrikE2();
    }
}

void dayaListrikE3(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            DAYA LISTRIK            \n");
    printf("=================================== \n");
    printf(" 1. 450 VA \n");
    printf(" 2. 900 VA \n");
    printf(" 3. 1300 VA \n");
    printf(" 4. >1300 VA \n");
    printf(" Masukan daya listrik yang anda gunakan: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            E31();
            break;
        case 2:
            E32();
            break;
        case 3:
            E33();
            break;
        case 4:
            E34();
            break;
        default:
            printf(" Pilihan Anda tidak valid, ulangi! \n\n");
            getchar();
            dayaListrik2();
    }
}

void golRT(){
    system("clear");
    int pilih;
    
    printf("=================================== \n");
    printf("            LEBAR JALAN             \n");
    printf("=================================== \n");
    printf(" 1. 0-3,99 meter \n");
    printf(" 2. 4-6,99 meter \n");
    printf(" 3. 7-10 meter \n");
    printf(" 4. >10 meter \n");
    printf(" Masukan lebar jalan Anda: \n");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            dayaListrik1();
            break;
        case 2:
            dayaListrik2();
            break;
        case 3:
            dayaListrik3();
            break;
        case 4:
            dayaListrik4();
        default:
            printf(" Masukan Anda tidak valid, ulangi!");
            getchar();
            golRT();
            
    }
}
    
    void golUsaha(){
        system("clear");
        int pilih;
        
        printf("=================================== \n");
        printf("            LEBAR JALAN             \n");
        printf("=================================== \n");
        printf(" 1. 0-6,99 meter \n");
        printf(" 2. 7-10 meter \n");
        printf(" 3. >10 meter \n");
        printf(" Masukan lebar jalan Anda: \n");
        scanf("%d", &pilih);
        
        switch(pilih){
            case 1:
                dayaListrikE1();
                break;
            case 2:
                dayaListrikE2();
                break;
            case 3:
                dayaListrikE3();
                break;
                
            default:
                printf(" Masukan Anda tidak valid, ulangi!");
                getchar();
                golUsaha();
        }
    
}

void golongan(){
    system("clear");
    int pilih;
    
    printf("============================================= \n");
    printf("             PILIH GOLONGAN ANDA              \n");
    printf("============================================= \n");
    printf(" 1. Golongan Rumah Tangga \n");
    printf(" 2. Golongan Usaha \n");
    printf(" Masukan pilihan Anda: ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case 1:
            golRT();
            break;
        case 2:
            golUsaha();
            break;
        default:
            printf("Masukan Anda tidak valid, ulangi!");
            getchar();
            golongan();
    }
}

    int main(){
        golongan();
        return 0;
    }
    
    
