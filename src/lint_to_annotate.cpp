#include <boost/program_options.hpp>
namespace po = boost::program_options;

#include <iostream>
#include <iterator>
using namespace std;

#include "options/options.hpp"

int main(int number_of_arguments, char* arguments[])
{
    auto options = Options(number_of_arguments, arguments);

    if (options.help)
    {
        cout << options.description << "\n";
        return 1;
    }

    return 0;
};