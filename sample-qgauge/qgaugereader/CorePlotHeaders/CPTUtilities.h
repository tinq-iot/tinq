/*
 * Copyright (c) 2016 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

#import "CPTDefinitions.h"

/// @file

#if __cplusplus
extern "C" {
#endif

/// @name Convert NSDecimal to Primitive Types
/// @{
int8_t CPTDecimalCharValue(NSDecimal decimalNumber);
int16_t CPTDecimalShortValue(NSDecimal decimalNumber);
int32_t CPTDecimalLongValue(NSDecimal decimalNumber);
int64_t CPTDecimalLongLongValue(NSDecimal decimalNumber);
int CPTDecimalIntValue(NSDecimal decimalNumber);
NSInteger CPTDecimalIntegerValue(NSDecimal decimalNumber);

uint8_t CPTDecimalUnsignedCharValue(NSDecimal decimalNumber);
uint16_t CPTDecimalUnsignedShortValue(NSDecimal decimalNumber);
uint32_t CPTDecimalUnsignedLongValue(NSDecimal decimalNumber);
uint64_t CPTDecimalUnsignedLongLongValue(NSDecimal decimalNumber);
unsigned int CPTDecimalUnsignedIntValue(NSDecimal decimalNumber);
NSUInteger CPTDecimalUnsignedIntegerValue(NSDecimal decimalNumber);

float CPTDecimalFloatValue(NSDecimal decimalNumber);
double CPTDecimalDoubleValue(NSDecimal decimalNumber);
CGFloat CPTDecimalCGFloatValue(NSDecimal decimalNumber);

NSString *CPTDecimalStringValue(NSDecimal decimalNumber);

/// @}

/// @name Convert Primitive Types to NSDecimal
/// @{
NSDecimal CPTDecimalFromChar(int8_t anInt);
NSDecimal CPTDecimalFromShort(int16_t anInt);
NSDecimal CPTDecimalFromLong(int32_t anInt);
NSDecimal CPTDecimalFromLongLong(int64_t anInt);
NSDecimal CPTDecimalFromInt(int i);
NSDecimal CPTDecimalFromInteger(NSInteger i);

NSDecimal CPTDecimalFromUnsignedChar(uint8_t i);
NSDecimal CPTDecimalFromUnsignedShort(uint16_t i);
NSDecimal CPTDecimalFromUnsignedLong(uint32_t i);
NSDecimal CPTDecimalFromUnsignedLongLong(uint64_t i);
NSDecimal CPTDecimalFromUnsignedInt(unsigned int i);
NSDecimal CPTDecimalFromUnsignedInteger(NSUInteger i);

NSDecimal CPTDecimalFromFloat(float aFloat);
NSDecimal CPTDecimalFromDouble(double aDouble);
NSDecimal CPTDecimalFromCGFloat(CGFloat aCGFloat);

NSDecimal CPTDecimalFromString(NSString *stringRepresentation);

/// @}

/// @name NSDecimal Arithmetic
/// @{
NSDecimal CPTDecimalAdd(NSDecimal leftOperand, NSDecimal rightOperand);
NSDecimal CPTDecimalSubtract(NSDecimal leftOperand, NSDecimal rightOperand);
NSDecimal CPTDecimalMultiply(NSDecimal leftOperand, NSDecimal rightOperand);
NSDecimal CPTDecimalDivide(NSDecimal numerator, NSDecimal denominator);

/// @}

/// @name NSDecimal Comparison
/// @{
BOOL CPTDecimalGreaterThan(NSDecimal leftOperand, NSDecimal rightOperand);
BOOL CPTDecimalGreaterThanOrEqualTo(NSDecimal leftOperand, NSDecimal rightOperand);
BOOL CPTDecimalLessThan(NSDecimal leftOperand, NSDecimal rightOperand);
BOOL CPTDecimalLessThanOrEqualTo(NSDecimal leftOperand, NSDecimal rightOperand);
BOOL CPTDecimalEquals(NSDecimal leftOperand, NSDecimal rightOperand);

/// @}

/// @name NSDecimal Utilities
/// @{
NSDecimal CPTDecimalNaN(void);
NSDecimal CPTDecimalMin(NSDecimal leftOperand, NSDecimal rightOperand);
NSDecimal CPTDecimalMax(NSDecimal leftOperand, NSDecimal rightOperand);
NSDecimal CPTDecimalAbs(NSDecimal value);

/// @}

/// @name Ranges
/// @{
NSRange CPTExpandedRange(NSRange range, NSInteger expandBy);

/// @}

/// @name Coordinates
/// @{
CPTCoordinate CPTOrthogonalCoordinate(CPTCoordinate coord);

/// @}

/// @name Gradient Colors
/// @{
CPTRGBAColor CPTRGBAColorFromCGColor(CGColorRef color);

/// @}

/// @name Quartz Pixel-Alignment Functions
/// @{

/**
 *  @brief A function called to align a point in a CGContext.
 **/
typedef CGPoint (*CPTAlignPointFunction)(CGContextRef, CGPoint);

/**
 *  @brief A function called to align a rectangle in a CGContext.
 **/
typedef CGRect (*CPTAlignRectFunction)(CGContextRef, CGRect);

CGPoint CPTAlignPointToUserSpace(CGContextRef context, CGPoint point);
CGSize CPTAlignSizeToUserSpace(CGContextRef context, CGSize size);
CGRect CPTAlignRectToUserSpace(CGContextRef context, CGRect rect);

CGPoint CPTAlignIntegralPointToUserSpace(CGContextRef context, CGPoint point);
CGRect CPTAlignIntegralRectToUserSpace(CGContextRef context, CGRect rect);

/// @}

/// @name String Formatting for Core Graphics Structs
/// @{
NSString *CPTStringFromPoint(CGPoint point);
NSString *CPTStringFromSize(CGSize size);
NSString *CPTStringFromRect(CGRect rect);

/// @}

/// @name CGPoint Utilities
/// @{
CGFloat squareOfDistanceBetweenPoints(CGPoint point1, CGPoint point2);

/// @}

#if __cplusplus
}
#endif
