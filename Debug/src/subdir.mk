################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AdesAiles.cpp \
../src/Animal.cpp \
../src/Autruche.cpp \
../src/Canard.cpp \
../src/Chat.cpp \
../src/Felin.cpp \
../src/Tigre.cpp \
../src/main.cpp 

OBJS += \
./src/AdesAiles.o \
./src/Animal.o \
./src/Autruche.o \
./src/Canard.o \
./src/Chat.o \
./src/Felin.o \
./src/Tigre.o \
./src/main.o 

CPP_DEPS += \
./src/AdesAiles.d \
./src/Animal.d \
./src/Autruche.d \
./src/Canard.d \
./src/Chat.d \
./src/Felin.d \
./src/Tigre.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


