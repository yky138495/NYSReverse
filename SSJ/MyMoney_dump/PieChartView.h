//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PieViewDelegate.h"

@class CAShapeLayer, NSNumberFormatter, NSString, PieView, UIButton, UILabel;

@interface PieChartView : UIView <PieViewDelegate>
{
    UILabel *nameOfSectorLabel;
    UILabel *descriptionOfSectorLabel;
    UILabel *amountOfNumberLabel;
    UILabel *categoryLabel;
    PieView *pieView;
    id <PieChartDataSource> dataSource;
    id <PieChartDelegate> delegate;
    NSNumberFormatter *percentageFormatter;
    double amountOfDataValues;
    UILabel *_totalLabel;
    UIView *_pieBackground;
    UIView *_centerBackground;
    CAShapeLayer *_indicator;
    UIButton *_detailButton;
    UIView *_arrowView;
    UIView *_centerView;
    UIButton *_bottomDetailButton;
}

@property(retain, nonatomic) UIButton *bottomDetailButton; // @synthesize bottomDetailButton=_bottomDetailButton;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) CAShapeLayer *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIView *centerBackground; // @synthesize centerBackground=_centerBackground;
@property(retain, nonatomic) UIView *pieBackground; // @synthesize pieBackground=_pieBackground;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) NSNumberFormatter *percentageFormatter; // @synthesize percentageFormatter;
@property id <PieChartDelegate> delegate; // @synthesize delegate;
@property id <PieChartDataSource> dataSource; // @synthesize dataSource;
- (void)animateDescription;
- (void)animateCenterBackgound;
- (void)setBeforeAnimate;
- (void)setUpDescriptionAfterAnimate;
- (void)setUpDescriptionBeforeAnimate;
- (void)setUpCenterBackgroundAfterAnimate;
- (void)setUpCenterBackgroundBeforeAnimate;
- (id)colorAtSector:(long long)arg1;
- (void)reloadData;
- (void)animationDidStop;
- (id)calPercentage:(long long)arg1;
- (void)pieView:(id)arg1 sectorSelectionChangedAt:(long long)arg2;
- (void)detailAction;
- (void)backAction;
- (void)dealloc;
- (struct CGSize)barSize;
- (struct CGPoint)barPosition;
- (struct CGPoint)circleCenter;
- (void)initCenterLabels;
- (void)initBottomDetailButton;
- (void)initDetailButton;
- (id)descriptionFont;
- (void)initDescriptionLabel;
- (void)initNameLabel;
- (void)initPie;
- (void)initCenterBackground;
- (void)initPieBackground;
- (void)initIndicator;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

