//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACLLinkRolePermission, NSArray, NSString;

@protocol ACLLinkRolePermissionDao <NSObject>
- (_Bool)updateLinkRolePermission:(ACLLinkRolePermission *)arg1;
- (_Bool)removeLinkRolePermissionById:(long long)arg1;
- (long long)addLinkRolePermission:(ACLLinkRolePermission *)arg1;
- (ACLLinkRolePermission *)linkRolePermissionByFID:(long long)arg1;
- (NSArray *)linkRolePermissionsByPermissionCode:(NSString *)arg1;
- (NSArray *)linkRolePermissionsByRoleUniqueName:(NSString *)arg1;
@end
