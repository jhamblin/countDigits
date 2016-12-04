#include <iostream>

int countDigit(int n, int digit)
{
    int count = 0;

    while (n != 0)
    {
        if (n % 10 == digit)
        {
            ++count;
        }
        n /= 10;
    }
    return count;
}

int main(int argc, char** argv)
{
    int count = 0;
    int digit = atoi(argv[1]);

    for (size_t i = 0; i < 100; ++i)
    {
        count += countDigit(i, digit);
    }

    std::cout << "Count of " << digit << " between 0 and 100 = " << count << "\n";
}
