//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RemindService.h"

@class NSString;

@interface RemindServiceImpl : NSObject <RemindService>
{
}

- (_Bool)changeAddExpenseRemindItem:(id)arg1;
- (id)allMessageRemindItmes;
- (void)updateLatestNewRecordTime;
- (double)latestNewRecordTime;
- (id)addExpenseRemindVo;
- (id)createDictionaryWithMessageRemindVo:(id)arg1;
- (id)createMessageRemindVoWithDictionary:(id)arg1;
- (_Bool)upgradeRemindConfigFile;
- (_Bool)setCurrentConfigVersion:(int)arg1;
- (int)currentConfigVersion;
- (_Bool)remindConfigFileUpgrade4;
- (_Bool)RemindConfigFileUpgrade3;
- (_Bool)RemindConfigFileUpgrade2;
- (id)randomSyncTime;
- (_Bool)createRemindConfigFileIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
