################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CubeSample.cpp \
../src/Demo.cpp \
../src/SPointer.cpp 

OBJS += \
./src/CubeSample.o \
./src/Demo.o \
./src/SPointer.o 

CPP_DEPS += \
./src/CubeSample.d \
./src/Demo.d \
./src/SPointer.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


