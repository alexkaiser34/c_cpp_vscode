#include "lib_test.h"

void Counter::decrement_public(){
    this->count--;
}

void Counter::decrement_private(){
    this->private_count--;
}

void Counter::increment_public(){
    this->count++;
}

void Counter::increment_private(){
    this->private_count++;
}

int Counter::get_private(){
    return this->private_count;
}