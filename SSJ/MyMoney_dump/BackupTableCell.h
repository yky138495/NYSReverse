//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface BackupTableCell : UITableViewCell
{
    struct CGRect originalDisplayNameFrame;
    UILabel *sizeLabel;
    UILabel *deviceName;
    UILabel *createdDate;
    UILabel *displayName;
}

@property(retain, nonatomic) UILabel *displayName; // @synthesize displayName;
@property(retain, nonatomic) UILabel *createdDate; // @synthesize createdDate;
@property(retain, nonatomic) UILabel *deviceName; // @synthesize deviceName;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

