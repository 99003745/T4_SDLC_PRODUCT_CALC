# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build

# All source code files
SRC = project_main.c\
src/calculator_arithmetic.c\
src/calc_bmi_area.c\
src/equation_operation.c\
src/roots_cubes.c

# All test source files
TEST_SRC =test/test_calc.c\
src/calculator_arithmetic.c\
src/calc_bmi_area.c\
src/equation_operation.c\
src/roots_cubes.c\
unity/unity.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm

# Call `make run` to run the application
run: $(BUILD)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
