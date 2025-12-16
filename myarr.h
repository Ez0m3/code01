#pragma once
#include<iostream>
template<typename T>
class myarr
{
    private:
    T* arrptr;
    int arrsize;
    int arrcapacity;
    public:
    myarr(int capacity=10);
    ~myarr();
    myarr(const myarr& other);
    void pushback(const T& t);
    T popback();
    T& operator[](int index);
    const T& operator[](int index) const;  
    myarr& operator=(const myarr& other);
    int size() const;
    int capacity() const;
    void print() const;
};
template<typename T>
myarr<T>::myarr(int capacity)
{
    arrsize=0;
    arrcapacity=capacity;
    arrptr=new T[arrcapacity];
    // for(int i=0;i<arrsize;i++)
    // {
    //     arrptr[i]=T();
    // }
}
template<typename T>
myarr<T>::~myarr()
{
    delete[] arrptr;
    arrptr=nullptr;
}
template<typename T>
myarr<T>::myarr(const myarr& other)
{
    arrsize=other.arrsize;
    arrcapacity=other.arrcapacity;
    arrptr=new T[arrcapacity];
    for(int i=0;i<arrsize;i++)
    {
        arrptr[i]=other.arrptr[i];
    }
}
template<typename T>
void myarr<T>::pushback(const T& t)
{
    if(arrsize<arrcapacity)
    {
        arrptr[arrsize]=t;
        arrsize++;
    }
    else
    {
        std::cout<<"数组已满，尾插失败"<<std::endl;
    }
}
template<typename T>
T myarr<T>::popback()
{
    if(arrsize<=0)
    {
        std::cout<<"数组里没有元素可以删除！"<<std::endl;
        return T();
    }
    else
    {
        arrsize--;
        return arrptr[arrsize];
    }
}
template<typename T>
T& myarr<T>::operator[](int index)
{
    return arrptr[index];
}
template<typename T>
const T& myarr<T>::operator[](int index) const
{
    return arrptr[index];
} 
template<typename T>
myarr<T>& myarr<T>::operator=(const myarr<T>& other)
{
    if(this==&other)
    {
        return *this;
    }
    delete[] arrptr; 
    arrsize=other.arrsize;
    arrcapacity=other.arrcapacity;
    arrptr=new T[arrcapacity];
    for(int i=0;i<arrsize;i++)
    {
        arrptr[i]=other.arrptr[i];
    }
    
    return *this;
}
template<typename T>
int myarr<T>::size() const
{
    return this->arrsize;
}
template<typename T>
int myarr<T>::capacity() const
{
    return this->arrcapacity;
}
template<typename T>
void myarr<T>::print() const
{
    for(int i=0;i<arrsize;i++)
    {
        std::cout<<arrptr[i]<<std::endl;
    }
}