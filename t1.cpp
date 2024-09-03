#include <iostream>
#include <thread>

thread_local int thread_count = 0;

void increment_count() {
    while (thread_count < 10)
    {
        thread_count++;
        std::cout << "Thread " << std::this_thread::get_id() << " count: " << thread_count << std::endl;
    }
}

int main() {
    std::thread t1(increment_count);
    std::thread t2(increment_count);

    t1.join();
    t2.join();
}
