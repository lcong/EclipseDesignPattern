################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbstractFactory.cpp \
../src/Main.cpp \
../src/Product.cpp 

OBJS += \
./src/AbstractFactory.o \
./src/Main.o \
./src/Product.o 

CPP_DEPS += \
./src/AbstractFactory.d \
./src/Main.d \
./src/Product.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


