//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SyncCenterDelegate.h"

@class FDSyncStatusView, NSString, SyncCenter;

@interface SyncCenterUI : NSObject <SyncCenterDelegate>
{
    _Bool _upgradeSync;
    FDSyncStatusView *_syncStatusView;
    SyncCenter *_syncCenter;
}

@property(retain, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(nonatomic) _Bool upgradeSync; // @synthesize upgradeSync=_upgradeSync;
@property(retain, nonatomic) FDSyncStatusView *syncStatusView; // @synthesize syncStatusView=_syncStatusView;
- (void).cxx_destruct;
- (void)animateProgressPercent:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRetryButtonAction;
- (void)delayDismiss;
- (void)finishedWithShouldShowRetry:(_Bool)arg1 shouldShowMessage:(_Bool)arg2;
- (void)replaceMessage:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startExecuting;
- (void)dealloc;
- (void)concurrencySyncToServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 accountBooks:(id)arg3 selectedAccountBookBeforeSync:(id)arg4 dataSuiteVo:(id)arg5 ignoreBookVos:(id)arg6 deletedBookVos:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

