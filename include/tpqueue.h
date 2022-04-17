// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
     T arr[20];
     int head, tail;
 public:
     TPQueue() : head(0), tail(0) { }
     T pop() {
       return (arr[(head++) % size]);
     }
     void push(T value) {
       bool check = true;
       int Var = tail++;
       while (check) {
         if ((head <= Var--) && (value.prior > arr[Var % size].prior)) {
         arr[(Var++) % size] = arr[Var % size];
         } else { check = false; }
       }
       arr[(Var++) % size] = value;
     }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
