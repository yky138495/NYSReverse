//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"

@class NSMutableData, NSString;

@interface TemplateBgImgCellLoader : NSObject <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _originalImgDownloadedCompletion;
    long long _imgID;
    NSMutableData *_originalImgData;
}

@property(retain, nonatomic) NSMutableData *originalImgData; // @synthesize originalImgData=_originalImgData;
@property(nonatomic) long long imgID; // @synthesize imgID=_imgID;
@property(copy, nonatomic) CDUnknownBlockType originalImgDownloadedCompletion; // @synthesize originalImgDownloadedCompletion=_originalImgDownloadedCompletion;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (_Bool)saveImageToLocalDocument:(id)arg1 imageName:(id)arg2;
- (id)session;
- (void)downloadThumbnailImageWithImgInfoModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadOriginalImageWithImgInfoModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchThumbnailImageWithImgInfoModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchOriginalImageWithImgInfoModel:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
