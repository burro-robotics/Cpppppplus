#include <iostream>
#include <future>

bool keepPrinting = true;

void doWork(std::chrono::milliseconds delay){
    while (keepPrinting){
        std::cout << "Hello, world from worker " << std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(delay);
    }
}

int main(int, char**) {
    using namespace std::literals::chrono_literals;

    auto fut = std::async(doWork,  1000ms);
    auto fut2 = std::async(doWork, 2200ms);

    // Wait for "enter", stop printing
    std::cin.get();
    keepPrinting = false;
    // Print something on this thread
    std::cout << "Hello, world from main " << std::this_thread::get_id() << std::endl;

    // Wait for "enter"
    std::cin.get();
}
