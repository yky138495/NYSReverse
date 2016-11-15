//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACLLinkUserRole, NSArray, NSString;

@protocol ACLLinkUserRoleDao <NSObject>
- (_Bool)updateLinkUserRole:(ACLLinkUserRole *)arg1;
- (_Bool)removeLinkUserRoleById:(long long)arg1;
- (long long)addLinkUserRole:(ACLLinkUserRole *)arg1;
- (ACLLinkUserRole *)linkUserRoleByFID:(long long)arg1;
- (NSArray *)linkUserRolesByRoleUniqueName:(NSString *)arg1;
- (NSArray *)linkUserRolesByUid:(NSString *)arg1;
- (NSArray *)linkUserRoles;
@end

