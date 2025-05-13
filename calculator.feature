Feature: Basic Calculator Operations

  As a user
  I want to perform basic arithmetic operations
  So that I can get the result of two numbers

  Scenario: Add two numbers
    Given the calculator is on
    When I add 5 and 3
    Then the result should be 8

  Scenario: Subtract two numbers
    Given the calculator is on
    When I subtract 2 from 7
    Then the result should be 5

  Scenario: Multiply two numbers
    Given the calculator is on
    When I multiply 4 and 6
    Then the result should be 24

  Scenario: Divide two numbers
    Given the calculator is on
    When I divide 20 by 5
    Then the result should be 4

  Scenario: Divide by zero
    Given the calculator is on
    When I divide 10 by 0
    Then an error should be displayed

