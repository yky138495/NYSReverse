//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface FDWebViewJSCall : NSObject
{
    _Bool _removeOnComplete;
    CDUnknownBlockType _callback;
    NSDate *_addDate;
    double _timeout;
}

@property(nonatomic) _Bool removeOnComplete; // @synthesize removeOnComplete=_removeOnComplete;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDate *addDate; // @synthesize addDate=_addDate;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;

@end
