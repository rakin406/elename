# CXX=g++
CXX=clang++

# Flags
CXXFLAGS=-std=c++17 -Wall -Wextra -Werror -Wformat-security -Wundef \
		 -Wconversion -Wpedantic -Wformat=2 -fdiagnostics-color=always
DEBUG=-O0 -g3 -ftrapv -fstack-clash-protection -fstack-protector-all
RELEASE=-O2 -fdelete-null-pointer-checks -fexceptions

# $(CXX) src/main.cpp $(CXXFLAGS) $(RELEASE) -o build/elename
# $(CXX) src/main.cpp $(CXXFLAGS) $(DEBUG) -o build/elename
elename: src/main.cpp
	$(CXX) src/main.cpp $(CXXFLAGS) $(RELEASE) -o build/elename

clean:
	rm build/elename
