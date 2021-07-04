#include <iostream>
#include <unordered_set>
#include <vector>

int main()
{
    std::vector<int> some_vector{1,2,3,4,5};
    
    std::unordered_set<int> some_unordered_set(some_vector.begin(), some_vector.end());
    
    for (int x : some_unordered_set)
    {
        std::cout << x << std::endl;
    }

    return 0;
}