//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FDCollapsableTableViewRowSource : NSObject
{
    id _rowInfo;
    NSString *_rowInfoName;
    NSString *_rowInfoDesc;
    long long _selectionState;
}

@property(nonatomic) long long selectionState; // @synthesize selectionState=_selectionState;
@property(copy, nonatomic) NSString *rowInfoDesc; // @synthesize rowInfoDesc=_rowInfoDesc;
@property(copy, nonatomic) NSString *rowInfoName; // @synthesize rowInfoName=_rowInfoName;
@property(retain, nonatomic) id rowInfo; // @synthesize rowInfo=_rowInfo;
- (void).cxx_destruct;
- (id)initWithRowInfo:(id)arg1 rowInfoName:(id)arg2 rowInfoDesc:(id)arg3 selectionState:(long long)arg4;
- (id)initWithRowInfo:(id)arg1 rowInfoName:(id)arg2 selectionState:(long long)arg3;

@end
