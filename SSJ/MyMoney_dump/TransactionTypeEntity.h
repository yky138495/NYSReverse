//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TransactionTypeEntity : NSObject
{
    unsigned long long _transactionType;
    NSString *_name;
}

+ (id)transactionTypeEntityWithTransactionType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long transactionType; // @synthesize transactionType=_transactionType;
- (void).cxx_destruct;

@end

