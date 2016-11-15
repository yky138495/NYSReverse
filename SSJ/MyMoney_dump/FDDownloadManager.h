//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, Reachability;

@interface FDDownloadManager : NSObject
{
    NSString *_configurationPath;
    Reachability *_reachability;
    id <FDDownloadManagerDelegate> _delegate;
    NSMutableDictionary *_taskMap;
    NSMutableDictionary *_connectionMap;
}

+ (id)sharedManager;
@property(retain) NSMutableDictionary *connectionMap; // @synthesize connectionMap=_connectionMap;
@property(retain) NSMutableDictionary *taskMap; // @synthesize taskMap=_taskMap;
@property(nonatomic) __weak id <FDDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)loadConfiguration;
- (_Bool)saveConfiguration;
- (void)startTask:(id)arg1;
- (void)handleReachabilityChangedNotification:(id)arg1;
- (void)registerReachabilityNotification:(_Bool)arg1;
- (void)addTask:(id)arg1;
- (void)stopAllTask;
- (void)startAllPendingTask;
- (void)dealloc;
- (id)initWithConfigurationFilePath:(id)arg1;

@end

