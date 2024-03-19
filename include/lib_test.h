#ifndef LIB_TEST
#define LIB_TEST


class Counter {
    public:
        int count;
        Counter(){
            this->count = 0;
            this->private_count = 10;
        }
        void increment_public();
        void increment_private();
        void decrement_public();
        void decrement_private();
        int get_private();
    private:
        int private_count;
};

#endif