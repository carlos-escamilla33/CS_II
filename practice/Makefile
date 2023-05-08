CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

SRCS = Account.cpp Account_main.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = account

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
