// Roger Soberon
// Bryansoberon@csu.fullerton.edu
// @RogerAltDev
// Partners: @MichelleAg54

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Step 1: User input
  if (arguments.size() != 4) {
    std::cerr << "error: you must supply three arguments" << std::endl;
    return 1;  // Return a non-zero exit code to indicate an error.
  }

  // Step 2: Arguments & Organization
  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  // Step 3: Just formatting for the arguements
  std::string sentence = "Your order:\n";
  sentence +=
      "A " + protein + " sandwich on " + bread + " with " + condiment + ".";

  // Step 4 - Display
  std::cout << sentence << std::endl;

  return 0;