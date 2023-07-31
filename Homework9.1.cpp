#include <iostream>
#include <vector>
#include <algorithm>

void unique(std::vector<int>& vec) {
    auto ittmp = vec.end();
    for (auto it1 = vec.begin(); it1 != ittmp; it1++) {
        ittmp = std::remove((it1 + 1), ittmp, *it1);
    };
    vec.erase(ittmp, vec.end());
}

int main()
{
    std::vector<int> s = { 1, 1, 2, 5, 6, 1, 2, 4 };
    unique(s);
    for (auto it = s.begin(); it != s.end(); it++) {
        std::cout << *it << std::endl;
    }

}
