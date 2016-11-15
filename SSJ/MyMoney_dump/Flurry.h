//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Flurry : NSObject
{
}

+ (void)removeInstallationIDFromKeychain;
+ (_Bool)flurryUserInfo:(id)arg1;
+ (_Bool)isFlurryUserInfo:(id)arg1;
+ (void)disableWatchConnectivity;
+ (void)disableTransferOfFlurryInfo;
+ (_Bool)sendUsageInfo;
+ (_Bool)hasUserOptedOut;
+ (void)setFlurryOptOut:(_Bool)arg1;
+ (void)shutdown;
+ (void)setShowErrorInLogEnabled:(_Bool)arg1;
+ (void)setAge:(int)arg1;
+ (void)setGender:(id)arg1;
+ (void)setBackgroundSessionEnabled:(_Bool)arg1;
+ (void)setSessionReportsOnPauseEnabled:(_Bool)arg1;
+ (void)setSessionReportsOnCloseEnabled:(_Bool)arg1;
+ (void)setCrashReportingEnabled:(_Bool)arg1;
+ (void)setSecureTransportEnabledDeprecated:(_Bool)arg1;
+ (void)setAppCloudServerToStaging:(_Bool)arg1;
+ (void)setPulseCBServerURL:(id)arg1;
+ (void)setPulseServerURL:(id)arg1;
+ (void)setPulseEnabled:(_Bool)arg1;
+ (void)setEventLoggingEnabled:(_Bool)arg1;
+ (void)setUserID:(id)arg1;
+ (void)endTimedEvent:(id)arg1 withParameters:(id)arg2;
+ (int)logEvent:(id)arg1 withParameters:(id)arg2 timed:(_Bool)arg3;
+ (int)logEvent:(id)arg1 timed:(_Bool)arg2;
+ (int)logEvent:(int)arg1 syndicationID:(id)arg2 parameters:(id)arg3;
+ (_Bool)areParametersValidForSyndicationEvent:(int)arg1 syndicationID:(id)arg2 parameters:(id)arg3;
+ (id)updateSyndicationParameters:(id)arg1 syndicationID:(id)arg2;
+ (void)logPageView;
+ (void)stopLogPageViewsForTarget:(id)arg1;
+ (void)logAllPageViewsForTarget:(id)arg1;
+ (void)logAllPageViews:(id)arg1;
+ (void)logError:(id)arg1 message:(id)arg2 error:(id)arg3;
+ (void)logError:(id)arg1 message:(id)arg2 exception:(id)arg3;
+ (int)logEvent:(id)arg1 withParameters:(id)arg2;
+ (int)logEvent:(id)arg1;
+ (void)addOrigin:(id)arg1 withVersion:(id)arg2 withParameters:(id)arg3;
+ (void)addOrigin:(id)arg1 withVersion:(id)arg2;
+ (void)sessionProperties:(id)arg1;
+ (void)addSessionOrigin:(id)arg1 withDeepLink:(id)arg2;
+ (void)addSessionOrigin:(id)arg1;
+ (void)didFinishLaunchingWithOptionsInBackground:(id)arg1;
+ (void)applicationDidBecomeActive;
+ (void)applicationWillEnterForeground;
+ (void)pauseSession;
+ (void)pauseBackgroundSession;
+ (void)endSession;
+ (void)setDelegate:(id)arg1;
+ (void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4;
+ (id)getSessionID;
+ (_Bool)activeSessionExists;
+ (void)startupNetworkAndSendSession;
+ (void)startSession:(id)arg1;
+ (void)startSession:(id)arg1 withOptions:(id)arg2;
+ (void)createAndSendSession;
+ (void)applicationWillResignActive;
+ (void)setMaxSessionsSaved:(int)arg1;
+ (void)setSessionContinueSeconds:(int)arg1;
+ (int)sessionContinueSeconds;
+ (void)setServerURL:(id)arg1;
+ (void)setDebugLogEnabled:(_Bool)arg1;
+ (void)setLogLevel:(int)arg1;
+ (id)getFlurryAgentVersion;
+ (void)parseDictionary:(id)arg1;
+ (void)parsePropertyList:(id)arg1;
+ (void)setLaunchOptions:(id)arg1;
+ (void)setAppVersion:(id)arg1;

@end

