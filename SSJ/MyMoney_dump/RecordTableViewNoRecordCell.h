//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NoRecordContentView, NoRecordPortraitContentView, UIImageView;

@interface RecordTableViewNoRecordCell : UITableViewCell
{
    _Bool _isInLastSection;
    UIImageView *_iconView;
    NoRecordContentView *_contentRecordView;
    NoRecordPortraitContentView *_noRecordPortraitContentView;
}

@property(retain, nonatomic) NoRecordPortraitContentView *noRecordPortraitContentView; // @synthesize noRecordPortraitContentView=_noRecordPortraitContentView;
@property(retain, nonatomic) NoRecordContentView *contentRecordView; // @synthesize contentRecordView=_contentRecordView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool isInLastSection; // @synthesize isInLastSection=_isInLastSection;
- (void).cxx_destruct;
- (id)initWithPortraitStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

