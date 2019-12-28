//
// Created by lingdequan on 2019/12/28.
//

#pragma once

#include <iostream>
using namespace std;
#include <string>

// 职工的抽象类
class Worker
{
public:
    virtual void showInfo() = 0;  // virtual 虚函数的关键字
    virtual string getDeptName() = 0;  // 纯虚函数

    int m_Id;
    int m_DeptId;
    string m_Name;
};

