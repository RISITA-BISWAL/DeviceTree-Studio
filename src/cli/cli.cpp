#include "cli/cli.h"
#include <iostream>
#include <string>

namespace dtstudio {

int CLI::run(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "DeviceTree Studio\n";
        std::cout << "Usage: dtstudio <command>\n";
        return 0;
    }

    std::string command = argv[1];

    if (command == "compile") {
        std::cout << "Compile command selected\n";
    } else if (command == "validate") {
        std::cout << "Validate command selected\n";
    } else if (command == "overlay") {
        std::cout << "Overlay command selected\n";
    } else if (command == "explore") {
        std::cout << "Explore command selected\n";
    } else {
        std::cout << "Unknown command: " << command << "\n";
        return 1;
    }

    return 0;
}

} // namespace dtstudio
