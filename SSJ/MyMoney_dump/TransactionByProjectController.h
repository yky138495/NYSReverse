//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VoListViewController.h"

#import "EditingProjectControllerDelegate.h"
#import "FloatBackgroundWallViewDelegate.h"
#import "PopupMenuViewDelegate.h"

@class FloatBackgroundHeaderView, FloatBackgroundWallView, NSString, PopupMenuView, ProjectExpenseVo, UIButton, UIView;

@interface TransactionByProjectController : VoListViewController <PopupMenuViewDelegate, FloatBackgroundWallViewDelegate, EditingProjectControllerDelegate>
{
    UIView *_maskView;
    _Bool _shouldPopViewControllerAfterDidAppear;
    UIButton *_editBarButton;
    UIView *_btnView;
    ProjectExpenseVo *_projectExpenseVo;
    PopupMenuView *_popupMenuView;
    FloatBackgroundWallView *_wallView;
    FloatBackgroundHeaderView *_tableHeaderView;
}

@property(retain, nonatomic) FloatBackgroundHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) FloatBackgroundWallView *wallView; // @synthesize wallView=_wallView;
@property(retain, nonatomic) PopupMenuView *popupMenuView; // @synthesize popupMenuView=_popupMenuView;
@property(retain, nonatomic) ProjectExpenseVo *projectExpenseVo; // @synthesize projectExpenseVo=_projectExpenseVo;
@property(nonatomic) _Bool shouldPopViewControllerAfterDidAppear; // @synthesize shouldPopViewControllerAfterDidAppear=_shouldPopViewControllerAfterDidAppear;
@property(retain, nonatomic) UIView *btnView; // @synthesize btnView=_btnView;
@property(retain, nonatomic) UIButton *editBarButton; // @synthesize editBarButton=_editBarButton;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)editingProjectControllerDidSaveProjectVo:(id)arg1;
- (void)needSetNavigationBarBackground:(id)arg1;
- (void)rightScrollViewDidScroll:(id)arg1;
- (id)transactionsWithTimeSpan:(id)arg1;
- (void)refreshTableHeader;
- (id)service:(id)arg1 calculateExpenseAmountBetween:(double)arg2 and:(double)arg3;
- (id)service:(id)arg1 calculateIncomeAmountBetween:(double)arg2 and:(double)arg3;
- (void)reloadVo;
- (_Bool)existVoByService:(id)arg1 between:(double)arg2 and:(double)arg3;
- (id)latestTradeTime;
- (id)oldestTradeTime;
- (void)popupMenuView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)handleNotification:(id)arg1;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (void)setNormalNavigationRightItem;
- (void)setEditingNavigationRightItem;
- (void)setNormalNavigationLeftItem;
- (void)setEditingNavigationLeftItem;
- (void)editRecordAction;
- (void)hideSlideMenuIfNeeded;
- (void)settingAction;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)addAction:(id)arg1;
- (void)loadView;
- (id)initWithProjectExpenseVo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

