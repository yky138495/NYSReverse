//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FDWebViewAction : NSObject
{
    NSDictionary *_paramDictionary;
    CDUnknownBlockType _onCall;
    NSString *_name;
    NSString *_extraString;
    NSString *_callbackName;
}

+ (id)escapeJSString:(id)arg1;
+ (id)actionWithName:(id)arg1 andCallback:(CDUnknownBlockType)arg2;
+ (id)failureDictionaryWithErrorCode:(long long)arg1 andMessage:(id)arg2;
+ (id)successDictionaryWithResult:(id)arg1;
@property(retain, nonatomic) NSString *callbackName; // @synthesize callbackName=_callbackName;
@property(retain, nonatomic) NSString *extraString; // @synthesize extraString=_extraString;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType onCall; // @synthesize onCall=_onCall;
@property(readonly, nonatomic) NSDictionary *paramDictionary; // @synthesize paramDictionary=_paramDictionary;
- (void).cxx_destruct;
- (id)javascriptFailureWithErrorCode:(long long)arg1 andMessage:(id)arg2;
- (id)javascriptSuccessWithDictionary:(id)arg1;
- (void)notifyCallback;
- (void)setParamDictionary:(id)arg1;
- (_Bool)filteWithURL:(id)arg1;
- (id)initWithActionName:(id)arg1;

@end

