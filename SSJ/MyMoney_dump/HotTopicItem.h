//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZFBaseEntity.h"

@class NSNumber, NSString;

@interface HotTopicItem : ZFBaseEntity
{
    NSString *_title;
    NSString *_type;
    NSString *_desc;
    NSString *_img;
    NSString *_url;
    NSString *_tid;
    NSString *_fid;
    NSString *_authorid;
    NSString *_author;
    NSString *_fname;
    NSString *_reply;
    NSString *_comments;
    NSNumber *_views;
    NSString *_replies;
}

@property(copy, nonatomic) NSString *replies; // @synthesize replies=_replies;
@property(copy, nonatomic) NSNumber *views; // @synthesize views=_views;
@property(copy, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(copy, nonatomic) NSString *reply; // @synthesize reply=_reply;
@property(copy, nonatomic) NSString *fname; // @synthesize fname=_fname;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *authorid; // @synthesize authorid=_authorid;
@property(copy, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
