#include <iostream>
#include <thread>
#include <chrono>
using namespace std::chrono_literals;

#include "stopwatch.h"

int main()
{
    jle::stopwatch stopwatch;

    std::this_thread::sleep_for(2s);

    std::cout << "\nSlept for " << stopwatch() << " seconds\n\n";


}