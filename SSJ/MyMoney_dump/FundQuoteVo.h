//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FundQuoteVo : NSObject
{
    long long _oid;
    NSString *_fundCode;
    unsigned long long _fundType;
    double _netAsset;
    double _perMillionFundNetRevenue;
    double _onThe7thOfTheYearYield;
    double _ACCNAV;
    double _quoteDate;
}

@property(nonatomic) double quoteDate; // @synthesize quoteDate=_quoteDate;
@property(nonatomic) double ACCNAV; // @synthesize ACCNAV=_ACCNAV;
@property(nonatomic) double onThe7thOfTheYearYield; // @synthesize onThe7thOfTheYearYield=_onThe7thOfTheYearYield;
@property(nonatomic) double perMillionFundNetRevenue; // @synthesize perMillionFundNetRevenue=_perMillionFundNetRevenue;
@property(nonatomic) double netAsset; // @synthesize netAsset=_netAsset;
@property(nonatomic) unsigned long long fundType; // @synthesize fundType=_fundType;
@property(retain, nonatomic) NSString *fundCode; // @synthesize fundCode=_fundCode;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUnknownFundWithOid:(long long)arg1 fundCode:(id)arg2 netAsset:(double)arg3 aACCNAV:(double)arg4 quoteDate:(double)arg5;
- (id)initWithMonetaryFundWithOid:(long long)arg1 fundCode:(id)arg2 perMillionFundNetRevenue:(double)arg3 onThe7thOfTheYearYield:(double)arg4 quoteDate:(double)arg5;

@end

