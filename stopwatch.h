#include <chrono>

namespace jle
{

class stopwatch
{
    using clock = std::chrono::high_resolution_clock;

public:

    stopwatch() : start{clock::now()}
    {
    }

    auto operator()()
    {
        const auto duration {clock::now()-start};

        return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count()/1000.0;
    }

private:

    clock::time_point  start;
};

}
