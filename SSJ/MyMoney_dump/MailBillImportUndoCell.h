//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel;

@interface MailBillImportUndoCell : UITableViewCell
{
    _Bool _isMycardImport;
    UILabel *_mailboxImportResultLabel;
    UILabel *_mailboxImportDateLabel;
    UILabel *_mailboxNameLabel;
    UILabel *_undoSucessLabel;
    UIButton *_undoButton;
    id <MailBillImportUndoActionDelegate> _undoDelegate;
}

@property(nonatomic) __weak id <MailBillImportUndoActionDelegate> undoDelegate; // @synthesize undoDelegate=_undoDelegate;
@property _Bool isMycardImport; // @synthesize isMycardImport=_isMycardImport;
@property(retain, nonatomic) UIButton *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) UILabel *undoSucessLabel; // @synthesize undoSucessLabel=_undoSucessLabel;
@property(retain, nonatomic) UILabel *mailboxNameLabel; // @synthesize mailboxNameLabel=_mailboxNameLabel;
@property(retain, nonatomic) UILabel *mailboxImportDateLabel; // @synthesize mailboxImportDateLabel=_mailboxImportDateLabel;
@property(retain, nonatomic) UILabel *mailboxImportResultLabel; // @synthesize mailboxImportResultLabel=_mailboxImportResultLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)undoAction:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
