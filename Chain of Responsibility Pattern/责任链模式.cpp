

// 责任链模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Father.h"
#include "Women.h"
#include "Handler.h"
#include "Husband.h"
#include "Son.h"
#include "Female.h"

int main()
{
    Female* pDaughter = new Women(1, "我要和男朋友出去旅游");
    Female* pWife = new Women(2,"我要买个新包包");
    Female* pMother = new Women(3, "我要去跳广场舞");

    Handler* pFather = new Father();
    Handler* pHusband = new Husband();
    Handler* pSon = new Son();

    pFather->SetNextHandler(pHusband);
    pHusband->SetNextHandler(pSon);

    //父亲->老公->儿子
    pFather->HandleRequest(pDaughter);
    pFather->HandleRequest(pWife);
    pFather->HandleRequest(pMother);

    delete pDaughter;
    delete pWife;
    delete pMother;
    delete pFather;
    delete pHusband;
    delete pSon;

    system("pause");
    return 0;
}

