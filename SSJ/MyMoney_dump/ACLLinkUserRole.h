//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ACLLinkUserRole : NSObject
{
    long long _oid;
    NSString *_uid;
    NSString *_roleUniqueName;
    double _createdTime;
    double _modifiedTime;
    long long _clientId;
}

@property(nonatomic) long long clientId; // @synthesize clientId=_clientId;
@property(nonatomic) double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(nonatomic) double createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSString *roleUniqueName; // @synthesize roleUniqueName=_roleUniqueName;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;

@end

