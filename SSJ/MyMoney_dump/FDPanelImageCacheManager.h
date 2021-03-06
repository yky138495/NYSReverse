//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface FDPanelImageCacheManager : NSObject
{
    NSCache *_cache;
}

+ (_Bool)isImageExist:(id)arg1;
+ (id)downloadedImageWithImageName:(id)arg1;
+ (id)imageJPEGDataWithImage:(id)arg1 fewerThanLength:(unsigned long long)arg2;
+ (id)storedKeyForPath:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)defaultManager;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (_Bool)setDownloadedRetinaImage:(id)arg1 forKey:(id)arg2;
- (void)setRetinaImage:(id)arg1 forKey:(id)arg2;
- (id)imagePathWithKey:(id)arg1;
- (void)createBookTemplatePreviewImageDirectoryWithPath:(id)arg1;
- (void)createBookTemplateBgImgDownloadCacheDirectory;
- (void)createBookTemplateBackgroundImageCacheDirectory;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2 retina:(_Bool)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

