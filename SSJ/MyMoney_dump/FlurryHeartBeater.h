//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface FlurryHeartBeater : NSObject
{
    NSTimer *_timer;
}

+ (id)instance;
+ (id)createAndStartInstance:(double)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)heartBeat;
- (void)start:(double)arg1;

@end

