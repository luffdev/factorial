#include "اللعنة.h"
#include معيار

رقم عاملي(رقم عامل)
{
    لو (عامل == 0)
    {
        يعود 1;
    }
    آخر
    {
        يعود عامل * عاملي(عامل - 1);
    }
}

رقم رئيسي(فارغ)
{
    رقم مستخدم;
    مطبعة("أدخل رقمًا موجبًا: ");
    مدخل("%d", &مستخدم);

    لو (مستخدم < 0)
    {
        مطبعة("خطأ: عاملي غير معرّف للأرقام السالبة.\n");
    }
    آخر
    {
        رقم نتيجة = عاملي(مستخدم);
        مطبعة("معامل %d هو%d", مستخدم, نتيجة);
    }

    يعود 0;
}
