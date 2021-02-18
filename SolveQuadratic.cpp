#include <iostream>
#include <cmath>
#include <iomanip>

//test2

void SolveQuadratic()
{
    std::cout << "------------------------------------------------------------\n";
    double a, b, c, x1, x2;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    double discriminant = pow(b, 2.0) - 4.0*a*c;
    std::cout << std::fixed << std::setprecision(0) << "\nDiscriminant = " << discriminant << "\n";
    
    std::cout << std::setprecision(4) << std::fixed; // all further numbers are displayed with 3 decimal places

    if(discriminant < 0)
    {
        std::cout << "The discriminant is < 0. Therefore, there are no solutions.";
    }
    else if (discriminant == 0)
    {
        std::cout << "The discriminant is = 0. Therefore, there is 1 solution:\n";
        x1 = -b/(2.0*a);
        std::cout << "x = " << x1;
    }
    else
    {
        std::cout << "The discriminant is > 0. Therefore, there are 2 solutions:\n";
        x1 = (-b + sqrt(discriminant)) / (2.0*a);
        x2 = (-b - sqrt(discriminant)) / (2.0*a);
        std::cout << "x = " << x1 << " or x = " << x2;
    }
    std::cout << "\n";
    SolveQuadratic();
}

int main()
{
    SolveQuadratic();
}