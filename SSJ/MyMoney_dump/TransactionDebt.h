//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TransactionDebt : NSObject
{
    long long _oid;
    long long _transactionId;
    long long _sellerId;
    long long _buyerId;
    double _createdTime;
    double _lastUpdateTime;
}

@property double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property double createdTime; // @synthesize createdTime=_createdTime;
@property long long buyerId; // @synthesize buyerId=_buyerId;
@property long long sellerId; // @synthesize sellerId=_sellerId;
@property long long transactionId; // @synthesize transactionId=_transactionId;
@property long long oid; // @synthesize oid=_oid;

@end

