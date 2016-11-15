//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface TemplateBgImgDataManager : NSObject
{
    NSArray *_sectionsInfoArray;
    NSDictionary *_rawImgInfoDic;
}

@property(retain, nonatomic) NSDictionary *rawImgInfoDic; // @synthesize rawImgInfoDic=_rawImgInfoDic;
@property(retain, nonatomic) NSArray *sectionsInfoArray; // @synthesize sectionsInfoArray=_sectionsInfoArray;
- (void).cxx_destruct;
- (id)sectionImagesWithSectionInfoArray:(id)arg1;
- (void)initAllImageSectionModel;
@property(readonly, nonatomic) unsigned long long allImgCnt;
- (void)fetchAllImageInfos:(CDUnknownBlockType)arg1;

@end

