//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FDCollapsableTableViewSectionSource : NSObject
{
    _Bool _isCollapsed;
    id _sectionInfo;
    NSArray *_rowsInfo;
    long long _selectionState;
    NSString *_sectionInfoName;
    NSString *_sectionInfoDesc;
}

@property(copy, nonatomic) NSString *sectionInfoDesc; // @synthesize sectionInfoDesc=_sectionInfoDesc;
@property(copy, nonatomic) NSString *sectionInfoName; // @synthesize sectionInfoName=_sectionInfoName;
@property(nonatomic) long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic) _Bool isCollapsed; // @synthesize isCollapsed=_isCollapsed;
@property(retain, nonatomic) NSArray *rowsInfo; // @synthesize rowsInfo=_rowsInfo;
@property(retain, nonatomic) id sectionInfo; // @synthesize sectionInfo=_sectionInfo;
- (void).cxx_destruct;
- (long long)selectionStateWithSelectedCount:(long long)arg1;
- (void)updateSectionSelectionState;
- (id)sectionInfoHalfSelectionDescription;
- (void)setRowModel:(id)arg1 selected:(_Bool)arg2;
- (void)setSectionModelFullySelected:(_Bool)arg1;
- (id)initWithSectionInfo:(id)arg1 sectionInfoName:(id)arg2 rowsInfo:(id)arg3;
- (id)initWithRowsInfo:(id)arg1;

@end

