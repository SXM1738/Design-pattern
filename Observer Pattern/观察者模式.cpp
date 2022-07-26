// 观察者模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "XiaoMing.h"
#include "Monitor.h"
#include "Teacher.h"
#include "Observers.h"
#include "BeObserved.h"
int main()
{
    Observers* pMonitor = new Monitor;
    Observers* pTeacher = new Teacher;
    
    XiaoMing* pXiaoMing = new XiaoMing;
    pXiaoMing->AddObserver(pMonitor);
    pXiaoMing->AddObserver(pTeacher);
    pXiaoMing->Sleeping();
    cout << endl;
    cout << "班长老是告状，小明把他删除" << endl << endl;
    pXiaoMing->DeleteObserver(pMonitor);
    pXiaoMing->Sleeping();

    delete pMonitor;
    pMonitor = nullptr;
    delete pTeacher;
    pTeacher = nullptr;
    system("pause");
    return 0;
}


