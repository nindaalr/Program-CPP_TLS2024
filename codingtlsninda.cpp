#include <iostream>
#include <iomanip>

int main() {
    // Harga per liter Pertamax
    const double harga_per_liter = 12950;

    // Deklarasi variabel untuk uang
    double uang;

    // Meminta input jumlah uang dari pengguna
    std::cout << "Masukkan jumlah uang yang Anda miliki: Rp ";
    std::cin >> uang;

    // Menghitung berapa liter Pertamax yang bisa didapatkan
    double liter_pertamax = uang / harga_per_liter;

    // Menampilkan hasil dengan dua angka di belakang koma
    std::cout << "Dengan uang Rp " << uang << ", Anda bisa mendapatkan "
              << std::fixed << std::setprecision(2) << liter_pertamax << " liter Pertamax." << std::endl;

    return 0;
}
