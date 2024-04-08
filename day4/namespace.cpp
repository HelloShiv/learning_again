#include <iostream>
namespace INDIA{
    class hello{
        public:
        void print(){
            std::cout << "hello maya";
        }
    };
}

int main()
{
    INDIA::hello h;
    h.print();
    return 0;
}