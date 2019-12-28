#include <iostream>
using namespace std;
//#include "workerManager.h"
#include "worker.h"
#include "employee.h"


int main() {

    // 实例化管理者对象
//    WorkerManager wm;
//    wm.Show_Menu();
    int choice;


    Worker* worker = nullptr;
    worker = new Employee(1, "jokker", 123456);
    worker->showInfo();




    while (true)
    {
        cout << "print : ";
        cin >> choice;

        switch (choice)
        {
        case 1:  // add
            break;
        case 2:  // show
            break;
        case 3:  // delete
            break;
        case 4:  // fix
            break;
        case 5:  // find
            break;
        case 6:  // sort
            break;
        case 7:  // clear
            break;
        case 0:  // exit
//                Exit_Systerm();
            return 0;
        default:
            break;
        }
    }

    system("pause");
    return 0;
}