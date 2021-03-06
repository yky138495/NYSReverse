//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GlobalTask, NSArray;

@protocol GlobalTaskManager <NSObject>
- (void)generateWeeklyReportIfAvaliable;
- (void)syncTaskToServer;
- (void)updateTaskSyncedWithPOIDs:(NSArray *)arg1;
- (NSArray *)tasksNeedToSync;
- (void)upsertTaskFinishedWithTaskPOIDs:(NSArray *)arg1 andFinishedTimes:(NSArray *)arg2;
- (void)upsertTaskFinishedWithTaskPOIDs:(NSArray *)arg1;
- (long long)expForCurrentLevelStart:(unsigned int)arg1;
- (long long)expForCurrentLevel:(unsigned int)arg1;
- (long long)expToNextLevelForExp:(long long)arg1;
- (unsigned int)levelForExp:(long long)arg1;
- (unsigned int)levelForCurrentUser;
- (long long)expForCurrentUser;
- (GlobalTask *)taskWithKey:(long long)arg1;
- (GlobalTask *)taskWithPOID:(long long)arg1;
- (NSArray *)tasksFinishedLimit:(int)arg1 withUserPOID:(long long)arg2;
- (NSArray *)tasksFinishedForCurrentUserLimit:(int)arg1;
- (NSArray *)tasksActivedNoneFinishedLimit:(int)arg1 withUserPOID:(long long)arg2;
- (NSArray *)tasksActivedNoneFinishedForCurrentUserLimit:(int)arg1;
- (_Bool)finishTaskWithPOID:(long long)arg1;
- (_Bool)finishTaskIfActivedWithKey:(long long)arg1;
- (_Bool)finishTaskIfActivedWithPOID:(long long)arg1;
- (long long)addDailyTaskIfAvaliableWithKey:(int)arg1;
- (_Bool)activeTaskWithKey:(long long)arg1;
@end

