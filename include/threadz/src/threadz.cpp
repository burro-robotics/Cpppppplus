#include <iostream>
#include <thread>

bool keepPrinting = true;

void doWork(){
    using namespace std::literals::chrono_literals;

    while (keepPrinting){
        std::cout << "Hello, world from worker " << std::this_thread::get_id() << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main(int, char**) {
    // Start worker thread
    std::thread workerThread(doWork);
    std::thread workerThread2(doWork);

    // Wait for "enter", stop printing
    std::cin.get();
    keepPrinting = false;
    // Print something on this thread
    std::cout << "Hello, world from main " << std::this_thread::get_id() << std::endl;

    // Wait for worker threads to finish
    workerThread.join();
    workerThread2.join();

    // Wait for "enter"
    std::cin.get();
}
