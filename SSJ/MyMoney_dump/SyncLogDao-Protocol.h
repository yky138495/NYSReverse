//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class LogItem, NSArray, NSDate;

@protocol SyncLogDao
- (_Bool)deleteAllSyncLog;
- (_Bool)insertSyncLog:(LogItem *)arg1;
- (NSDate *)lastSyncDate;
- (NSArray *)syncLogs;
@end

