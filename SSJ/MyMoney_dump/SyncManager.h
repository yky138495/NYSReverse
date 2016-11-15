//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DataSetSyncConnectionHandler, NSData, NSString, NSTimer, PhotoSyncConnectionHandler, SyncContext;

@interface SyncManager : NSObject
{
    struct dispatch_queue_s *_syncQueue;
    struct dispatch_queue_s *_databaseQueue;
    struct dispatch_queue_s *_fileQueue;
    SyncContext *_syncContext;
    id <SyncManagerDelegate> _delegate;
    NSString *_localSyncLabel;
    NSTimer *_heartbeatTimer;
    long long _loopCount;
    NSData *_gzipHeaderData;
    DataSetSyncConnectionHandler *_dataSetHandler;
    PhotoSyncConnectionHandler *_photoHandler;
    NSString *_abortErrDesc;
    NSString *_redirectUrl;
    _Bool isHaveRelogin;
    NSString *_username;
    NSString *_password;
    NSString *_syncAccountBookID;
    double _heartBeatStageBegin;
}

@property(nonatomic) struct dispatch_queue_s *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(nonatomic) struct dispatch_queue_s *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(retain, nonatomic) SyncContext *syncContext; // @synthesize syncContext=_syncContext;
@property(retain, nonatomic) NSString *syncAccountBookID; // @synthesize syncAccountBookID=_syncAccountBookID;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *abortErrDesc; // @synthesize abortErrDesc=_abortErrDesc;
@property(retain, nonatomic) PhotoSyncConnectionHandler *photoHandler; // @synthesize photoHandler=_photoHandler;
@property(retain, nonatomic) DataSetSyncConnectionHandler *dataSetHandler; // @synthesize dataSetHandler=_dataSetHandler;
@property long long loopCount; // @synthesize loopCount=_loopCount;
@property(retain, nonatomic) NSTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(retain, nonatomic) NSData *gzipHeaderData; // @synthesize gzipHeaderData=_gzipHeaderData;
@property(nonatomic) __weak id <SyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dispatchSyncNetwork:(CDUnknownBlockType)arg1;
- (void)dispatchSyncDbQueue:(CDUnknownBlockType)arg1;
- (void)stopHeartbeat;
- (void)notifyProgressedWithMessage:(id)arg1;
- (void)rollbackWhenOccurError;
- (void)requestPhoto;
- (void)requestAbortCauseBy:(int)arg1;
- (void)successCommitWithPresentation:(id)arg1;
- (void)requestCommit;
- (void)receivedHeartbeatResponse:(id)arg1 headerInfo:(id)arg2;
- (void)requestHeartbeat;
- (void)requestHeartBeatAfter:(double)arg1;
- (void)successUploadDatabaseWithResponse:(id)arg1;
- (void)requestUpload;
- (void)failureLoginWithError:(id)arg1;
- (void)handleLoginResponseInfo:(id)arg1;
- (void)successLoginWithPresentation:(id)arg1;
- (void)requestLogin;
- (void)syncWithUsername:(id)arg1 password:(id)arg2 syncAccuntBookID:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)syncDSOldEmptyFilePath;
- (id)syncDSOldFilePath;
- (id)syncDSNewFilePath;
- (id)SQLiteFilePath;
- (id)syncDSPath;
- (_Bool)deleteSyncDirectory;
- (_Bool)verifyDatabaseFromServer;
- (_Bool)ungzipDatabaseFrom:(id)arg1 to:(id)arg2;
- (_Bool)gzipDatabaseFrom:(id)arg1 to:(id)arg2;
- (_Bool)rollbackDatabase;
- (_Bool)replaceDatabase;
- (_Bool)archiveDatabase:(_Bool)arg1;

@end

