#pragma once
#include"clsScreen.h"
class clsLockSecreen :protected clsScreen {
public:
	static void showLookSecrrn() {
		_DrawScreenHeader("Look system Secreen");
		cout << "\t\t\t\t\tsystem looked tray later........\n";
	}
};