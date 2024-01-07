#include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

int main()
{
    // [[maybe_unused]] int a = (2);
    // vector<string> msg{"Hellos,", "C++", "World", "from", "VS Code", "and the C+++ extension!"};
    // for (const string &word : msg)
    // {
    //     cout << word << "";
    // }
    // cout << endl;

    // std::cout << "Enter a number: "; // ask user for a number

    // int x{}; // define variable x to hold user input (and value-initialize it)
    // int y{};
    // std::cin >> x; // get number from keyboard and store it in variable x
    // std::cin >> y; // get number from keyboard and store it in variable x

    // std::cout << "You entered " << x << " and " << y << '\n';
    // return 0;

    std::cout << "Enter a number:";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';
    return 0;
}
