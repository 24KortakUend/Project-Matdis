#include <iostream>
#include <iomanip>
using namespace std;

long long faktorial(long long n) {
    long long hasil;
    if (n == 0) {
        hasil =  1;
    } else if (n <0){
        cout <<"Jumlah n harus lebih dari 0.\n";
        cout <<"Jika n kurang dari 0 maka hasil adalah ";
        hasil = 0;
    } else{
        hasil =  n * faktorial(n - 1);}
    return hasil;
}

long long hasilkombinasinoulang(long long n, long long r){
    return faktorial(n) / (faktorial(r) * faktorial(n-r));
}

long long kombinasitanpaulang(long long n, long long r) {
    long long hasil;
    cout << "Menghitung kombinasi " << n << "C" << r << ":" << endl;
    if (r > n) {
        cout <<"Kombinasi tidak terdefinisi jika r > n\n";
        cout <<"Jika kombinasi tidak terdefinisi maka hasilnya adalah ";
        hasil = 0;
    } else {
        hasil = faktorial(n) / (faktorial(r) * faktorial(n - r));
        cout << n << "C" << r << " = " << n << "! / " << r << "! (" << n << "-" << r <<")!"<<endl;
        cout << n << "C"<< r << " = "<< n;
        for (int j = n - 1; j >= n - r ; j--){ 
            cout<<"."<<j;
        }
        cout<<"! / "<<r<<"! "<< n - r<<"!"<<endl;
        cout<<"\nDisini kita mengeliminasi "<< n - r <<"! menjadi :"<<endl;
        cout<< n << "C"<< r << " = ";
        if (n == n-r) {
            cout<<1;
        } else {
            cout<<n;
        }
        for (int j = n -1; j >= n - r + 1; j--){
            cout<<"."<<j;
        }
        cout<<" / "<<r<<"! "<<endl;
        cout<< n << "C"<< r << " = ";
        if (n == n-r) {
            cout<<1;
        } else {
            cout<<n;
        }
        for (int j = n - 1; j >= n - r + 1; j--){
            cout<<"."<<j;
        }
        cout<<" / ";
        if (r == 0){
            cout<<1;
        } else {
            cout<<r;
        }
        for (int j = r - 1; j >= 1; j--){
            cout<<"."<<j;
        }
        cout<<" = "<<hasil<<endl;
        cout<<"\nJadi, hasil dari "<<n<<"C"<<r<<" adalah ";}
    return hasil;
}

long long faktorialulang(long long n, long long r) {
    long long hasil;
    if (n == 0) {
        hasil = 1;
    } else if (n < 0){
        cout<<"Jumlah n harus lebih dari 0.\n";
        cout<<"Jika n kurang dari 0 maka hasil adalah ";
        hasil = 0;
    } else {
        hasil = (n + r - 1) * faktorial(n + r - 2);}
    return hasil;
    }

long long kombinasiulang(long long n, long long r) {
    long long hasil;
    cout << "\nMenghitung kombinasi " << n << "C" << r << ":" << endl;
    if (r > n) {
        cout<<"Kombinasi tidak terdefinisi jika r > n.\n";
        cout<<"Jika n kurang dari r maka hasil adalah ";
        hasil = 0;} 
    else {
        hasil = faktorialulang(n, r) / (faktorial(r) * faktorial(n - 1));
        cout << n << "C" << r << " = " <<"("<< n <<" + "<<r<<" - 1)"<< "! / " << r << "! (" << n << " - 1)!"<< endl;
        cout << n << "C" << r << " = " << n + r - 1<< "! / " << r << "! " << n - 1 <<"!"<<endl;
        if (n + r -1 != n-1){
            cout<< n << "C"<< r << " = "<< n + r - 1;
            for (int j = n + r - 2; j >= n - 1; j--){
                cout<<"."<<j;
            }
            cout<<"! / "<<r<<"! "<< n-1<<"!"<<endl;
        }
        cout<<"\nDisini kita dapat mengeliminasi "<< n - 1 <<"! menjadi :"<<endl;
        cout<< n << "C"<< r << " = ";
        if (n + r -1 == n-1){
            cout<<1;
        } else {
            cout<<n + r - 1;
        }
        for (int j = n + r - 2; j >= n; j--){
            cout<<"."<<j;
        }
        cout<<" / "<<r<<"! "<<endl;
        cout<< n << "C"<< r << " = ";
        if (n + r -1 == n-1){
            cout<<1;
        } else {
            cout<<n + r - 1;
        }
        for (int j = n + r - 2; j >= n; j--){
            cout<<"."<<j;
        }
        cout<<" / ";
        if (r == 0){
            cout<<1;
        } else {
            cout<<r;
        }
        for (int j = r - 1; j >= 1; j--){
            cout<<"."<<j;
        }
        cout<<" = "<<hasil<<endl;
        cout<<"\nJadi, hasil dari "<<n<<"C"<<r<<" adalah ";
    return hasil;
} return 0;
}

