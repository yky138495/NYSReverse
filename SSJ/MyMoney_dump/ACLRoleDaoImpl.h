//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "ACLRoleDao.h"

@class NSString;

@interface ACLRoleDaoImpl : BaseDao <ACLRoleDao>
{
}

- (id)rolesMatchingPredicate:(id)arg1;
- (long long)addRole:(id)arg1 toTable:(id)arg2;
- (void)sqlite3Statement:(struct sqlite3_stmt *)arg1 bindRole:(id)arg2;
- (id)roleForSqlStatement:(struct sqlite3_stmt *)arg1;
- (_Bool)updateRole:(id)arg1;
- (_Bool)removeRoleById:(long long)arg1;
- (long long)addRole:(id)arg1;
- (id)rolesByUniqueName:(id)arg1;
- (id)rolesByRoleName:(id)arg1;
- (id)roleById:(long long)arg1;
- (id)roles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

