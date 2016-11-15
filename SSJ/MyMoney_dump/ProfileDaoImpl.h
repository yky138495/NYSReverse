//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "ProfileDao.h"

@interface ProfileDaoImpl : BaseDao <ProfileDao>
{
}

- (id)defaultCurrencyCode;
- (_Bool)SetRedirectUrlToDefault;
- (_Bool)setBindAccountName:(id)arg1;
- (id)syncAccountPassword;
- (id)syncAccountBind;
- (_Bool)updateProfileRedirectUrl:(id)arg1;
- (_Bool)updateProfile:(id)arg1 syncTimeStamp:(double)arg2 syncOffsetTime:(double)arg3;
- (id)redirectUrl;
- (id)syncLabelById;
- (double)syncTimestamp;
- (double)requiredSyncOffsetTime;
- (_Bool)emptyProfileSyncLabel;
- (id)profileById:(long long)arg1;
- (id)currentAccountBook;
- (id)accountBookWhenBackup;
- (_Bool)setAccountBookForSyncWithName:(id)arg1 cover:(unsigned long long)arg2;
- (_Bool)setAccountBookWhenBackupWithName:(id)arg1 cover:(id)arg2;
- (_Bool)updateProfile:(id)arg1;
- (long long)addProfile:(id)arg1;

@end
