#include <iostream>

using namespace std;

class Test{
    public:
        void view(){cout<<"hello C++\n";}
};

#ifdef __cplusplus
extern "C" {
#endif
    Test a;
    void view() {
        a.view();
    }

#ifdef __cplusplus
}
#endif
