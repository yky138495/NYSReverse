//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface FDGlobalBookTemplateMeta : NSObject
{
    NSDictionary *_rawDictionary;
    NSDictionary *_layoutStyle1ColorMap;
}

@property(retain, nonatomic) NSDictionary *layoutStyle1ColorMap; // @synthesize layoutStyle1ColorMap=_layoutStyle1ColorMap;
@property(retain, nonatomic) NSDictionary *rawDictionary; // @synthesize rawDictionary=_rawDictionary;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (id)layoutStyle1AddExpenseStyleFromBackImgID:(int)arg1;
- (id)layoutStyle1ColorFromBackImgID:(int)arg1;

@end

