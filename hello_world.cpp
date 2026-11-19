cat > hello_world.cpp «'EOF'
#include <iostream>
#include <string>

      int
      main()
{
  std::string name;

  // Read the user's full name.
  std::cout « "Enter your name: ";
  std::getline(std::cin, name);

  // Display a personalized greeting.
  std::cout « "Hello world from " « name « "!" « std::endl;

  return 0;
}
EOF
