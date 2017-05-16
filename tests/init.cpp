#include <quicksort.hpp>
#include <catch.hpp>


SCENARIO("mas")
{
	int m[] = { 4,3,6,1,7,2 };
	int* f = m;
	int* l=m+5;
	q_Sort(f, l);
	REQUIRE(m[0] == 1);
	REQUIRE(m[1] == 2);
	REQUIRE(m[2] == 3);
	REQUIRE(m[3] == 4);
	REQUIRE(m[4] == 6);
	REQUIRE(m[5] == 7);
}
SCENARIO("matrix")
{
 	int mas[3][3] = { 21,5,78,34,27,6,87,11,77 };
	int * first = &mas[0][0];
	int * last = &mas[2][2];
	q_Sort(first, last);
	REQUIRE(mas[0][0] == 5);
	REQUIRE(mas[0][1] == 6);
	REQUIRE(mas[0][2] == 11);
	REQUIRE(mas[1][0] == 21);
	REQUIRE(mas[1][1] == 27);
	REQUIRE(mas[1][2] == 34);
	REQUIRE(mas[2][0] == 77);
	REQUIRE(mas[2][1] == 78);
	REQUIRE(mas[2][2] == 87);
}
