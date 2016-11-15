//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BindPasswordStore : NSObject
{
    NSString *_mobileOrEmail;
    NSString *_captcha;
    NSString *_passwordNew;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *passwordNew; // @synthesize passwordNew=_passwordNew;
@property(retain, nonatomic) NSString *captcha; // @synthesize captcha=_captcha;
@property(retain, nonatomic) NSString *mobileOrEmail; // @synthesize mobileOrEmail=_mobileOrEmail;
- (void).cxx_destruct;
- (void)bindPasswordWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithMobileOrEmail:(id)arg1 captcha:(id)arg2 newPassword:(id)arg3 type:(unsigned long long)arg4;

@end

