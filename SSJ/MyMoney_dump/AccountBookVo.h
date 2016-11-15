//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface AccountBookVo : NSObject <NSCoding, NSCopying>
{
    NSString *_name;
    NSString *_path;
    NSString *_key;
    NSString *_syncAccount;
    _Bool _isRemote;
    _Bool _isMaster;
    unsigned long long _templateType;
    unsigned long long _coverType;
    unsigned long long _type;
    NSString *_ownerAccount;
    NSString *_syncId;
    double _createdTime;
    _Bool _hasParticipant;
    _Bool _needAddMember;
    NSString *_coverName;
    unsigned long long _oldCoverType;
    _Bool _everSharedToSubsriber;
    _Bool _isDownloadedFromShare;
    long long _scrollHeaderIndex;
    NSString *_shareCode;
    NSString *_updateShareCode;
}

@property(retain, nonatomic) NSString *updateShareCode; // @synthesize updateShareCode=_updateShareCode;
@property(retain, nonatomic) NSString *shareCode; // @synthesize shareCode=_shareCode;
@property(nonatomic) _Bool isDownloadedFromShare; // @synthesize isDownloadedFromShare=_isDownloadedFromShare;
@property(nonatomic) long long scrollHeaderIndex; // @synthesize scrollHeaderIndex=_scrollHeaderIndex;
@property(nonatomic) _Bool everSharedToSubsriber; // @synthesize everSharedToSubsriber=_everSharedToSubsriber;
@property(nonatomic) unsigned long long oldCoverType; // @synthesize oldCoverType=_oldCoverType;
@property(copy, nonatomic) NSString *coverName; // @synthesize coverName=_coverName;
@property(nonatomic) _Bool needAddMember; // @synthesize needAddMember=_needAddMember;
@property(nonatomic) _Bool hasParticipant; // @synthesize hasParticipant=_hasParticipant;
@property(retain, nonatomic) NSString *ownerAccount; // @synthesize ownerAccount=_ownerAccount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
@property(nonatomic) unsigned long long coverType; // @synthesize coverType=_coverType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool isMaster; // @synthesize isMaster=_isMaster;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
@property(nonatomic) _Bool isRemote; // @synthesize isRemote=_isRemote;
@property(retain, nonatomic) NSString *syncAccount; // @synthesize syncAccount=_syncAccount;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isCurrentAccountBook;
- (_Bool)canSharedAccountbookUpdate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2 isRemote:(_Bool)arg3 type:(unsigned long long)arg4 templateType:(unsigned long long)arg5 coverType:(unsigned long long)arg6;
- (_Bool)isMultiBookAndOwnedByCurrentAccout;
- (_Bool)isMultiBook;
@property(nonatomic) _Bool Syncing__propertiesSetted;
@property(nonatomic) _Bool Syncing_hasChangesSinceLastSync;
@property(nonatomic) long long Syncing_modifyTransRows;
@property(nonatomic) long long Syncing_waitingTime;
@property(retain, nonatomic) NSString *Syncing_waitingDescription;

@end

