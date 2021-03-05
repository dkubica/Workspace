#include <bits/stdc++.h>

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    std::cout << std::round(meal_cost+meal_cost*(double(tip_percent)/100)+meal_cost*(double(tax_percent)/100)) << std::endl; 
}

int main()
{
    double meal_cost;
    std::cin >> meal_cost;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int tip_percent;
    std::cin >> tip_percent;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int tax_percent;
    std::cin >> tax_percent;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