long long ntot(long long jmln, long long en[]){
    long long hasil;
    if (jmln>0){
        hasil = en[jmln-1] + ntot(jmln-1, en);
    } else if (jmln<0){
        cout<<"Anda tidak dapat menginputkan data n apapun.\n";
        cout<<"Data jumlah n yang Anda input harus lebih dari 0 agar Anda dapat menginput data n.";
        hasil = 0;
    } else {
        hasil = 0;
    }
    return hasil;
}

long long n2tot(long long jmln, long long en[]){
    long long hasil;
    if (jmln>1){
        hasil = en[jmln-1] + n2tot(jmln-1, en);
    } else if (jmln<0){
        cout<<"Anda tidak dapat menginputkan data n apapun.\n";
        cout<<"Data jumlah n yang Anda input harus lebih dari 0 agar Anda dapat menginput data n.";
        hasil = 0;
    } else {
        hasil = 0;
    }
    return hasil;
}

long long kombinasibersyarat(long long jmln, long long en[], long long r, long long nmin){
    cout<<"\nPertama kita hitung total dari n, yakni :\n";
    cout<<"n total = n1 ";
    for(int k = 2; k <= jmln; k++){
        cout<<"+ n"<<k;
    }
    cout<<"\nn total = "<<en[0];
    for (int k = 1; k<jmln; k++){
        cout<<" + "<<en[k];
    }
    cout<<"\nn total = "<<ntot(jmln, en);
    cout<<"\n\nLalu kita akan hitung kombinasi tanpa perulangan dari n total yang diketahui bahwa r nya adalah "<<r<<".\n\n";
    cout<<kombinasitanpaulang(ntot(jmln, en), r);
    cout<<"\n\nSelanjutnya kita akan menghitung kombinasi berdasarkan kondisi syarat minimum\n";
    if (n2tot(jmln, en)-nmin >=1){

    }
    long long kondc[n2tot(jmln, en)-nmin];
    long long totall = 0;
    int hasilkom = 0;
    int kondisi = 1;
    for (int k = nmin; k <= r; k++){
        cout<<"\nKondisi #"<<kondisi<<endl;
        cout<<"Jika n1 = "<<k<<" dan n sisanya adalah "<<r-k<<" maka : \n";
        cout<<"~ Jumlah cara memilih "<<k<<" n1 dari "<<en[0]<<" : \n\n";
        cout<<kombinasitanpaulang(en[0], k)<<"\n";
        cout<<"\n~ Jumlah cara memilih "<<r-k<<" n lainnya dari "<<n2tot(jmln,en)<<" : \n";
        cout<<kombinasitanpaulang(n2tot(jmln, en), r-k)<<"\n";
        hasilkom = hasilkombinasinoulang(en[0], k) * hasilkombinasinoulang(n2tot(jmln, en), r-k);
        cout<<"\nTotal kombinasi untuk semua kondisi ini adalah "<<hasilkombinasinoulang(en[0], k)<<" x "<<hasilkombinasinoulang(n2tot(jmln, en), r-k)<<" = "<<hasilkom<<endl;
        kondc[kondisi-1] = hasilkom;
        totall = totall + hasilkom;
        kondisi++;
    }
    cout<<"\nSekarang kita dapat jumlahkan semua kondisi yang memenuhi syarat : \n";
    cout<<"Total = "<<kondc[0];
    for (int k = 1; k<n2tot(jmln, en)-nmin; k++){
        cout<<" + "<<kondc[1];
    }
    cout<<" = ";
    return totall;
}

