//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FinanceWalletAsset : NSObject
{
    NSString *_allProfit;
    NSString *_allProfitColor;
    NSString *_contentColor;
    NSString *_content;
    NSString *_dayProfit;
    NSString *_dayColor;
    NSString *_iconSrc;
    NSString *_tagName;
    long long _tagStyle;
    NSString *_URL;
}

@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(nonatomic) long long tagStyle; // @synthesize tagStyle=_tagStyle;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *iconSrc; // @synthesize iconSrc=_iconSrc;
@property(copy, nonatomic) NSString *dayColor; // @synthesize dayColor=_dayColor;
@property(copy, nonatomic) NSString *dayProfit; // @synthesize dayProfit=_dayProfit;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *contentColor; // @synthesize contentColor=_contentColor;
@property(copy, nonatomic) NSString *allProfitColor; // @synthesize allProfitColor=_allProfitColor;
@property(copy, nonatomic) NSString *allProfit; // @synthesize allProfit=_allProfit;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
