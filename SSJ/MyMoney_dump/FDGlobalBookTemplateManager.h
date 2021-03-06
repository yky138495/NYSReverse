//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FDGlobalBookTemplateMeta, NSArray, NSDictionary;

@interface FDGlobalBookTemplateManager : NSObject
{
    NSDictionary *_accountTemplatesDictionary;
    NSArray *_accountTemplatesArray;
    NSArray *_accountTemplatesIDArray;
    NSDictionary *_defaultTemplates;
    FDGlobalBookTemplateMeta *_metadata;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FDGlobalBookTemplateMeta *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSDictionary *defaultTemplates; // @synthesize defaultTemplates=_defaultTemplates;
@property(retain, nonatomic) NSArray *accountTemplatesIDArray; // @synthesize accountTemplatesIDArray=_accountTemplatesIDArray;
@property(retain, nonatomic) NSArray *accountTemplatesArray; // @synthesize accountTemplatesArray=_accountTemplatesArray;
@property(retain, nonatomic) NSDictionary *accountTemplatesDictionary; // @synthesize accountTemplatesDictionary=_accountTemplatesDictionary;
- (void).cxx_destruct;
- (id)defaultTemplateFromBookType:(unsigned long long)arg1;
- (void)loadBundleTemplateJSON;

@end

