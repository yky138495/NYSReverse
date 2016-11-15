//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FDDatabaseCloneManager : NSObject
{
    struct sqlite3 *_targetDatabase;
    id <FDDatabaseCloneManagerDelegate> _delegate;
    NSString *_targetDatabasePath;
    NSString *_sourceDatabasePath;
    NSDictionary *_tableColumnNamesMap;
}

@property(retain, nonatomic) NSDictionary *tableColumnNamesMap; // @synthesize tableColumnNamesMap=_tableColumnNamesMap;
@property(retain, nonatomic) NSString *sourceDatabasePath; // @synthesize sourceDatabasePath=_sourceDatabasePath;
@property(retain, nonatomic) NSString *targetDatabasePath; // @synthesize targetDatabasePath=_targetDatabasePath;
@property(nonatomic) __weak id <FDDatabaseCloneManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)clearTable:(id)arg1 withError:(id *)arg2;
- (void)notifyFailureWithErrorMessage:(id)arg1;
- (void)notifySuccessful;
- (_Bool)rollbackTransaction;
- (_Bool)commitTransaction;
- (_Bool)beginTransaction;
- (_Bool)importTableWithName:(id)arg1 withColumnNames:(id)arg2 error:(id *)arg3;
- (_Bool)importTableWithName:(id)arg1 withMapDictionary:(id)arg2 error:(id *)arg3;
- (_Bool)updateSourceDatabase;
- (void)initialConfig;
- (void)start;
- (void)startClone;
- (_Bool)prepareWithSourceDatabasePath:(id)arg1 andTargetDatabasePath:(id)arg2 errorMessage:(id *)arg3 isVersionSupported:(_Bool *)arg4;
- (void)dealloc;
- (id)init;

@end

