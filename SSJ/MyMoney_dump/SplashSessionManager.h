//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class NSString, NSURLSession;

@interface SplashSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    CDUnknownBlockType _backgroundSessionCompletionHandler;
    NSURLSession *_backgroundSession;
}

+ (id)sessionManagerWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(copy, nonatomic) CDUnknownBlockType backgroundSessionCompletionHandler; // @synthesize backgroundSessionCompletionHandler=_backgroundSessionCompletionHandler;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)localURLForRemoteURL:(id)arg1;
- (void)moveFileFromLocation:(id)arg1 forDownloadTask:(id)arg2;
- (void)downloadFileFromUrl:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
