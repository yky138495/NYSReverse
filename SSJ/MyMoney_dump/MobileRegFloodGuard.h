//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MGCountdownDictionary;

@interface MobileRegFloodGuard : NSObject
{
    MGCountdownDictionary *_registration;
    MGCountdownDictionary *_findPassword;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MGCountdownDictionary *findPassword; // @synthesize findPassword=_findPassword;
@property(retain, nonatomic) MGCountdownDictionary *registration; // @synthesize registration=_registration;
- (void).cxx_destruct;
- (id)init;

@end
