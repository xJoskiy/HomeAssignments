PROJECT = templ

LIBPROJECT = $(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++
AR = ar

AFLAGS = rsv

CXXFLAGS = -I. -std=c++17 -Wall -Werror -Wpedantic -g -fPIC
LDFLAGS = -L.

LDXXFLAGS = $(CXXFLAGS) $(LDFLAGS) -l:$(LIBPROJECT)
LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS = $(wildcard *.h)

TEST-OBJ = test-templ.o
MAIN_OBJ = main.o

.PHONY: default all clean cleanall test check

default: all

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(OBJ)
	$(AR) $(AFLAGS) $@ $^

$(PROJECT): $(MAIN_OBJ) $(LIBPROJECT)
	$(CXX) -o $@ $^ $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) -o $@ $^ $(LDGTESTFLAGS)

test: $(TESTPROJECT)
	./$(TESTPROJECT)

all: $(PROJECT)

clean:
	rm -f *.o *.a $(PROJECT)

cleanall: clean
	rm -f $(TESTPROJECT)

check: $(PROJECT)
	valgrind ./$(PROJECT)
