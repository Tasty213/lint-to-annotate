#include "options.hpp"

#include <boost/program_options.hpp>
namespace po = boost::program_options;

Options::Options(int number_of_arguments, char* arguments[])
{
    po::options_description description("Allowed options");
    description.add_options()("help", "produce help message")("compression", po::value<int>(), "set compression level");

    po::variables_map variables_map;
    po::store(po::parse_command_line(number_of_arguments, arguments, description), variables_map);
    po::notify(variables_map);

    help = variables_map.count("help") > 0;
};
