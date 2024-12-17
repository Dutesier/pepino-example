Feature: Basic Calculator

  Scenario: Addition
    Given the calculator is on
    When the user adds 2 and 3
    Then the result should be 5

  Scenario: Subtraction
    Given the calculator is on
    When the user subtracts 5 from 8
    Then the result should be 3

  Scenario Outline: Multiplication
    Given the calculator is on
    When the user multiplies <num1> by <num2>
    Then the result should be <result>

    Examples:
    | num1 | num2 | result |
    | 4    | 7    | 28     |
    | 3    | 3    | 9      |
    | 6    | 6    | 36     |

  Scenario Outline: Division
    Given the calculator is on
    When the user divides <num1> by <num2>
    Then the result should be <result>

    Examples:
    | num1 | num2 | result |
    | 20   | 4    | 5      |
    | 9    | 3    | 3      |
    | 15   | 5    | 3      |