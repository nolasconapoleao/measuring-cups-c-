//
// Created by nolasco on 01-02-2019.
//

#define INT_MAX 1000000

template <typename T>
T clamp(T num, T low, T high) {
    return (num < low) ? low : num > high ? high : num;
}

template <typename T>
T max(T num1, T num2) {
    return (num1 >= num2) ? num1 : num2;
}

template <typename T>
T min(T num1, T num2) {
    return (num1 <= num2) ? num1 : num2;
}
