//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FundVo : NSObject
{
    long long _oid;
    NSString *_code;
    NSString *_name;
    unsigned long long _type;
    double _netAsset;
    double _netAssetDate;
    double _ACCNAV;
    double _perMillionFundNetRevenue;
    double _onThe7thOfTheYearYield;
    double _lastUpdateTime;
    double _buyerRate;
    double _sellerRate;
}

@property(nonatomic) double sellerRate; // @synthesize sellerRate=_sellerRate;
@property(nonatomic) double buyerRate; // @synthesize buyerRate=_buyerRate;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) double onThe7thOfTheYearYield; // @synthesize onThe7thOfTheYearYield=_onThe7thOfTheYearYield;
@property(nonatomic) double perMillionFundNetRevenue; // @synthesize perMillionFundNetRevenue=_perMillionFundNetRevenue;
@property(nonatomic) double ACCNAV; // @synthesize ACCNAV=_ACCNAV;
@property(nonatomic) double netAssetDate; // @synthesize netAssetDate=_netAssetDate;
@property(nonatomic) double netAsset; // @synthesize netAsset=_netAsset;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

