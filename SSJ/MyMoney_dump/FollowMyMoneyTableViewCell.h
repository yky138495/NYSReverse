//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface FollowMyMoneyTableViewCell : UITableViewCell
{
    UIImageView *cellImageView;
    UIView *cellSeparatorLineView;
    UILabel *cellTitleLabel;
    long long cellStyle;
}

- (void).cxx_destruct;
- (void)showBottomLine:(_Bool)arg1;
- (void)setKDAccessoryView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setCellData:(id)arg1 cellTitle:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

