//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface StockLatestPriceVo : NSObject
{
    NSString *_stockCode;
    double _latestPrice;
    double _priceUpDownValue;
    double _priceUpDownPercent;
}

@property(nonatomic) double priceUpDownPercent; // @synthesize priceUpDownPercent=_priceUpDownPercent;
@property(nonatomic) double priceUpDownValue; // @synthesize priceUpDownValue=_priceUpDownValue;
@property(nonatomic) double latestPrice; // @synthesize latestPrice=_latestPrice;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

