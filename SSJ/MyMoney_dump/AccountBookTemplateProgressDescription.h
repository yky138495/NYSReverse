//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface AccountBookTemplateProgressDescription : NSObject
{
    NSDictionary *_configuration;
    NSMutableDictionary *_progress;
}

@property(retain, nonatomic) NSMutableDictionary *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)progressInfo;
- (void)updateTotalProgress;
- (void)updateProgress:(id)arg1 forStage:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
