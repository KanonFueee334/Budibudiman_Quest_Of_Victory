#include <iostream>
#include <vector>

void towerOfHanoi(int n, int from_peg, int to_peg, int aux_peg) {
    std::vector<std::string> pegs = {"Base of Power", "Booster Platform", "Tower of Triumph"};

    if (n == 1) {
        std::cout << "Moving Disk 1 from " << pegs[from_peg - 1] << " to " << pegs[to_peg - 1] << std::endl;
        return;
    }

    towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);
    std::cout << "Moving Disk " << n << " from " << pegs[from_peg - 1] << " to " << pegs[to_peg - 1] << std::endl;
    towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    std::cout << "Tower of Hanoi: Budi budiman Quest for Victory" << std::endl;

    int T;
    std::cout << "Enter the number of rounds (1<=T<=5): ";
    std::cin >> T;

    for (int round = 1; round <= T; ++round) {
        std::cout << "Round " << round << ":\n";

        int n;
        std::cout << "Enter the number of disks (1<=n<=8): ";
        std::cin >> n;

        std::cout << "Budibudiman Bermain Tower of Hanoi:\n";
        towerOfHanoi(n, 1, 3, 2);
    }

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
}
