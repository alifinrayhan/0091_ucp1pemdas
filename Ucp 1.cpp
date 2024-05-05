// 1. - int Angka = 5;, String Nama = Joko;, Char Pilihan;
// 2.  #include <iostream>
//using namespace std;

// string nama;
//int nXpander, nPorsche , nAvanza , nBrio , nLamborghini;
//int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;

//void input (){
  //  cout << "Nama Pembeli : ";
    //cin >> nama;
    //cout << "Jumlah XPander : ";
    //cin >> nXpander;

    //cout << "Jumlah Porsche : ";
    //cin >> nPorsche;

    //cout << "Jumlah Avanza : ";
    //cin >> nAvanza;

    //cout << "Jumlah Brio : ";
    //cin >> nBrio;

    //cout << "Jumlah Lamborghini : ";
    //cin >> nLamborghini;



//}

//int TotalHarga(){
  //  return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) + (nLamborghini * hLamborghini);



//}

//void Display(){
  //  cout << "Total Harganya : " << TotalHarga() << endl;

//}

//int main(){

  //  input();
    //Display();
//}

// 3. Perulangan For
    // #include <iostream>
//using namespace std;

//int main(){

    //int i;
    //int arr[5];

    //for(i = 0; i < 5;  i ++){

       // cout << i << " : " << "Alifin" << endl;

    //}

    //for (i = 0; i < 5; i ++){

      //  cout << "Masukkan Bilangan = ";
        //cin >> arr[i];

    
    //}

    //for (i = 0; i < 5; i ++){

      //  cout << "Bilangan ke - " << i << arr[i] << endl;
    //}
//}

 // Perulangan while

 // #include <iostream>
//Using namespace std;


//int main(){

  //  int bilangan;

    //srand(time(0));

    //bilangan = rand() % 12;

    //while(bilangan % 2){

      //  cout << bilangan << endl;
        //cout << " Maka bilangan ganjil" << endl;

        //bilangan = rand () % 12;

    //}

    //cout << "bilangan" << endl;
    //cout << "bilangannya genap" << endl;

//}

// Perulangan Do While

// #include <Iostream>
//using namespace std;

//int main(){
   //  char pilihan;
    //do{
        //cout << "Berangkat ambil takjil" << endl;
      //  cout << "Antri takjil" << endl;
        //cout << "Ambil takjil" << endl;
        //cout << "Apakah mau antri kembali ?" << endl;
        //cin >> pilihan;

    //}while(pilihan == 'y' || pilihan == 'y');
//}

 // 4.


 // 5. #include <iostream>
//using namespace std;

//struct Mahasiswa {
  //  string nim;
    //string nama;
    //string alamat;
    //string umur;
//};

//int main() {
  //  Mahasiswa mhs;
    //cout << "Nomor Mahasiswa : ";
    //cin >> mhs.nim;
    //cout << "Nama Mahasiswa : ";
    //cin >> mhs.nama;
    //cout << "Alamat Mahasiswa : ";
    //cin >> mhs.alamat;
    //cout << "Umur  Mahasiswa : ";
    //cin >> mhs.umur;

    //cout << endl;
    //cout << "\n Nim : " << mhs.nim;
    //cout << "\n Nama : " << mhs.nama;
    //cout << "\n Alamat : " << mhs.alamat;
    //cout << "\n Umur : " << mhs.umur;
//}

// 6.

#include <iostream>
using namespace std;

int main(){

    string status;
    int nKota1, nKota2;
    cout << "Masukan Nama kota 1 = ";
    cin >> nKota1;
    cout << "Masukan Nama Kota 2 = ";
    cin >> nKota2;

    if ( nKota1 > 75 || nKota2 >= 45 ){
        status = "Tidak Sehat";


    }

    else{
        status = "Sehat";
    }

    cout << "Statusnya Adalah : " << status << endl;
    return 0;

}
