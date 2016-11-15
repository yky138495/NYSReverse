//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AccountGroupSelctionSectionHeaderView : UIView
{
    _Bool _open;
    UILabel *_nameLabel;
    UILabel *_memoLabel;
    UIImageView *_iconImageView;
    UIView *_cellSeperatorLine;
    id <AccountGroupSelctionSectionHeaderViewDelegate> _delegate;
    long long _section;
}

@property(getter=isOpen) _Bool open; // @synthesize open=_open;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <AccountGroupSelctionSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *cellSeperatorLine; // @synthesize cellSeperatorLine=_cellSeperatorLine;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)toggleOpenWithUserAction:(_Bool)arg1;
- (void)toggleOpen:(id)arg1;
- (void)setIsLastRowInSection:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
