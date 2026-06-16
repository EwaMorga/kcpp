CXX      = g++
CXXFLAGS = -Wall -I.
 
SRC      = main.cc src/Zadania.cc
TARGET   = program
 
all: $(TARGET)
 
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) -lm
 
clean:
	rm -f $(TARGET)
 