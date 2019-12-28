//
// Created by lingdequan on 2019/12/28.
//

// 普通员工文件

#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;


class Employee : public Worker
{
public:

    //构造函数
    Employee(int id, string name, int did);
    // 显示个人信息
    void showInfo() override;

    // 获取职工岗位名称
    string getDeptName() override;
};



Employee::Employee(int id, string name, int did)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = did;
}

void Employee::showInfo()
{
    cout << "id : " << this->m_Id << "\t name : " << this->m_Name
        << "\t deptid :" << this->getDeptName()
        << "\t duity" << "just do work" << endl;
}

string Employee::getDeptName() {
    return "normal empolyee";
}
