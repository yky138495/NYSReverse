//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KDStockChartView.h"

@interface KDStockQuoteChartView : KDStockChartView
{
}

- (void)setQuoteChartData:(id)arg1;
- (double)getMaxFontSizeFitToWidth:(double)arg1 text:(id)arg2 fontName:(id)arg3 fontSize:(double)arg4;
- (void)drawBottomTitle:(struct CGContext *)arg1;
- (void)drawRectByQuartz2D;
- (void)drawRectByCALayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

