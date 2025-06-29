
#ifndef TEMPL_H
#define TEMPL_H
#include <vector>
#include <iostream>

template <typename T>
class Templ
{
private:
    T _obj;
    int _number;
    std::vector<float> _vectorFloat;
public:
    Templ(T, int, std::vector<float>&);
    bool foo();
};

template <>
class Templ<int>
{
private:
    int _obj;
    int _number;
    std::vector<float> _vectorFloat;
public:
    Templ(int, int, std::vector<float>&);
    bool foo();
};

template <>
class Templ<double>
{
private:
    double _obj;
    int _number;
    std::vector<float> _vectorFloat;
public:
    Templ(double, int, std::vector<float>&);
    bool foo();
};

template <typename T>
Templ<T>::Templ(T obj, int number, std::vector<float>& vec): _obj(obj),
    _number(number), _vectorFloat(vec) {}

template <typename T>
bool Templ<T>::foo()
{
    return _obj.bar(_number, _vectorFloat);
}

Templ<int>::Templ(int obj, int number, std::vector<float>& vec): _obj(obj),
    _number(number), _vectorFloat(vec) {}

bool Templ<int>::foo()
{
    return true;
}

Templ<double>::Templ(double obj, int number, std::vector<float>& vec): _obj(obj),
    _number(number), _vectorFloat(vec) {}

bool Templ<double>::foo()
{
    return false;
}

class Class1
{
public:
    bool bar(int, std::vector<float>&);
    int c_1_1();
    float c_1_2();
    void c_1_3();
};

class Class2
{
public:
    bool bar(int, std::vector<float>&);
    int c_2_1();
    float c_2_2();
    void c_2_3();
};

class Class3
{
public:
    bool bar(int, std::vector<float>&);
    int c_3_1();
    float c_3_2();
    void c_3_3();
};

bool Class1::bar(int number, std::vector<float>& vec)
{
    return (number > 0);
}

int Class1::c_1_1()
{
    return 1;
}

float Class1::c_1_2()
{
    return 1.2;
}

void Class1::c_1_3()
{
    std::cout << "1.3" << '\n';
}

bool Class2::bar(int number, std::vector<float>& vec)
{
    return !vec.empty();
}

int Class2::c_2_1()
{
    return 2;
}

float Class2::c_2_2()
{
    return 2.2;
}

void Class2::c_2_3()
{
    std::cout << "2.3" << '\n';
}

bool Class3::bar(int number, std::vector<float>& vec)
{
    return (number == -static_cast<int>(vec.size()));
}

int Class3::c_3_1()
{
    return 3;
}

float Class3::c_3_2()
{
    return 3.2;
}

void Class3::c_3_3()
{
    std::cout << "3.3" << '\n';
}

#endif