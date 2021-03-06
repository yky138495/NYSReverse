//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FastContentView.h"

@class NSString, RecordTableViewCell, UIColor, UIImage, UIView;

@interface RecordContentView : FastContentView
{
    NSString *_dayText;
    NSString *_primaryText;
    NSString *_secondaryText;
    NSString *_currencyText;
    NSString *_exchangeText;
    NSString *_transferText;
    UIImage *_iconImage;
    UIImage *_arrowImage;
    UIImage *_photoIndicatorImage;
    _Bool highlighted;
    _Bool editing;
    long long accessoryType;
    UIColor *_currencyColor;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_leftSideBorderColor;
    UIColor *_topBorderColor;
    UIImage *_backgroundImage;
    UIImage *_selectedBackgroundImage;
    double _scale;
    struct CGGradient *_selectBackgroundGradient;
    UIImage *_accessoryDisclosureIndicatorImage;
    UIImage *_checkImage;
    UIImage *_uncheckImage;
    UIImage *_rectangleImage;
    _Bool prepareDelete;
    _Bool enableBatchDelete;
    double _leftSideBorderTopOffset;
    double _iconImageLeftOffset;
    RecordTableViewCell *_cell;
    UIView *_redPoint;
    double _primaryTextLineHeight;
    struct CGPoint _primaryTextPoint;
}

@property(nonatomic) double primaryTextLineHeight; // @synthesize primaryTextLineHeight=_primaryTextLineHeight;
@property(nonatomic) struct CGPoint primaryTextPoint; // @synthesize primaryTextPoint=_primaryTextPoint;
@property(retain, nonatomic) UIView *redPoint; // @synthesize redPoint=_redPoint;
@property(nonatomic) __weak RecordTableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) double iconImageLeftOffset; // @synthesize iconImageLeftOffset=_iconImageLeftOffset;
@property(nonatomic) double leftSideBorderTopOffset; // @synthesize leftSideBorderTopOffset=_leftSideBorderTopOffset;
@property(retain, nonatomic) UIImage *accessoryDisclosureIndicatorImage; // @synthesize accessoryDisclosureIndicatorImage=_accessoryDisclosureIndicatorImage;
@property(retain, nonatomic) UIImage *selectedBackgroundImage; // @synthesize selectedBackgroundImage=_selectedBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType;
@property(nonatomic, getter=isEnableBatchDelete) _Bool enableBatchDelete; // @synthesize enableBatchDelete;
@property(nonatomic, getter=isPrepareDelete) _Bool prepareDelete; // @synthesize prepareDelete;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted;
@property(retain, nonatomic) UIColor *currencyColor; // @synthesize currencyColor=_currencyColor;
@property(retain, nonatomic) UIImage *photoIndicatorImage; // @synthesize photoIndicatorImage=_photoIndicatorImage;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *transferText; // @synthesize transferText=_transferText;
@property(retain, nonatomic) NSString *exchangeText; // @synthesize exchangeText=_exchangeText;
@property(retain, nonatomic) NSString *currencyText; // @synthesize currencyText=_currencyText;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(retain, nonatomic) NSString *dayText; // @synthesize dayText=_dayText;
- (void).cxx_destruct;
- (void)drawPrimaryTextAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 actualFontSize:(double)arg4;
- (_Bool)isPrimaryTextWidth:(double)arg1 andTransferTextWidth:(double)arg2 exceedMaxLabelWidth:(double)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)removeAllValues;
- (void)dealloc;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

