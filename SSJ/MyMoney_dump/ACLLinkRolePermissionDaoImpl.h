//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDao.h"

#import "ACLLinkRolePermissionDao.h"

@class NSString;

@interface ACLLinkRolePermissionDaoImpl : BaseDao <ACLLinkRolePermissionDao>
{
}

- (id)linkRolePermissionsMatchingPredicate:(id)arg1;
- (long long)addLinkRolePermission:(id)arg1 toTable:(id)arg2;
- (void)sqlite3Statement:(struct sqlite3_stmt *)arg1 bindLinkRolePermission:(id)arg2;
- (id)linkRolePermissionForSqlStatement:(struct sqlite3_stmt *)arg1;
- (_Bool)updateLinkRolePermission:(id)arg1;
- (_Bool)removeLinkRolePermissionById:(long long)arg1;
- (long long)addLinkRolePermission:(id)arg1;
- (id)linkRolePermissionByFID:(long long)arg1;
- (id)linkRolePermissionsByPermissionCode:(id)arg1;
- (id)linkRolePermissionsByRoleUniqueName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

