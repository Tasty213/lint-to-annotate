#include <string>

struct Options
{
    std::string description;
    bool help;
    Options(int number_of_arguments, char* arguments[]);
};
