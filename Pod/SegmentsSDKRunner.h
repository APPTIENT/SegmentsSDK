//
//  SegmentsSDKRunner.h
//  SegmentsSDK
//
//  Created by Bruno Bulić on 31/03/14.
//  Copyright (c) 2015 APPTIENT Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, APTSegmentsSDKRunnerVerbosity) {
    APTSegmentsSDKRunnerVerbosityDefault = 0,
    APTSegmentsSDKRunnerVerbosityErrorsOnly = 0b01,
    APTSegmentsSDKRunnerVerbosityFull = 0b10
};

@protocol SegmentsSDKRunnerDelegate <NSObject>
@optional
- (void)tagEvent:(NSString *)event withAttributes:(NSDictionary *)dictionary;
@end

@protocol SegmentsSDKRunnerConfiguration <NSObject>

- (BOOL)isLocationEnabled;
- (BOOL)isSegmentFetchEnabled;
- (APTSegmentsSDKRunnerVerbosity)debugMode;

@end

@protocol SegmentsSDKRunner <NSObject>

@property (nonatomic, weak) id<SegmentsSDKRunnerDelegate> delegate;

- (NSString *)appId;
- (void)stopSending;
- (void)resumeSending;
- (void)setDebugMode:(APTSegmentsSDKRunnerVerbosity)debugMode;

@end
