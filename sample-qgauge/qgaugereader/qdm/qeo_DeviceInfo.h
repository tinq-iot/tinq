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

/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#import <Foundation/Foundation.h>
#import <Qeo/Qeo.h>
#import "qeo_types.h"


/**
 * Basic device info published by any Qeo-enabled device. 	 On Android, the Qeo Service will handle the job of publishing this information.
 */
@interface org_qeo_system_DeviceInfo : QEOType

  /**
   * [Key]
   * The device identification generated by Qeo.
   */
  @property (strong,nonatomic) org_qeo_system_DeviceId * deviceId;
  /**
   * The manufacturer of the device (human readable string).
   */
  @property (strong,nonatomic) NSString * manufacturer;
  /**
   * Model name of the device (human readable string).
   */
  @property (strong,nonatomic) NSString * modelName;
  /**
   * Identifier of the class of product for which the serial number applies. That is, for a given manufacturer, this parameter is used to identify the product or class of product over which the SerialNumber parameter is unique. This value MUST remain fixed over the lifetime of the device, including across firmware updates.
   */
  @property (strong,nonatomic) NSString * productClass;
  /**
   * Identifier of the particular device that is unique for the indicated class of product and manufacturer. This value MUST remain fixed over the lifetime of the device, including across firmware updates.
   */
  @property (strong,nonatomic) NSString * serialNumber;
  /**
   * A string identifying the particular CPE model and version.
   */
  @property (strong,nonatomic) NSString * hardwareVersion;
  /**
   * A string identifying the software version currently installed in the device (i.e. version of the overall device firmware). To allow version comparisons, this element SHOULD be in the form of dot-delimited integers, where each successive integer represents a more minor category of variation. For example, 3.0.21 where the components mean: Major.Minor.Build.
   */
  @property (strong,nonatomic) NSString * softwareVersion;
  /**
   * Descriptive name of the device.
   */
  @property (strong,nonatomic) NSString * userFriendlyName;
  /**
   * URL for configuration page that allows to view and/or configure device settings.
   */
  @property (strong,nonatomic) NSString * configURL;

@end


