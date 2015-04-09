CXX=g++
CPPFLAGS=-std=c++11 -g 
TEST_EXE=test

## FILES

SSTREAM=	SStreamTest.cpp SStreamTest.o


## TARGETS

sstream: $(SSTREAM)
	$(CXX) $(CPPFLAGS) 
	$(SSTREAM) 
	-o $(TEST_EXE)
	
%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	find . -name "*.o" -type f -delete
	rm -f $(TEST_EXE)