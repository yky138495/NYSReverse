//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton;

@interface FinanceChannelCell : UICollectionViewCell
{
    UIButton *_contentButton;
    UIButton *_deleteButton;
    CDUnknownBlockType _deleteButtonTappedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType deleteButtonTappedBlock; // @synthesize deleteButtonTappedBlock=_deleteButtonTappedBlock;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak UIButton *contentButton; // @synthesize contentButton=_contentButton;
- (void).cxx_destruct;
- (void)closeButtonTapped:(id)arg1;
- (void)configSelectedStyle:(_Bool)arg1;
- (void)awakeFromNib;

@end
