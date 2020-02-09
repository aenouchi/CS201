#include <iostream>
#include <numeric>
#include <vector>

{
std::vector<char> alphabet(26);
std::iota(alphabet.begin(), alphabet.end(), 'A');

for (const auto& i : alphabet)
{
    std::cout << i << std::endl;
}
return 0;

int main() {}