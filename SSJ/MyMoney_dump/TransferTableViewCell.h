//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExpenseTableViewCell.h"

@class UILabel;

@interface TransferTableViewCell : ExpenseTableViewCell
{
    UILabel *_transferFromLabel;
    UILabel *_transferToLabel;
}

@property(retain, nonatomic) UILabel *transferToLabel; // @synthesize transferToLabel=_transferToLabel;
@property(retain, nonatomic) UILabel *transferFromLabel; // @synthesize transferFromLabel=_transferFromLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

