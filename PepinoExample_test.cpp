/******************************************************************************
 * Project:  Pepino
 * Brief:    A C++ Cucumber interpreter.
 *
 * This software is provided "as is," without warranty of any kind, express
 * or implied, including but not limited to the warranties of merchantability,
 * fitness for a particular purpose, and noninfringement. In no event shall
 * the authors or copyright holders be liable for any claim, damages, or
 * other liability, whether in an action of contract, tort, or otherwise,
 * arising from, out of, or in connection with the software or the use or
 * other dealings in the software.
 *
 * Author:   Dutesier
 *
 ******************************************************************************/

// FOR TESTING ONLY

#include "PepinoExample.hpp"
#include "pepino.h"
#include <gtest/gtest.h>

using namespace examples;

WHEN(
    "the user adds {a:d} and {b:d}",
    [](double a, double b)
    {
        Calculator calc;
        EXPECT_DOUBLE_EQ(calc.add(1.0, 2.0), 3.0);
    })

TEST(PepinoExample, run)
{
    // In the future this will be incapsulated here:
    pep::run("main.feature");
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
