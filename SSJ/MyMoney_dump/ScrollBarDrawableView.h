//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FlatTemplateListViewControllerDelegate.h"
#import "ScrollBarDrawableViewControllerDelegate.h"

@class FlatTemplateListViewController, NSArray, NSString, ScrollBarDrawableViewController;

@interface ScrollBarDrawableView : UIView <ScrollBarDrawableViewControllerDelegate, FlatTemplateListViewControllerDelegate>
{
    NSArray *_selectedStrings;
    id <ScrollBarDrawableViewDelegate> _delegate;
    NSString *_currentTitle;
    ScrollBarDrawableViewController *_scrollBarDrawableViewController;
    FlatTemplateListViewController *_flatTemplateListViewController;
}

@property(retain, nonatomic) FlatTemplateListViewController *flatTemplateListViewController; // @synthesize flatTemplateListViewController=_flatTemplateListViewController;
@property(retain, nonatomic) ScrollBarDrawableViewController *scrollBarDrawableViewController; // @synthesize scrollBarDrawableViewController=_scrollBarDrawableViewController;
@property(retain, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
@property(nonatomic) id <ScrollBarDrawableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *selectedStrings; // @synthesize selectedStrings=_selectedStrings;
- (void).cxx_destruct;
- (void)flatTemplateListViewControllerdidBeginEdit:(id)arg1;
- (void)flatTemplateListViewControllerdidTapAddButton:(id)arg1;
- (void)flatTemplateListViewController:(id)arg1 didSelectTemplate:(long long)arg2 isEditing:(_Bool)arg3;
- (void)scrollBarDrawableViewController:(id)arg1 didSelectStringAtIndex:(long long)arg2;
- (void)scrollBarDrawableViewController:(id)arg1 dataSourceChangedWithSelectedStrings:(id)arg2;
- (void)reloadTemplateData;
- (void)reloadData;
- (void)dismiss;
- (void)show;
- (void)initUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

