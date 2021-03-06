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

/// @file

/**
 *  @brief Enumeration of data formats for numeric data.
 **/
typedef enum _CPTDataTypeFormat {
    CPTUndefinedDataType = 0,        ///< Undefined
    CPTIntegerDataType,              ///< Integer
    CPTUnsignedIntegerDataType,      ///< Unsigned integer
    CPTFloatingPointDataType,        ///< Floating point
    CPTComplexFloatingPointDataType, ///< Complex floating point
    CPTDecimalDataType               ///< NSDecimal
}
CPTDataTypeFormat;

/**
 *  @brief Enumeration of memory arrangements for multi-dimensional data arrays.
 *  @see See <a href="http://en.wikipedia.org/wiki/Row-major_order">Wikipedia</a> for more information.
 **/
typedef enum _CPTDataOrder {
    CPTDataOrderRowsFirst,   ///< Numeric data is arranged in row-major order.
    CPTDataOrderColumnsFirst ///< Numeric data is arranged in column-major order.
}
CPTDataOrder;

/**
 *  @brief Structure that describes the encoding of numeric data samples.
 **/
typedef struct _CPTNumericDataType {
    CPTDataTypeFormat dataTypeFormat; ///< Data type format
    size_t sampleBytes;               ///< Number of bytes in each sample
    CFByteOrder byteOrder;            ///< Byte order
}
CPTNumericDataType;

#if __cplusplus
extern "C" {
#endif

/// @name Data Type Utilities
/// @{
CPTNumericDataType CPTDataType(CPTDataTypeFormat format, size_t sampleBytes, CFByteOrder byteOrder);
CPTNumericDataType CPTDataTypeWithDataTypeString(NSString *dataTypeString);
NSString *CPTDataTypeStringFromDataType(CPTNumericDataType dataType);
BOOL CPTDataTypeIsSupported(CPTNumericDataType format);
BOOL CPTDataTypeEqualToDataType(CPTNumericDataType dataType1, CPTNumericDataType dataType2);

/// @}

#if __cplusplus
}
#endif
