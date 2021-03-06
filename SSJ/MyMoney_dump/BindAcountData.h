//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface BindAcountData : NSObject
{
    long long _oid;
    NSString *_loginAccountName;
    double _lastImportTime;
    long long _importType;
    NSString *_bankCode;
    NSArray *_importHistoryArray;
}

@property(retain, nonatomic) NSArray *importHistoryArray; // @synthesize importHistoryArray=_importHistoryArray;
@property(retain, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
@property(nonatomic) long long importType; // @synthesize importType=_importType;
@property(nonatomic) double lastImportTime; // @synthesize lastImportTime=_lastImportTime;
@property(retain, nonatomic) NSString *loginAccountName; // @synthesize loginAccountName=_loginAccountName;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (id)dictionaryForJson;

@end

