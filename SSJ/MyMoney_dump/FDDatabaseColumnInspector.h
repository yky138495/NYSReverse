//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FDDatabaseColumnInspector : NSObject
{
}

+ (id)columnNamesForDatabase:(struct sqlite3 *)arg1 tableName:(id)arg2;
+ (_Bool)inspectDatabase:(struct sqlite3 *)arg1 tableName:(id)arg2 forColumnNames:(id)arg3 andOutMissingColumnNames:(id *)arg4 andOutExtraColumnNames:(id *)arg5;

@end
