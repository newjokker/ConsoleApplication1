//
// Created by lingdequan on 2019/12/28.
//

#pragma once

#include <iostream>
using namespace std;
#include <string>

// ְ���ĳ�����
class Worker
{
public:
    virtual void showInfo() = 0;  // virtual �麯���Ĺؼ���
    virtual string getDeptName() = 0;  // ���麯��

    int m_Id;
    int m_DeptId;
    string m_Name;
};

