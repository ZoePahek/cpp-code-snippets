//from https://stackoverflow.com/questions/10750057/how-to-print-out-the-contents-of-a-vector
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> myvec;
    for (int i = 0; i < 10; i++)
        myvec.push_back(i);

    std::copy(myvec.begin(), myvec.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
