//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "AccountGroupDao.h"

@interface AccountGroupDaoImpl : BaseDao <AccountGroupDao>
{
}

- (id)firstLevelAccountGroupsByTypes:(id)arg1;
- (id)extractAccountGroupStatement:(struct sqlite3_stmt *)arg1;
- (long long)rootAccountGroupIdWithUserId:(long long)arg1;
- (id)flattenAccountGroups;
- (id)listAccuntGroupAtParent:(long long)arg1;
- (long long)addAccountGroup:(id)arg1 atParent:(long long)arg2;
- (id)accountGroupByName:(id)arg1;
- (id)accountGroupsByIds:(id)arg1;
- (id)accountGroupById:(long long)arg1;
- (id)rootAccountGroup;
- (long long)rootAccountGroupId;

@end

