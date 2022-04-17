// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
private:
  T *arr;
  int head, tail;
  int count;
public:
  TPQueue (int = 100);
  ~TPQueue;
  void push(const T &);
  T pop();
  T get() const;
  bool isEmpty() const, isFull() const;
};

template <typename T>


struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
