#ifndef SPROUT
#define SPROUT

#include <string>

namespace sprout {
    class Sprout {
        public:
            Sprout(const std::string&filename);
            std::string parse();
    
        private:
            std::string filename_;
    };
}

#endif


