# Distance-Vector-Simulation
Implementing Distance Vector Simulation in a network graph for Computer Network Course assignment

# Tugas Besar 02 IF3130 Jaringan Komputer
# Distance Vector Simulation
*by: Dibantu Teman - K02*

## Authors

1. 13515008 - Kanisius Kenneth Halim

2. 13515038 - Irene Edria Devina

3. 13515134 - Dicky Novanto

## Descriptions 

Pada Tugas ini kalian diminta untuk melakukan simulasi Distance Vector Protocol. Kalian akan membuat sebuah program yang akan menerima input berupa topologi network lalu program akan mengeluarkan output berupa routing table.

Pada distance vector, setiap node akan menyimpan sebuah vector yang berisi cost perpindahan dari node itu ke node lain yang berada pada jaringan. Secara berkala, vector tersebut akan dikirimkan kepada tetangga dari node tersebut. Ketika sebuah node menerima vector dari tetangganya, ia akan menambahkan informasi dari vector yang diterima tersebut terhadap vector miliknya.

Awalnya, nilai vector pada setiap node akan diset 1 untuk node yang menjadi tetangga, 0 untuk dirinya, serta tak terhingga untuk node-node lain. Ketika sebuah node mendapat informasi vector dari tetangganya, lalu menemukan bahwa salah satu nilai cost dalam vector yang dimiliki tetangga lebih kecil daripada cost yang ia ketahui atau cost bernilai sama tetapi nomor tetangga yang dimiliki lebih kecil, maka node akan merubah vectornya menjadi cost yang baru. Node juga akan mencatat bahwa packet yang datang akan dikirimkan melalui tetangga tersebut.


## Run the programs

Kompilasi program dapat dilakukan dengan pemanggilan command `make`



## Question

1. 	**Q:** Bagaimana anda mensimulasikan sebuah node dalam program anda? Bagaimana proses pengiriman pesan antar node terjadi? Jelaskan dengan menggunakan nama fungsi dan/atau struktur data yang anda gunakan <br/>
	**A:** 

2. **Q:** Apakah perbedaan dari routing protocol distance-vector dan link state? Manakah yang lebih baik untuk digunakan? <br/>
	**A:** Distance-vector memperhitungkan jarak dan arah dalam melakukan routing dengan memilih jarak dan arah terdekat (hop count). Setiap router akan mengirimkan routing table ke router terdekatnya, tanpa mengetahui topologi/bagaimana mereka terkoneksi. Sedangkan link state memperhitungkan metric cost. Router-router akan melakukan pertukaran informasi antar jaringan dan membangun topologi table. Setiap router akan menggunakan algoritma Dijstra's untuk menghitung rute terbaik. 
	Tergantung dari persoalannya, jika missalnya seluruh link pada network kecepatannya sama, maka Distance Vector lebih baik untuk digunakan, namun jika kecepatan link pada network berbeda-beda, maka lebih baik menggunakan Link State. 

3. **Q:** Pada implementasinya saat ini manakah yang lebih banyak digunakan, distance-vector atau  link state? Kenapa? <br/>
	**A:** Saat ini link state lebih banyak digunakan karena link state lebih cepat. Link state hanya memperbarui jaringan hanya jika ada perubahan dalam jaringan (triggered update). Dengan trigerred update ini, maka jika ada perubahan, link state langsung mengubah table routingnya tanpa perlu menunggu waktu tertentu. Link state mengirimkan update secara periodik (state refresh). Link state juga lebih reliable, scalable untuk jaringan besar, lebih terstruktur dan juga lebih menghemat bandwidth.


## Thanks to

**Dosen IF3130 2017**

**Asisten Laboratorium Sistem Terdistribusi**


