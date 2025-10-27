#ifndef __VECTOR_H__
#define __VECTOR_H__
#pragma once

using Rank = int;

template <typename T> class Vector {
  private:
    Rank _size;     // 向量当前规模
    Rank _capacity; // 向量当前容量
    T *_elem;       // 向量当前元素存储区

  protected:
  public:
    Vector(/* args */);
    ~Vector();
};

#endif