//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FDSecurityLockWindow;

@interface FDSecurityLockManager : NSObject
{
    _Bool _isTogglingLock;
    _Bool _isPresengtingTouchID;
    _Bool _isLocked;
    FDSecurityLockWindow *_lockingWindow;
    _Bool _isPassedAuthentication;
    id <FDSecurityLockManagerDelegate> _delegate;
    unsigned long long _backgroundTaskIdentifier;
}

+ (_Bool)canUseTouchID;
+ (_Bool)isValidPasscodeFormat:(id)arg1 errorMessage:(id *)arg2;
+ (id)sharedManager;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic) _Bool isPassedAuthentication; // @synthesize isPassedAuthentication=_isPassedAuthentication;
@property(nonatomic) __weak id <FDSecurityLockManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDidUnlock;
- (void)notifyWillUnlock;
- (void)notifyDidLock;
- (void)notifyWillLock;
- (void)validateTouchIDWithBackTitle:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)tryShowTouchIDAuthentication;
- (void)startBackgroundLockingTask;
- (void)invalidateBackgroundTask;
- (void)handleApplicationWillEnterForegroundNotification:(id)arg1;
- (void)handleApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)handleApplicationDidBecomeActiveNotification:(id)arg1;
- (void)handleApplicationWillResignActiveNotification:(id)arg1;
- (void)dismissLockingWindowWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissLockingWindow;
- (void)presentLockingWindowWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLockingWindow;
- (void)handleEditingMainWindow;
- (void)registerNotification:(_Bool)arg1;
- (id)currentPasscode;
- (_Bool)isTouchIDAuthenticationActived;
- (_Bool)setTouchID;
- (void)removeTouchID;
- (void)setSecureInput:(_Bool)arg1;
- (_Bool)isEnableSecureInput;
- (void)setEmailForRetrivingPasscode:(id)arg1;
- (id)emailForRetrivingPasscode;
- (_Bool)validatePasscode:(id)arg1;
- (_Bool)setPasscode:(id)arg1;
- (void)removePasscode;
- (_Bool)isPasscodeEnabled;
- (long long)lockingStatus;
- (long long)lockingMethod;
- (void)lockingWindowMakeKeyAndVisible;
- (void)unlockApplicationAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)lockApplicationAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unlockApplicationAnimated:(_Bool)arg1;
- (void)lockApplicationAnimated:(_Bool)arg1;
- (void)unlockApplication;
- (void)lockApplication;
- (void)startManagement;
- (void)dealloc;
- (id)init;

@end
