CXX = gcc

CXXFLAGS = -Wall
LDFLAGS = 

SOURCES := $(wildcard *.c)
OBJECTS := $(patsubst %.c,%.o,$(SOURCES))

all : Source

Source : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o Source $(OBJECTS) $(LDFLAGS)

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm Source $(OBJECTS)

test : Source
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./Source
