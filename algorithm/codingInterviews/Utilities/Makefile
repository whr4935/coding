CC := gcc
CXX := g++
CFLAGS:= -g -std=c99 -Wall -Werror -pthread
CXXFLAGS := -g -std=c++11 -Wall -Werror -pthread

TARGET := ../$(MY_OUT_DIR)/libUtilities.a

SRC := $(wildcard *.cpp)
SRC += $(wildcard *.c)

OBJ := $(SRC:.cpp=.o)
OBJ := $(OBJ:.c=.o)
OBJ := $(addprefix ../$(MY_OUT_DIR)/, $(OBJ))

all:$(TARGET)
	@echo -n

$(TARGET):$(OBJ)
	ar -r $@ $^

-include $(OBJ:.o=.dep)

../$(MY_OUT_DIR)/%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ -MD -MF $(@:.o=.dep)

../$(MY_OUT_DIR)/%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ -MD -MF $(@:.o=.dep)

clean:
	-rm -rf $(OBJ) $(OBJ:.o=.dep) $(TARGET)

.PHONY: all clean
