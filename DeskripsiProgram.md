# Program Penjualan dan Penyewaan Film
Project akhir kami adalah tentang penjualan dan penyewaan Film.
Program kami memiliki 2 point-of-view yaitu admin dan user, yang dimana user memiliki akses terbatas daripada admin. Admin memiliki kapasitas untuk CRUD film yang tersedia dan user tidak dapat mengotak-atik data yang ada didalam film yang tersedia, user hanya dapat menampilkan datanya saja.

Kami juga menerapkan semua materi sorting yang telah dipelajari di semester 3 ini, yaitu Bubble Sort, Selection Sort, Insertion Sort, yang digunakan untuk menyorting secara ascending dan descending list film yang tersedia. Bubble Sort digunakan untuk sorting judul film, Selection Sort untuk genre dan tahun rilis film, Insertion Sort untuk sutradara dan studio film.

Di dalam program, kami juga menyajikan fitur search untuk mencari film yang ingin dicari. Data film yang dapat dicari adalah judul film, genre film, tahun rilis film, sutradara film, studio film dengan menerapkan semua materi tentang search yang telah dijelaskan selama semester 3 ini.

Sesuai dengan fungsi utama dari project ini, kami ada fitur untuk menjual dan menyewakan film. Data dari penjualan dan penyewaan film disimpan didalam file yang dimana nanti dapat ditampilkan riwayat penjualan atau penyewaannya(admin yang dapat mengakses).

Admin :
- Admin dapat mengelola data, yaitu insert,read,update,delete data yang tersedia
- Melakukan pencarian berdasarkan Judul,Genre, nama Sutradara, Tahun Rilis, Nama Studio
- Melihat daftar transaksi dari penjualan dan penyewaan
- Melihat daftar request film yang diinginkan user

User
- User dapat melihat tampilan daftar film serta search berdasarkan Judul,Genre, nama Sutradara, Tahun Rilis, Nama Studio
- Melakukan request film yang diinginkan
- Melakukan transaksi penyewaan ataupun penjualan

