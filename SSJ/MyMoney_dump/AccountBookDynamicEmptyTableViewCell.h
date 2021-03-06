//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel, UIView;

@interface AccountBookDynamicEmptyTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIButton *_addButton;
    UIView *_separatorView;
    CDUnknownBlockType _clickButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickButtonBlock; // @synthesize clickButtonBlock=_clickButtonBlock;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UIButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupAddButton;
- (void)setupTitleLabel;
- (void)setAddButtonClickBlock:(CDUnknownBlockType)arg1;
- (void)addButtonClick:(id)arg1;
- (void)updateConstraints;
- (void)awakeFromNib;

@end

