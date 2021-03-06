//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, UIColor;

@interface FDAnimatePageControl : UIControl
{
    _Bool _hidesForSinglePage;
    long long _numberOfPages;
    long long _currentPage;
    long long _spacingBetweenDots;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    NSMutableArray *_dots;
    struct CGSize _dotSize;
}

@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) long long spacingBetweenDots; // @synthesize spacingBetweenDots=_spacingBetweenDots;
@property(nonatomic) struct CGSize dotSize; // @synthesize dotSize=_dotSize;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)hideForSinglePage;
- (void)resetDotViews;
- (id)generateDotView;
- (void)changeActivity:(_Bool)arg1 atIndex:(long long)arg2;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)updateDotFrame:(id)arg1 atIndex:(long long)arg2;
- (void)updateDots;
- (void)initialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

