# Budibudiman_Quest_Of_Victory
Solution for Tower Of Hanoi

Penjelasan Code :

#include <iostream>
#include <vector>
//Dua header file standar untuk memungkinkan program menggunakan fungsi input-output dan vektor dari C++ Standard Library.//

void towerOfHanoi(int n, int from_peg, int to_peg, int aux_peg) {
//Adalah deklarasi fungsi towerOfHanoi yang akan mengimplementasikan algoritma Tower of Hanoi. Fungsi ini akan menerima empat parameter: jumlah disk n, nomor tiang asal from_peg, nomor tiang tujuan to_peg, dan nomor tiang bantu aux_peg.//

std::vector<std::string> pegs = {"Base of Power", "Booster Platform", "Tower of Triumph"};
//Di dalam fungsi, kita mendefinisikan sebuah vektor bernama pegs yang berisi nama-nama tiang. Ini hanya digunakan untuk memberi nama tiang dalam output.//

if (n == 1) {
    std::cout << "Moving Disk 1 from " << pegs[from_peg - 1] << " to " << pegs[to_peg - 1] << std::endl;
    return;
}
//Ini adalah kondisi basis untuk rekursi. Jika hanya ada satu disk yang harus dipindahkan, langkah tersebut langsung dicetak ke layar.//

towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);
std::cout << "Moving Disk " << n << " from " << pegs[from_peg - 1] << " to " << pegs[to_peg - 1] << std::endl;
towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);

//Bagian ini adalah langkah rekursif algoritma Tower of Hanoi. Fungsi dipanggil dua kali secara rekursif:

1 Pertama, untuk memindahkan n-1 disk dari tiang asal ke tiang bantu.
2 Kedua, untuk memindahkan disk ke-n dari tiang asal ke tiang tujuan.
3 Terakhir, untuk memindahkan n-1 disk dari tiang bantu ke tiang tujuan.//

int main() { //Basic Int main//

std::cout << "Tower of Hanoi: Budi budiman Quest for Victory" << std::endl;
//Ini mencetak judul program ke layar.//

int T;
std::cout << "Enter the number of rounds (1<=T<=5): ";
std::cin >> T;
//Menu pengguna untuk memasukkan jumlah ronde yang diinginkan.//

for (int round = 1; round <= T; ++round) {
//Looping Basic, looping ini akan berjalan sebanyak T kali, sesuai dengan jumlah ronde yang dimasukkan user.//

int n;
std::cout << "Enter the number of disks (1<=n<=8): ";
std::cin >> n;
//Pengguna diminta untuk memasukkan jumlah disk yang akan digunakan untuk ronde saat ini.//

std::cout << "Budibudiman Bermain Tower of Hanoi:\n";
towerOfHanoi(n, 1, 3, 2);
//Algoritma Tower of Hanoi dipanggil untuk menjalankan permainan dengan jumlah disk dan tiang yang sesuai.//

char choice;
std::cout << "Quest is Done! do you want to exit ? (Type n to Continue and y to Exit the Program) (y/n): ";
std::cin >> choice;
if (choice == 'y' || choice == 'Y') {
    std::cout << "Thank You!" << std::endl;
    return 0;
} else {
    std::cout << "Continuing..." << std::endl;
    main();
}
//Menu Continue atau Exit//


