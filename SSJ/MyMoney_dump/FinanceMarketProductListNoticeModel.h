//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FinanceMarketProductListNoticeModel : NSObject
{
    NSString *_noticeType;
    NSString *_imgSrc;
    NSString *_title;
    NSString *_hrefUrl;
    NSString *_openWay;
}

@property(copy, nonatomic) NSString *openWay; // @synthesize openWay=_openWay;
@property(copy, nonatomic) NSString *hrefUrl; // @synthesize hrefUrl=_hrefUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imgSrc; // @synthesize imgSrc=_imgSrc;
@property(copy, nonatomic) NSString *noticeType; // @synthesize noticeType=_noticeType;
- (void).cxx_destruct;
- (id)initWithJsonDic:(id)arg1;

@end

