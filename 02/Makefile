CXXFLAGS = --std=c++17

all: $(patsubst %.cpp, %, $(wildcard *.cpp))

%: %.cpp
	-$(CXX) $(CXXFLAGS) $< -o $@ 

clean:
	for f in *.cpp a.out; do \
	  rm -f $${f%.cpp} ; \
	done

