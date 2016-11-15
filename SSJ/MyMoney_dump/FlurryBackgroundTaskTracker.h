//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FlurryBackgroundTaskTracker : NSObject
{
    _Bool _isBackgroundSupported;
    unsigned long long _backgroundTask;
}

+ (id)defaultTracker;
@property(nonatomic) _Bool isBackgroundSupported; // @synthesize isBackgroundSupported=_isBackgroundSupported;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
- (void)stopBackgroundTasksTracking;
- (void)startBackgroundTaskTrackingIfNeeded;
- (id)init;

@end
