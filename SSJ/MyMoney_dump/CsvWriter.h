//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle;

@interface CsvWriter : NSObject
{
    NSFileHandle *filehandle;
}

- (void).cxx_destruct;
- (void)writeRows:(id)arg1;
- (void)writeRow:(id)arg1;
- (id)escapeString:(id)arg1;
- (id)initWithFileHandle:(id)arg1;

@end

