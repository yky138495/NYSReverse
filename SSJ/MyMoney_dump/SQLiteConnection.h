//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SQLiteConnection : NSObject
{
    struct sqlite3 *_database;
}

@property(readonly) struct sqlite3 *database; // @synthesize database=_database;
- (_Bool)isAutoCommit;
- (void)rollback;
- (void)endTransaction;
- (void)beginTransaction;
- (id)initWithDatabase:(struct sqlite3 *)arg1;

@end

