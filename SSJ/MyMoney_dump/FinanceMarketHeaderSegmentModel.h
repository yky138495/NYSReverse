//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FinanceMarketHeaderSegmentModel : NSObject
{
    NSString *_explain;
    NSString *_hrefUrl;
    NSString *_openWay;
    NSString *_isNative;
}

@property(copy, nonatomic) NSString *isNative; // @synthesize isNative=_isNative;
@property(copy, nonatomic) NSString *openWay; // @synthesize openWay=_openWay;
@property(copy, nonatomic) NSString *hrefUrl; // @synthesize hrefUrl=_hrefUrl;
@property(copy, nonatomic) NSString *explain; // @synthesize explain=_explain;
- (void).cxx_destruct;
- (id)initWithJsonDic:(id)arg1;

@end

