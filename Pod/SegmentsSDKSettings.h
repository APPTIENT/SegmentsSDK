//
//  SegmentsSDKSettings.h
//  SegmentsSDK
//
//  Created by Bruno Bulić on 22/04/15.
//  Copyright (c) 2015 Marlin Mobile Inc. All rights reserved.
//

#include "SegmentsSDKRunner.h"

@interface SegmentsSDKSettings : NSObject<SegmentsSDKRunnerConfiguration>

+ (id<SegmentsSDKRunnerConfiguration>)defaultSettings;

- (instancetype)initWithConfiguration:(id<SegmentsSDKRunnerConfiguration>)configuration;

@property (nonatomic, readonly) BOOL isLocationEnabled;
@property (nonatomic, readonly) BOOL isSegmentFetchEnabled;
@property (nonatomic, readonly) APTSegmentsSDKRunnerVerbosity debugMode;

@end

@interface SegmentsSDKMutableSettings : SegmentsSDKSettings

+ (instancetype)defaultSettings;

- (void)setIsLocationEnabled:(BOOL)isEnabled;
- (void)setSegmentFetchEnabled:(BOOL)isSegmentFetchEnabled;
- (void)setDebugMode:(APTSegmentsSDKRunnerVerbosity)debugVerbosity;

@end