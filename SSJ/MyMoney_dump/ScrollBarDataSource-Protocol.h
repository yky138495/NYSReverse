//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ScrollBar;

@protocol ScrollBarDataSource <NSObject>
- (NSString *)scrollBar:(ScrollBar *)arg1 titleForCellAtIndex:(long long)arg2;
- (long long)numberOfCellInScrollBar:(ScrollBar *)arg1;
@end
