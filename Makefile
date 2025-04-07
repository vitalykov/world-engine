CXX := g++
CXXFLAGS := -Wall -Werror -Wextra
# VPATH := src
SRC_PATH := ./src
OBJ_PATH := ./obj
BUILD_PATH := ./build
TEST_PATH := ./test
SRC_DIRS := $(shell find $(SRC_PATH) -type d)
OBJ_DIRS := $(patsubst $(SRC_PATH)%,$(OBJ_PATH)%,$(SRC_DIRS))
SOURCES := $(shell find $(SRC_PATH) -name "*.cc")
OBJECTS := $(patsubst $(SRC_PATH)/%.cc,$(OBJ_PATH)/%.o,$(SOURCES))
HELLO := $(BUILD_PATH)/world
PLANET_TEST := $(BUILD_PATH)/planet_test
EXECUTABLES := $(HELLO) $(PLANET_TEST)

PHONY := all
all: world planet_test

PHONY += world
world: $(HELLO)

$(HELLO): $(OBJ_PATH)/main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_PATH)/main.o: $(TEST_PATH)/main.cc | $(OBJ_DIRS)
	$(CXX) -c $(CXXFLAGS) $^ -o $@

PHONY += planet_test
planet_test: $(PLANET_TEST)

$(PLANET_TEST): $(OBJ_PATH)/planet_test.o $(OBJECTS) | $(BUILD_PATH)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_PATH)/planet_test.o: $(TEST_PATH)/planet_test.cc | $(OBJ_DIRS)
	$(CXX) -c $(CXXFLAGS) -I$(SRC_PATH) $^ -o $@

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cc $(SRC_PATH)/%.h | $(OBJ_DIRS)
	$(CXX) -c $(CXXFLAGS) -I$(SRC_PATH) $< -o $@

$(BUILD_PATH) $(OBJ_DIRS):
	mkdir $@

PHONY += clean
clean:
	rm -rf $(OBJ_PATH) $(EXECUTABLES)

PHONY += rebuild
rebuild: clean all

PHONY += run
run: $(HELLO)
	@./$(HELLO)

.PHONY: PHONY