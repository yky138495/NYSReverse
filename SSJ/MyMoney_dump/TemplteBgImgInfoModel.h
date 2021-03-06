//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TemplteBgImgInfoModel : NSObject
{
    long long _imgId;
    unsigned long long _position;
    NSString *_thumbnailUrl;
    NSString *_url;
    unsigned long long _originalImgState;
}

@property(nonatomic) unsigned long long originalImgState; // @synthesize originalImgState=_originalImgState;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) long long imgId; // @synthesize imgId=_imgId;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *originalImgName;
@property(readonly, copy, nonatomic) NSString *thumbnailImgName;
- (id)initWithimgId:(long long)arg1 position:(unsigned long long)arg2 thumbnailUrl:(id)arg3 originalUrl:(id)arg4;

@end

