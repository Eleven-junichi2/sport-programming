#include <iostream>
#include <vector>

int main()
{
    std::size_t n;
    std::cin >> n;
    std::vector<int> a(n);
    int manipulation_count{0};
    bool manipulatable{true};
    while (manipulatable)
    {
        for (size_t i{0}; i < n; ++i)
        {
            if (manipulation_count == 0)
            {
                std::cin >> a[i];
            }
            if (a[i] % 2 == 0)
            {
                a[i] /= 2;
            }
            else
            {
                manipulatable = false;
                break;
            }
        }
        if (!manipulatable) break;
        ++manipulation_count;
    }
    std::cout << manipulation_count << std::endl;
    return 0;
}
