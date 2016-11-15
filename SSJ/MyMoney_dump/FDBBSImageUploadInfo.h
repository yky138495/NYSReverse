//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface FDBBSImageUploadInfo : NSObject
{
    NSString *_imageParamName;
    NSURL *_uploadURL;
    NSArray *_cookies;
    NSDictionary *_extraParams;
    NSString *_userAgent;
}

@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(retain, nonatomic) NSString *imageParamName; // @synthesize imageParamName=_imageParamName;
- (void).cxx_destruct;
- (void)loadCookieFromString:(id)arg1 forDomain:(id)arg2;

@end