# Screenshot Aplikasi
## Menu Utama
![image](https://user-images.githubusercontent.com/93566840/147403176-fea69322-6050-4407-be45-1a63de3d9d64.png)
## Login Sebagai Admin :

### 1. Home Admin
![image](https://user-images.githubusercontent.com/93566840/147403211-0775ac7c-b0a1-40a6-b2e1-e726596ab88a.png)

## 2. Menu List Film Admin
![image](https://user-images.githubusercontent.com/93566840/147403214-1e6f009f-9df4-4fd7-b553-a5ff3a7e8479.png)
### 2.1 Menu Kelola Data
![image](https://user-images.githubusercontent.com/93566840/147403254-9033265d-c754-4d3f-9db0-12c992d0c839.png)
#### 2.1.1 Insert Data
![image](https://user-images.githubusercontent.com/93566840/147403286-5c6557d6-1e1e-4f8e-910d-75ebae9c5e9f.png)
#### 2.1.2 Lihat Data
![image](https://user-images.githubusercontent.com/93566840/147403296-3b64c6fd-c265-45b6-bd18-6a47b14ce549.png)
#### 2.1.3 Update Data
![image](https://user-images.githubusercontent.com/93566840/147403311-73f21d42-62f6-4c9f-9024-8b3184313e31.png)
#### 2.1.4 Delete Data
![image](https://user-images.githubusercontent.com/93566840/147403323-b66b69c0-56c2-4f42-9a08-824f5a70fcb8.png)
### 2.2 List Film
![image](https://user-images.githubusercontent.com/93566840/147403333-1ab8f19b-317f-47b8-90bf-bbe59fff9841.png)
### 2.3 List Request Film
![image](https://user-images.githubusercontent.com/93566840/147403342-c23d4629-cb16-4990-a6c0-29a9747d91d9.png)

## 3. Search Film
![image](https://user-images.githubusercontent.com/93566840/147403453-c5b392fa-ca05-4971-a4db-549872943d8d.png)
### 3.1 Search Judul Film
![image](https://user-images.githubusercontent.com/93566840/147403461-a4b9ce67-c1b2-461c-bcd9-e4c207f490de.png)
### 3.2 Search Genre Film
![image](https://user-images.githubusercontent.com/93566840/147403468-35943580-ec61-45e4-8285-fbcaa32ba55f.png)
### 3.3 Search Tahun Rilis Film
![image](https://user-images.githubusercontent.com/93566840/147403494-3d2436d5-a32c-4905-b3f7-791399623876.png)
### 3.4 Search Sutradara Film
![image](https://user-images.githubusercontent.com/93566840/147403507-85d73b07-26d8-49b4-ad39-1a9835b5120e.png)
### 3.5 Search Studio Film
![image](https://user-images.githubusercontent.com/93566840/147403511-7a38c017-9feb-47ba-9069-b1be5cba661e.png)

## 4. Menu Transaksi Film Admin
![image](https://user-images.githubusercontent.com/93566840/147403519-58eb2025-3354-455e-90a8-d00b4307b012.png)
### 4.1 List Riwayat Transaksi Film
![image](https://user-images.githubusercontent.com/93566840/147403529-9493ac07-11c2-47c5-b15d-6018967e5a3e.png)

## 5. Menu About Us
![image](https://user-images.githubusercontent.com/93566840/147403541-c78abb6f-322e-4698-92c9-33d48db7798e.png)

## Login Sebagai User :

## 1. Home User
![image](https://user-images.githubusercontent.com/93566840/147403617-0f5e074c-86c2-47e1-9057-a4c888e72d94.png)
## 2. Menu List Film User
![image](https://user-images.githubusercontent.com/93566840/147403839-d78f46e2-99bb-440a-b2b1-f9e533cb3db4.png)
### 2.1 Request Film
![image](https://user-images.githubusercontent.com/93566840/147403650-56984ae0-ef5f-45fd-82f8-c54eef9f685d.png)
### 2.2 Daftar Film
![image](https://user-images.githubusercontent.com/93566840/147403659-09c29133-927e-491c-acd7-5dbddc51c770.png)
#### 2.2.1 Urutkan Film
![image](https://user-images.githubusercontent.com/93566840/147403661-c7e27b14-0079-446f-8744-5045f161f7fd.png)
#### 2.2.1.1 Urutkan Berdasarkan Judul Film
![image](https://user-images.githubusercontent.com/93566840/147403672-5284c02e-cafd-4283-bb3e-e07aa73d19e6.png)
![image](https://user-images.githubusercontent.com/93566840/147403675-17a5d59e-2e4a-4084-b0f0-ea11e7cc30a6.png)
#### 2.2.1.2 Urutkan Berdasarkan Genre Film
![image](https://user-images.githubusercontent.com/93566840/147403692-d14dcd57-8b2b-4975-b69c-650372a08f46.png)
![image](https://user-images.githubusercontent.com/93566840/147403693-540ada00-84f4-4849-843d-9b7dc5879137.png)
#### 2.2.1.3 Urutkan Berdasarkan Tahun Rilis Film
![image](https://user-images.githubusercontent.com/93566840/147403718-d1807e36-4962-457b-8f9e-594068ce24de.png)
![image](https://user-images.githubusercontent.com/93566840/147403719-3267b7a0-49a3-4b93-9a12-415a612f9add.png)
#### 2.2.1.4 Urutkan Berdasarkan Sutradara Film
![image](https://user-images.githubusercontent.com/93566840/147403732-23810951-9c26-44b3-80c3-f6ae71102e25.png)
![image](https://user-images.githubusercontent.com/93566840/147403737-3b910fd3-0327-4f27-a8a2-5e833c7c0cd1.png)
#### 2.2.1.5 Urutkan Berdasarkan Studio Film
![image](https://user-images.githubusercontent.com/93566840/147403758-7c690560-2206-45ea-b34a-9c9958e2dd38.png)
![image](https://user-images.githubusercontent.com/93566840/147403759-aba14ccf-4252-4353-97c6-5a4fde0e6a8a.png)

## 3. Search Film

  Sama dengan yang ada di Admin
  
## 4. Menu Transaksi Film User
![image](https://user-images.githubusercontent.com/93566840/147403781-46e6ab10-41ab-4ab5-8852-7170d04e9f3c.png)
### 4.1 Beli Film
![image](https://user-images.githubusercontent.com/93566840/147403785-580d0270-becb-4290-a38e-8055cdec2342.png)
### 4.2 Sewa Film
![image](https://user-images.githubusercontent.com/93566840/147403793-dc953d9c-923f-40eb-b3e6-1feecffede66.png)

## 5. About Us

  Sama dengan yang ada di Admin
  
# Nama Anggota Kelompok
 
- Rico Putra Anugerah - 20081010024
- Achmad Arif Taufiqqur Rahman - 20081010088
- Nadif Rayhan Julio Mohede - 20081010135
- Yosia Triputra Rahardjo - 20081010158
- Ahmad Haikal Nuqqy Zahhar - 20081010207


# Data yang digunakan
1. Film

  - Judul Film
  - Genre Film
  - Tahun Rilis Film
  - Sutradara Film
  - Studio Film
  - Harga Jual
  - Harga Sewa
2. Request Film

  - Judul Request Film
  - Tahun Rilis Request Film
  - Studio Request Film
3. Riwayat Transaksi Film

  - Riwayat Judul Film
  - Riwayat Genre Film
  - Riwayat Tahun Rilis Film
  - Riwayat Sutradara Film
  - Riwayat Studio Film
  - Riwayat Transaksi
  - Riwayat Bayar
  - Riwayat Kembali
# Metode yang diterapkan
- CRUD
- Insertion Sort
- Selection Sort
- Sequential Search
- Binary Search
- Interpolation Search
- Jump Search
- Exponential Search
# List Menu yang ditawarkan

# Cara Penggunaan Aplikasi
- Cara Penggunaan Aplikasi sebagai User
1. Jalankan Aplikasinya
2. Setelah dijalankan user akan memilih login sebagai user
3. Setelah itu akan tampil 5 menu yaitu home, list film, search film, transaksi film, about us.
4. User akan memilih menu dengan menginputkan angka yang sesuai dengan menunya. Jika menginputkan angka 1 yaitu home, maka akan muncul menu home yang merupakan tampilan awal aplikasi.
5. Lalu menu selanjutnya adalah list film, Jika menginputkan angka 2 yaitu list film, akan muncul request film dan daftar film. user akan memilih diantara kedua itu dengan menginputkan angka sesuai dengan pilihannya. jika user menginputkan angka 2 yaitu daftar film, maka daftar film yang tersedia akan muncul di aplikasi.
6. Setelah data dari film yang tersedia telah keluar, user dapat memilih apakah mau mengurutkan datanya agar nyaman dilihat atau tidak, jika tidak maka pilih pilihan selesai dengan menginputkan angka sesuai dengan pilihannya, jika menginputkan angka 1 yaitu urutkan film, maka akan muncul urutkan berdasarkan judul,genre,tahun rilis,sutradara,studio.
7. User akan memilih mengurutkan berdasarkan si user inginkan dengan menginputkan angka sesuai dengan pilihannya. setelah itu akan ada pilihan mau lanjut atau selesai, jika mau mengakses menu lainnya maka pilih lanjut, jika tidak maka pilih selesai.
8. Selanjutnya ada pilihan ke 1 yaitu Request Film. Jika user menginputkan angka 1 yaitu Request Film. Maka user akan menginputkan judul,tahun rilis,studio film yang user inginkan. Setelah request film yang diinginkan, maka akan ada pilihan mau lanjut atau selesai, jika mau request lagi atau mengakes menu lainnya pilih lanjut dengan menginputkan angka yang tertera, jika tidak maka pilih selesai.
9. Lalu selanjutnya yaitu menu ketiga ada menu search film, dengan user menginputkan angka 3 maka akan muncul pilihan search berdasarkan apa, aplikasi kami menawarkan search berdasarkan judul,genre,tahun rilis,sutradara,studio film. user akan memilih search berdasarkan apa dengan menginputkan angka yang tertera. jika user menginputkan angka 1 yaitu search berdasarkan judul, maka user akan input judul yang ingin dicari, begitupun yang lainnya. setelah itu akan ada pilihan apakah lanjut atau tidak, jika lanjut maka pilih lanjut, jika tidak maka pilih selesai.
10. Lalu selanjutnya ada menu keempat yaitu Transaksi Film, dengan user menginputkan angka 4 maka akan masuk ke menu transaksi film. di dalam menu transaksi film akan diberi pilihan ingin membeli atau menyewa, jika user memilih membeli, maka user akan memilih film mana yang akan dibeli dan membayar sesuai harga yang tertera. Jika user hanya menyewa film, maka user akan memasukkan berapa hari durasinya untuk menyewa filmnya lalu membayar sesuai harga yang tertera. Setelah membeli/sewa akan keluar struk pembelian/sewa.
11. Tersisa menu terakhir yaitu about us, yang berisi tujuan program dan juga data diri anggota.

- Cara Penggunaan Aplikasi sebagai Admin
1. Jalankan Aplikasinya
2. Setelah dijalankan user akan memilih login sebagai admin
3. Setelah itu akan tampil 5 menu yaitu home, list film, search film, transaksi film, about us.
4. User akan memilih menu dengan menginputkan angka yang sesuai dengan menunya. Jika menginputkan angka 1 yaitu home, maka akan muncul menu home yang merupakan tampilan awal aplikasi.
5. Lalu menu selanjutnya adalah list film, dengan user menginputkan angka 2 yaitu list film, akan muncul pilihan kelola data, daftar film, dan juga list request film. user akan memilih dengan menginputkan angka yang sesuai dengan pilihannya, dengan user menginputkan 1 yaitu kelola data yang terdiri dari insert data,read data,update data,delete data, yang difungsikan untuk admin menambah film yang tersedia, lalu ada read data untuk melihat data yang tersedia, update data untuk memperbarui data atau membenarkan data yang 
6. Jika user menginputkan angka yang sesuai dengan insert data yaitu 1, maka user akan memasukkan judul,genre,tahun rilis,sutradara,studio,harga jual,harga sewa. setelah memasukkkan data akan ada pilihan mau lanjut atau selesai, jika mau memasukkan data atau mengakses menu lainnya maka pilih lanjut, jika tidak maka pilih selesai.
7. Jika user memilih read data, maka user akan ditampilkan daftar film yang tersedia.
8. Lalu selanjutnya ada update data,Jika user menginputkan angka yang sesuai dengan update data, maka user akan memasukkan judul film yang mau di update, lalu memasukkan data film terbaru.
9. Jika film tersebut sold out, maka film tersebut perlu untuk ditarik dari daftar film yang tersedia, maka dari itu user akan menghapus film yang sold out dengan memilih delete data. user akan memasukkan judul dari film yang akan didelete, setelah itu data dari filmnya akan terhapus.
10. lalu menu selanjutnya yang ada di list film yaitu list film, dengan user menginputkan angka 2 didalam menu list film, maka akan muncul daftar film yang tersedia. setelah itu akan ada pilihan apakah lanjut atau tidak, jika lanjut maka pilih lanjut, jika tidak maka pilih selesai.
11. Lalu menu selanjutnya yang ada di list film yaitu list film, dengan user menginputkan angka 2 didalam menu list film, maka akan muncul daftar film yang tersedia. setelah itu akan ada pilihan apakah lanjut atau tidak, jika lanjut maka pilih lanjut, jika tidak maka pilih selesai.
12. Lalu selanjutnya yaitu menu ketiga ada menu search film, dengan user menginputkan angka 3 maka akan muncul pilihan search berdasarkan apa, aplikasi kami menawarkan search berdasarkan judul,genre,tahun rilis,sutradara,studio film. user akan memilih search berdasarkan apa dengan menginputkan angka yang tertera. jika user menginputkan angka 1 yaitu search berdasarkan judul, maka user akan input judul yang ingin dicari, begitupun yang lainnya. setelah itu akan ada pilihan apakah lanjut atau tidak, jika lanjut maka pilih lanjut, jika tidak maka pilih selesai.
13. Lalu selanjutnya ada menu transaksi film admin, dengan user menginputkan angka 4 yaitu transaksi film, maka akan muncul list transaksi film dari user yang telah membeli atau menyewa film. Setelah itu akan ada pilihan apakah lanjut atau tidak, jika lanjut maka pilih lanjut, jika tidak maka pilih selesai.
14. Tersisa menu terakhir yaitu about us, yang berisi tujuan program dan juga data diri anggota.


