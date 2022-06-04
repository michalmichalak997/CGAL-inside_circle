// point_types_differences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel            Kernel;
typedef Kernel::Point_2                                               Point2;

#include <assert.h>


int main()
{
	Point2 p1(0, -5), p2(3, -4), p3(4, 3), w(-1, 4), poza(5, -1), na(0, 5);

	CGAL::Bounded_side wokregu, naokregu, pozaokregiem;

	wokregu = CGAL::side_of_bounded_circle(p1, p2, p3, w);
	pozaokregiem = CGAL::side_of_bounded_circle(p1, p2, p3, poza);
	naokregu = CGAL::side_of_bounded_circle(p1, p2, p3, na);

	assert(wokregu == CGAL::ON_BOUNDED_SIDE);
	assert(pozaokregiem == CGAL::ON_UNBOUNDED_SIDE);
	assert(naokregu == CGAL::ON_BOUNDARY);

}