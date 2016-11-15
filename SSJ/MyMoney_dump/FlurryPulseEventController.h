//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FlurryHttpAsyncTaskDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FlurryPulseEventController : NSObject <FlurryHttpAsyncTaskDelegate>
{
    NSObject<OS_dispatch_queue> *queue;
}

+ (int)pulseEventStringToEnum:(id)arg1;
+ (id)pulseEventEnumToString:(int)arg1;
+ (id)pulseEventArrayInstance;
+ (void)cleanup;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
- (void).cxx_destruct;
- (id)substituteParamsInDictionary:(id)arg1 withValuesDictionary:(id)arg2 forPattern:(id)arg3;
- (void)firePendingUrls;
- (void)fireUrlOnTimer:(id)arg1;
- (void)setTimerToFireUrlWithInvokeInfo:(id)arg1;
- (void)makePulseRequest;
- (void)manageUrlStorage:(id)arg1;
- (void)firePendingUrlsOnNetworkAvailability;
- (void)networkStatusChanged:(id)arg1;
- (void)appWillResume:(id)arg1;
- (void)appWillBackground:(id)arg1;
- (void)requestDidCancel:(id)arg1 withResponse:(id)arg2;
- (void)requestDidFail:(id)arg1 withResponse:(id)arg2;
- (void)requestSuccessful:(id)arg1 withResponse:(id)arg2;
- (void)fireAllConfigUrls;
- (void)asyncInvokeURLWithParams:(id)arg1;
- (void)processEvent:(id)arg1 withParams:(id)arg2;
- (void)updatePulseForAdTracking;
- (void)registerForNotifications:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

