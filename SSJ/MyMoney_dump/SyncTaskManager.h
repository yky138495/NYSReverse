//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SyncTaskManager : NSObject
{
    long long _state;
    _Bool _needSyncToServer;
}

- (void)dismissSynchronizingUI;
- (void)displaySynchronizingUI;
- (void)destroyTask;
- (void)executeTask;
- (void)createAndExecuteTask;
@property(readonly, nonatomic) _Bool isSynchronizing;
@property(readonly, nonatomic) _Bool hasNewData;
@property(readonly, nonatomic) _Bool isExecuting;
@property(readonly, nonatomic) _Bool hasDestroyed;
- (_Bool)needSyncToServer;
- (id)init;

@end

