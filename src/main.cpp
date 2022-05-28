#include <iostream>
#include <stdexcept>

#include "line.hpp"
#include "point.hpp"
#include "space.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"


int main(int argc, char** argv) {
    Space<int, 2> space_integer_2d;
    space_integer_2d.add_figure(new Point<int, 2>({1, 2}));
    space_integer_2d.add_figure(new Line<int, 2>(Point<int, 2>({0, 0}), Point<int, 2>({1, 1})));
    space_integer_2d.add_figure(new Circle<int, 2>(Point<int, 2>({0, 0}), 7));
    space_integer_2d.add_figure(new Triangle<int, 2>(Point<int, 2>({0, 0}), Point<int, 2>({1, 1}), Point<int, 2>({2, 2})));
    space_integer_2d.add_figure(new Rectangle<int, 2>(Point<int, 2>({0, 0}), Point<int, 2>({4, 4})));

    space_integer_2d.show();
    //space_integer_2d.show(0);
    //space_integer_2d.delete_figure(1);
    //space_integer_2d.show();
    /*
    try {
        Point<float, 2>* point_fload_2d = new Point<float, 2>({0.7, 4.5});
        space_integer_2d.add_figure(point_fload_2d);
    }
    catch(std::invalid_argument error) {
        std::cout << error.what() << std::endl;
    }

    try {
        Point<int, 3>* point_integer_3d = new Point<int, 3>({1, 4, 5});
        space_integer_2d.add_figure(point_integer_3d);
    }
    catch(std::invalid_argument error) {
        std::cout << error.what() << std::endl;
    }
*/

    return 0;
}
