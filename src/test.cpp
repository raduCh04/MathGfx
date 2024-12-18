#include "vector.h"

int main(int argc, char const *argv[])
{
    Vec2 p{1.0f, 2.0f};
    Vec2 q{2.0f, 3.0f};

    std::cout << "Addition: " << p + q << std::endl;
    std::cout << "Subtraction: " << p - q << std::endl;

    return 0;
}
