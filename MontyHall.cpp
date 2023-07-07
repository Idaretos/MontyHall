#include <iostream>
#include <cstdlib>
#include <ctime>

int randint(int min, int max);
void MontyHall(int& not_changing, int& changing);

int main(int argc, char* argv[]) {
    srand(time(0));  // Seed initialization

    int length = 10000;

    if (argc > 1) {
        length = std::stoi(argv[1]);
    }
    int not_changing = 0, changing = 0;

    for (int i = 0; i < length; i++) {
        MontyHall(not_changing, changing);
    }

    float ncResult = static_cast<float>(not_changing) / length;
    float cResult = static_cast<float>(changing) / length;

    std::cout << "Monty Hall Problem" << std::endl;
    std::cout << "not changing:\t" << ncResult << std::endl;
    std::cout << "changing:\t" << cResult << std::endl;

    return 0;
}

int randint(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void MontyHall(int& not_changing, int& changing) {
    int answer = randint(0, 2);
    int select = randint(0, 2);
    int show = randint(0, 2);

    while (show == answer || show == select) {
        show = randint(0, 2);
    }

    if (select == answer) {
        not_changing++;
    } else {
        changing++;
    }
}
