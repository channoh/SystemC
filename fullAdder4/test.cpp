#include"test.h"
void test::do_test() {
    std::cout   << "time\tX\tY\tCi\tS\tCo" << std::endl;
    while(true) {
        X_in = "0000";
        Y_in = "0001";
        Ci.write(0);
        print();
        wait(1);

        X_in = "0001";
        Y_in = "0001";
        Ci.write(1);
        print();
        wait(1);

        X_in = "0010";
        Y_in = "0010";
        Ci.write(0);
        print();
        wait(1);

        X_in = "0100";
        Y_in = "0100";
        Ci.write(1);
        print();
        wait(1);

        X_in = "1000";
        Y_in = "0000";
        Ci.write(0);
        print();
        wait(1);

        X_in = "1000";
        Y_in = "0001";
        Ci.write(1);
        print();
        wait(1);
    }
}

void test::print() {
    std::cout   << sc_time_stamp() << "\t"
                << X_in << "\t"
                << Y_in << "\t"
                << Ci << "\t"
                << S_out << "\t"
                << C_out
                << std::endl;
}
