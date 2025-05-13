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
#include <pepino/pepino.h>
#include <pepino/context.h>
#include <pepino/steps/steps.h>
#include <gtest/gtest.h>

class MyContext : public pep::Context<MyContext>
{
public:
    double lastResult;
    std::unique_ptr<examples::Calculator> calc;
};

GIVEN_CTX(MyContext, "the calculator is on", [](MyContext &ctx) {
  ctx.calc = std::make_unique<examples::Calculator>();
});

WHEN_CTX(MyContext, "I multiply (\\d+) and (\\d+)",
         [](MyContext &ctx, int x, int y) {
           ctx.lastResult = ctx.calc->multiply(x, y);
         });

THEN_CTX(MyContext, "the result should be (\\d+)",
         [](MyContext &ctx, double result) {
           assert(ctx.lastResult == result);
         });

TEST(BasicCalculatorTest, TestCalculator)
{
    ASSERT_EQ(pep::run("calculator.feature"), 0);
}

