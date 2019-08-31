// The program should prompt the user to enter the number of candy bars sold and the amount the organization earns for each bar sold

#include <iostream>

int main()
{
  double number_of_candies, price, amount;

  // Get the number of candy bars you sold.
  std::cout << "how many candy bars did you sell ";
  std::cin >> number_of_candies;

  // Get the price.
  std::cout << "How much does the organization earn for each bar sold ";
  std::cin >> price;

  // Calculate the total amount earned.
  amount = number_of_candies * price;

  // Display the amount earned.
  std::cout << "You have earned $" << amount << std::endl;

  return 0;
}
