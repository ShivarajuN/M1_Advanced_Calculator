# Name of the project
PROJECT_NAME = Advanced_Calculator

# Output directory
BUILD = build

# All source code files
SRC = project_main.c\
src/complexCalc.c\
src/displayMenu.c\
src/matAddSub.c\
src/matDet.c\
src/matMul.c\
src/matrixScanPrint.c\
src/simpleCalc.c\




# All test source files
TEST_SRC = src/simpleCalc.c\
src/complexCalc.c\
src/matDet.c\
test/testfunction.c\
unity/unity.c\


BUILD = build

DOCUMENTATION_OUTPUT = docs/html


#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME)
INC	= -Iinc\
-Iunity

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC)) -lm


run: all
	./$(call FixPath,$(PROJECT_NAME).$(EXEC))

# Build and run of Unit test

build_test:$(SRC) $(BUILD)
	gcc $(TEST_SRC) $(INC) $(INCLUDE_LIBS) -o $(call FixPath,$(TEST_OUTPUT).$(EXEC)) -lm

test: build_test
	./$(call FixPath,$(TEST_OUTPUT).$(EXEC))

doc:
	make -C ./docs

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT).$(EXEC)
	gcov -a $(SRC)

memcheck:
	valgrind ./$(TEST_OUTPUT).$(EXEC)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	./$(TEST_OUTPUT).$(EXEC)

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

# Create new build folder if not present
$(BUILD):
	mkdir build
