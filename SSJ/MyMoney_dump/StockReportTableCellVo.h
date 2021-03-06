//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, StockCenterViewController;

@interface StockReportTableCellVo : NSObject
{
    _Bool _hideProfitLossButton;
    int _showType;
    NSString *_name;
    NSString *_code;
    NSString *_marketValue;
    double _currentStockPrice;
    double _profitLossValue;
    double _profitLossPercent;
    StockCenterViewController *_delegateController;
}

@property(nonatomic) _Bool hideProfitLossButton; // @synthesize hideProfitLossButton=_hideProfitLossButton;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(nonatomic) __weak StockCenterViewController *delegateController; // @synthesize delegateController=_delegateController;
@property(nonatomic) double profitLossPercent; // @synthesize profitLossPercent=_profitLossPercent;
@property(nonatomic) double profitLossValue; // @synthesize profitLossValue=_profitLossValue;
@property(nonatomic) double currentStockPrice; // @synthesize currentStockPrice=_currentStockPrice;
@property(retain, nonatomic) NSString *marketValue; // @synthesize marketValue=_marketValue;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

