#pragma once
#include "tasks.h"

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!" 

void testingTask01() {

	bool result = task01(1234) == 10
		&& task01(-9999) == 36
		&& task01(0) == 0
		&& task01(12345) == 0
		&& task01(-12345) == 0
		&& task01(-123) == 6
		&& task01(12) == 3
		&& task01(-12) == 3
		&& task01(1) == 1
		&& task01(-1) == 1
		&& task01(1111) == 4
		&& task01(-1111) == 4
		&& task01(9876) == 30
		&& task01(-9876) == 30
		&& task01(9000) == 9
		&& task01(-9000) == 9
		&& task01(9999) == 36;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(10, 15, 2) == "20 30"
		&& task02(4, 25, 8) == "34 0"
		&& task02(1, 1, 8) == "8 8"
		&& task02(1, 1, 1) == "1 1"
		&& task02(0, 25, 3) == "0 75"
		&& task02(10, 5, 4) == "40 20"
		&& task02(0, 1, 10) == "0 10"
		&& task02(1, 0, 10) == "10 0"
		&& task02(1, 99, 4) == "7 96"
		&& task02(0, 27, 8) == "2 16"
		&& task02(2, 0, 5) == "10 0"
		&& task02(-1, 15, 2) == "error"
		&& task02(1, -15, 2) == "error"
		&& task02(1, 15, -2) == "error"
		&& task02(-1, -15, 2) == "error"
		&& task02(-1, 15, -2) == "error"
		&& task02(1, -15, -2) == "error"
		&& task02(-1, -15, -2) == "error"
		&& task02(0, 0, 2) == "error"
		&& task02(1, 15, 0) == "error"
		&& task02(0, 0, 0) == "error";

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = !task03(4, 6, 5, 5)
		&& task03(3, 5, 5, 4)
		&& task03(1, 1, 1, 1)
		&& task03(2, 2, 2, 2)
		&& task03(1, 2, 2, 2)
		&& task03(2, 1, 2, 2)
		&& task03(1, 2, 1, 2)
		&& task03(1, 2, 2, 1)
		&& task03(2, 1, 1, 2)
		&& task03(2, 1, 2, 1)
		&& !task03(3, 2, 2, 2)
		&& !task03(2, 3, 2, 2)
		&& !task03(3, 3, 2, 2)
		&& !task03(3, 3, 3, 2)
		&& !task03(3, 3, 2, 3)
		&& !task03(-3, 3, 2, 3)
		&& !task03(3, -3, 2, 3)
		&& !task03(-3, -3, 2, 3)
		&& !task03(3, 3, -2, 3)
		&& !task03(3, 3, 2, -3)
		&& !task03(3, 3, -2, -3)
		&& !task03(-3, -3, -2, -3)
		&& !task03(0, 3, 2, 3)
		&& !task03(3, 0, 2, 3)
		&& !task03(3, 3, 0, 3)
		&& !task03(3, 3, 2, 0);

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {

	bool result = taskX(4, 2, 6)
		&& taskX(3, 4, 4)
		&& taskX(5, 5, 10)
		&& !taskX(1, 1, 1)
		&& taskX(7, 7, 7)
		&& !taskX(3, 5, 1)
		&& !taskX(3, 5, 2)
		&& taskX(3, 5, 3)
		&& !taskX(3, 5, 4)
		&& taskX(3, 5, 5)
		&& taskX(3, 5, 6)
		&& !taskX(3, 5, 7)
		&& !taskX(3, 5, 8)
		&& taskX(3, 5, 9)
		&& taskX(3, 5, 10)
		&& !taskX(3, 5, 11)
		&& taskX(3, 5, 12)
		&& !taskX(3, 5, 13)
		&& !taskX(3, 5, 14)
		&& !taskX(3, 5, 15)
		&& !taskX(3, 5, 30)
		&& !taskX(2, 10, 7)
		&& !taskX(9, 9, 3)
		&& !taskX(1, 8, 10)
		&& !taskX(1, 5, 6)
		&& !taskX(2, 4, 9)		
		&& !taskX(-1, 5, 6)
		&& !taskX(1, -5, 6)
		&& !taskX(1, 5, -6)
		&& !taskX(0, 5, 6)
		&& !taskX(1, 0, 6)
		&& !taskX(1, 5, 0);


	cout << "Task X  " << (result ? RIGHT : WRONG) << endl;
}