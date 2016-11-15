//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CrackChecker : NSObject
{
    _Bool _isCrackedVersion;
    NSString *_plistFilePath;
}

+ (_Bool)isCrackedVersion;
+ (id)sharedCrackChecker;
@property(copy, nonatomic) NSString *plistFilePath; // @synthesize plistFilePath=_plistFilePath;
@property(readonly, nonatomic) _Bool isCrackedVersion; // @synthesize isCrackedVersion=_isCrackedVersion;
- (void).cxx_destruct;
- (id)init;
- (void)checkCurrentCopy;
- (void)checkByPlistContent;
- (void)checkByPlistType;
- (void)checkByPlistFileSize;

@end

