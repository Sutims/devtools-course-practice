// Copyright 2018 Chistyakov Anton

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Chistyakov_Anton_ComplexNumberTest, Zero_Property) {
    // Arrange
    double re = 0.0;
    double im = 0.0;
    ComplexNumber z(50, 10);
    ComplexNumber k(re, im);
    // Act
    z = z * k;
    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Chistyakov_Anton_ComplexNumberTest, Create_Big) {
    // Arrange
    double max = std::numeric_limits<double>::max();
    // Act
    ComplexNumber z(max, max);
    // Assert
    EXPECT_EQ(max, z.getRe());
    EXPECT_EQ(max, z.getIm());
}

TEST(Chistyakov_Anton_ComplexNumberTest, Mult_Test) {
    double re = 0;
    double im = 1.0;
    ComplexNumber z(re, im);
    ComplexNumber exp_z(-1, 0);
    EXPECT_EQ(exp_z, z * z);
}


TEST(Chistyakov_Anton_ComplexNumberTest, Can_Create_With_Negative_Real) {
    // Arrange
    double re = -10.0;
    double im = 10.0;
    // Act
    ComplexNumber z(re, im);
    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Chistyakov_Anton_ComplexNumberTest, Can_Substruct_Const_At_Init) {
    // Arrange & Act
    double re = 30.0;
    double im = 35.0;
    ComplexNumber z(re, im);
    ComplexNumber z1(re - 5, im - 5);

    // Assert
    EXPECT_NE(z1.getRe(), z.getRe());
    EXPECT_NE(z1.getIm(), z.getIm());
}
