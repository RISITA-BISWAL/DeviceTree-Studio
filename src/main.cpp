#include "cli/cli.h"

int main(int argc, char* argv[]) {
    dtstudio::CLI cli;
    return cli.run(argc, argv);
}
