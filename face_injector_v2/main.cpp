#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

int main()
{
	// 
	start_driver();
	cout << endl;

	// injector (Respawn001 - apex legends window class name)
	face_injecor_v2(xor_a("R6Game"), xor_w(LR6 Free UC_[unknowncheats.me]_ (1).dll));

	cout << endl;
	system("pause");
}
