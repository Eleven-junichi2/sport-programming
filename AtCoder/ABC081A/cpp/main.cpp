/**
 * 入力について: 文字数3の文字列を前提とする
 */
#include <iostream>

constexpr int INPUT_LENGTH {3};

int main()
{
    char input[INPUT_LENGTH + 1];
    std::cin >> input;
    int count{0};
    for (int i{0}; i<INPUT_LENGTH; ++i)
    {
        if ('1' == input[i])
            ++count;
    }
    std::cout << count << std::endl;
    return 0;
}