int main(){
    system("cls");
    long long n, r, jmln, nmin, ntot, ntot2 = 0; 
    long long *en = nullptr;//18 digit, nullptr
    bool negatif;
    int pilih;
    char pesan, masukn, datam, ncs1, ncs2;
    do{
        system("cls");
        cout << "|" << "Matematika Diskrit" << "|\n";
        cout << "Pilihan Menu : \n";
        cout << "1. Kombinasi Tanpa Perulangan\n";
        cout << "2. Kombinasi Dengan Perulangan\n";
        cout << "3. Kombinasi Tanpa Perulangan Bersyarat\n";
        cout << "4. Soal Kombinasi Dengan Perulangan\n";
        cout << "0. Keluar \n";
        cout << "Pilih : "; cin >> pilih;
        system("cls");
        switch(pilih){
        case 1 :
        do {
            cout << "|" << "Kalkulator Kombinasi Tanpa Perulangan" << "|\n";
            cout << "Masukkan nilai n: "; cin >> n;
            cout << "Masukkan nilai r: "; cin >> r;
            if (n < 0 || r < 0) {
                cout<<"Input yang Anda masukkan kurang dari 0.\n";
                cout<<"Operasi Kombinasi ini perlu menggunakan faktorial dan tidak ada faktorial bilangan negatif.\n";
                cout<<"Silahkan input ulang nilai n dan r\n\n";
                ncs1 = 'y';
            } else {
                ncs1 = 'n';
                cout << kombinasitanpaulang(n, r) << endl;
            }
        } while (ncs1 == 'y');
        cout << "\nKembali ke menu? (y/n) : "; cin >> pesan;
        break;
        
        case 2 :
        do {
            cout << "|" <<  "Kalkulator Kombinasi Dengan Perulangan" << "|\n";
            cout << "Masukkan nilai n: "; cin >> n;
            cout << "Masukkan nilai r: "; cin >> r;
            if (n < 0 || r < 0) {
                cout<<"Input yang Anda masukkan kurang dari 0.\n";
                cout<<"Operasi Kombinasi ini perlu menggunakan faktorial dan tidak ada faktorial bilangan negatif.\n";
                cout<<"Silahkan input ulang nilai n dan r\n\n";
                ncs2 = 'y';
            } else {
                ncs2 = 'n';
                cout << kombinasiulang(n, r);
            }
        } while (ncs2 == 'y');
        cout << "\n\nKembali ke menu? (y/n) : "; cin >> pesan;
        break;
    
        case 3 :
        do {
            cout << "|" << "Kombinasi Tanpa Perulangan Bersyarat" << "|\n";
            cout<<"Masukkan jumlah jenis n yang akan dimasukkan : "; cin>>jmln;
            en = new long long [jmln];
            if (jmln<1){
                cout<<"Jumlah jenis n yang Anda masukkan kurang dari 1.\n";
                cout<<"Anda tidak dapat menginputkan data n jika jumlah jenisnya kurang dari 1.\n";
                cout<<"Silahkan masukkan jumlah jenis n lebih dari 1.\n";
                cout<<"\nIngin masukkan ulang? (y/n) : "; cin>>masukn;
            } else {
                do {
                    for(int s = 0; s < jmln; s++){
                        cout<<"Masukkan n"<<s+1<<" : "; cin>> en[s];
                    }
                    cout<<"Masukkan r : "; cin>>r;
                    cout<<"Masukkan syarat minimum untuk n1 : "; cin>>nmin;
                    for (int k = 0; k<jmln; k++){
                        if (en[k] < 0){
                            negatif = true;
                        }
                    }
                    if (negatif == true || r < 0 || nmin < 0){
                        cout<<"Salah satu atau bahkan leboh dari data yang Anda inputkan bernilai negatif.\n";
                        cout<<"Penyelesaian pada rumus kombinasi ini perlu menggunakan faktorial.\n";
                        cout<<"Masukkan input yang bernilai positif karena bilangan negatif tidak memiliki faktorial.\n";
                        datam = 'y';
                    } else {
                        for (int k = 0; k < jmln; k++){
                            ntot2 = ntot2 + en[k];
                        }
                        if ((jmln == 1 && (en[0] < r || en[0] < nmin)) || ntot2 < r){
                            cout<<"Kombinasi tidak terdefinisi jika r > n.\n";
                            datam = 'y';
                            delete[] en;
                        } else if ((jmln == 1 && r > 2) || (jmln == 1 && r == nmin) || (ntot2 == 0 && r > nmin)){
                            cout<<kombinasitanpaulang(en[0], r);
                            datam = 'n';
                            delete[] en;
                        } else if ( (ntot2 == 0 && nmin > r) || (jmln == 1 && nmin > r)){
                            cout<<kombinasitanpaulang(en[0], nmin);
                            datam = 'n';
                            delete[] en;
                        } else if (en[0] == 0 && nmin == 0){
                            cout<<kombinasitanpaulang(ntot2, r);
                            datam = 'n';
                            delete[] en;
                        } else if (ntot2 < r || ntot2 < nmin) {
                            cout<<"Nilai dari n total harus lebih dari r dan n1 minimal, agar program dapat berjalan.\n";
                            datam = 'y';
                            delete[] en;
                        } else if (jmln > 1 && en[0] < nmin) {
                            cout<<"Nilai dari n1 harus lebih besar dari nilai minimum n1.\n";
                            datam = 'y';
                            delete[] en;
                        }else {
                            datam = 'n';
                            cout<<kombinasibersyarat(jmln, en, r, nmin);
                            delete[] en;
                        }
                    }
                } while (datam == 'y');
            }
        } while (masukn == 'y');
        cout << "\n\nKembali ke menu? (y/n) : "; cin >> pesan;
        break;
        
        case 4 :
        cout << "\n\nKembali ke menu? (y/n) : "; cin >> pesan;
        
        break;
        
        case 0 :
        pesan = 'n';
        break;

        default : 
            cout << "Pilihan Tidak Valid!\n";
            cout << "\nKembali ke menu? (y/n) : "; cin >> pesan;
    }} while (pesan == 'y' || pesan == 'Y');
return 0;
}