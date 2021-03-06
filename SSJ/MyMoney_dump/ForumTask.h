//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ForumTask : NSObject
{
    _Bool _taskIsFinished;
    int _credit;
    int _currentOperationTime;
    int _dayliLimit;
    int _lastFinishedTimes;
    NSString *_name;
    NSString *_redirectUrl;
}

+ (id)creditPointWithID:(long long)arg1;
+ (id)interpretRewardTextWithID:(long long)arg1;
+ (long long)interpretIDWithText:(id)arg1;
+ (id)interpretTextWithID:(long long)arg1;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(nonatomic) int lastFinishedTimes; // @synthesize lastFinishedTimes=_lastFinishedTimes;
@property(nonatomic) _Bool taskIsFinished; // @synthesize taskIsFinished=_taskIsFinished;
@property(nonatomic) int dayliLimit; // @synthesize dayliLimit=_dayliLimit;
@property(nonatomic) int currentOperationTime; // @synthesize currentOperationTime=_currentOperationTime;
@property(nonatomic) int credit; // @synthesize credit=_credit;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;
- (void)dealloc;

@end

