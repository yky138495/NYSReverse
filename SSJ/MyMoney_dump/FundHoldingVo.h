//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FundHoldingVo : NSObject
{
    int _fundType;
    long long _oid;
    NSString *_code;
    NSString *_name;
    double _buyAmount;
    double _buyShares;
    double _sellAmount;
    double _sellShares;
    NSString *_memo;
    double _createdTime;
    double _modifiedTime;
    long long _clientId;
}

@property(nonatomic) int fundType; // @synthesize fundType=_fundType;
@property(nonatomic) long long clientId; // @synthesize clientId=_clientId;
@property(nonatomic) double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(nonatomic) double createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(nonatomic) double sellShares; // @synthesize sellShares=_sellShares;
@property(nonatomic) double sellAmount; // @synthesize sellAmount=_sellAmount;
@property(nonatomic) double buyShares; // @synthesize buyShares=_buyShares;
@property(nonatomic) double buyAmount; // @synthesize buyAmount=_buyAmount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (id)init;

@end

