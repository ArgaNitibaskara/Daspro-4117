#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num = {};
    int min = 0;
    int max = 0;

    int x = 0;
    while (x != -99) {
        std::cin >> x;
        num.push_back(x);
    }

    if (num.size() > 0) {
        min = num[0];
        max = num[0];

        for (int i = 1; i < num.size() - 1; i++) {
            if (min > num[i]) {
                min = num[i];
            }
            else if (max < num[i]) {
                max = num[i];
            }
        }
    }

    std::cout << "minimum = " << min << "\n";
    std::cout << "maximum = " << max << "\n";
}