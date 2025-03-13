CXX := g++
CXXFLAGS := -Wall -Werror -Wextra
VPATH := src
SRC := main.cc
OBJ := $(addprefix build/,$(notdir $(SRC:.cc=.o)))
BUILD_PATH := build
EXECUTABLE := $(BUILD_PATH)/world

PHONY := all
all: world

PHONY += world
world: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BUILD_PATH)/main.o: main.cc
	$(CXX) -c $(CXXFLAGS) $^ -o $@

PHONY += clean
clean:
	rm -f $(BUILD_PATH)/*.o $(EXECUTABLE)

PHONY += rebuild
rebuild: clean all

PHONY += run
run: $(EXECUTABLE)
	@./$(EXECUTABLE)

.PHONY: PHONY