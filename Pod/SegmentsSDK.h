//
//  SegmentsSDK.h
//  SegmentsSDK
//
//  Created by Bruno Bulić on 31/03/14.
//  Copyright (c) 2015 APPTIENT Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SegmentsSDKRunner.h"
#import "SegmentsSDKSettings.h"

extern NSString * kMMMetricsSDKVersion;

@interface SegmentsSDK : NSObject

+ (id<SegmentsSDKRunner>)startWithAppId:(NSString *)appId;
+ (id<SegmentsSDKRunner>)startWithAppId:(NSString *)appId forceLocation:(BOOL)shouldForceLocation;

+ (id<SegmentsSDKRunner>)startWithAppId:(NSString *)appId withDelegate:(id<SegmentsSDKRunnerDelegate>)runnerDelegate;
+ (id<SegmentsSDKRunner>)startWithAppId:(NSString *)appId forceLocation:(BOOL)shouldForceLocation withDelegate:(id<SegmentsSDKRunnerDelegate>)runnerDelegate;

+ (id<SegmentsSDKRunner>)defaultRunner;

+ (id<SegmentsSDKRunner>)startWithAppId:(NSString *)appId withDelegate:(id<SegmentsSDKRunnerDelegate>)runnerDelegate andConfiguration:(id<SegmentsSDKRunnerConfiguration>)configuration;

@end

