//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FinanceWalletServiceCall : NSObject
{
    NSString *_phoneNumber;
    long long _state;
    NSArray *_timeContent;
    NSString *_tipsContent;
    NSString *_title;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tipsContent; // @synthesize tipsContent=_tipsContent;
@property(copy, nonatomic) NSArray *timeContent; // @synthesize timeContent=_timeContent;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
