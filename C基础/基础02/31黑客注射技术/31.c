//属性类型改为dll动态库文件
//引入window头文件
//加入关键字 （动态库不需要main函数，但是想要被执行就必须提供一个接口）
//打开DLLinject的然后注入我们的dll文件，以及文件中的函数
#include<Windows.h>

_declspec (dllexport)void he()
{
	MessageBoxA(0, "QT提示：你的电脑已被锁定", "QT", 0);
}