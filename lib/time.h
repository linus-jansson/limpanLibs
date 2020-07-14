#ifndef TIME_LIMPAN_LIBS_H
#define TIME_LIMPAN_LIBS_H

#include <chrono>
#include <thread>

namespace limpan {
    class time
    {
        void setTimeout(int time)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(time));
        }
    };
}

#endif