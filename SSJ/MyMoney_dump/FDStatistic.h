//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FDStatistic : NSObject
{
}

+ (void)endTimedEvent:(id)arg1 withParameters:(id)arg2;
+ (void)logEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3;
+ (void)logEvent:(id)arg1 withParameters:(id)arg2;
+ (void)logEvent:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (void)logCommonEventWithKey:(id)arg1 andValue:(id)arg2;
+ (void)logAllPageViews:(id)arg1;
+ (void)logEvent:(id)arg1;
+ (void)startSession:(id)arg1;
+ (void)initialize;

@end
