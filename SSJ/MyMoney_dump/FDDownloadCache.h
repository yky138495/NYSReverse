//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FDDownloadCache : NSObject
{
    _Bool _persistent;
    NSString *_cacheDirectoryPath;
}

+ (id)sharedPersistentManager;
@property(readonly, nonatomic) NSString *cacheDirectoryPath; // @synthesize cacheDirectoryPath=_cacheDirectoryPath;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent; // @synthesize persistent=_persistent;
- (void).cxx_destruct;
- (id)cachePathForIdentifier:(id)arg1;
- (void)storeCacheItem:(id)arg1 forIdentifier:(id)arg2;
- (void)removeCachedItemForIdentifier:(id)arg1;
- (id)cachedItemForIdentifier:(id)arg1;
- (id)initPersistentCacheWithCacheDirectoryPath:(id)arg1;

@end

