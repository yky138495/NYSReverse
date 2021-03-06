//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface AccountGroup : NSObject
{
    long long _oid;
    NSString *_name;
    long long _parentId;
    NSString *_path;
    int _depth;
    long long _lastUpdateTime;
    long long _userId;
    _Bool _hasChildren;
    int _type;
    AccountGroup *_parent;
    NSMutableArray *_subgroups;
    NSString *_tempIconName;
}

@property(retain, nonatomic) NSString *tempIconName; // @synthesize tempIconName=_tempIconName;
@property(retain, nonatomic) NSMutableArray *subgroups; // @synthesize subgroups=_subgroups;
@property(nonatomic) __weak AccountGroup *parent; // @synthesize parent=_parent;
@property _Bool hasChildren; // @synthesize hasChildren=_hasChildren;
@property long long userId; // @synthesize userId=_userId;
@property long long lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property int type; // @synthesize type=_type;
@property int depth; // @synthesize depth=_depth;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property long long parentId; // @synthesize parentId=_parentId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)initWithId:(long long)arg1 name:(id)arg2;
- (id)initWithId:(long long)arg1 name:(id)arg2 type:(long long)arg3;
- (id)init;

@end

