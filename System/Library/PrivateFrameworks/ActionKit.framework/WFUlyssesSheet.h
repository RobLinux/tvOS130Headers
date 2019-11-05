/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <ActionKit/MTLJSONSerializing.h>
#import <ActionKit/WFNaming.h>
#import <ActionKit/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface WFUlyssesSheet : MTLModel <MTLJSONSerializing, WFNaming, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	NSString* _text;
	NSArray* _keywords;
	NSArray* _notes;

}

@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) NSArray * notes;                                  //@synthesize notes=_notes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
-(NSString *)identifier;
-(NSString *)title;
-(NSArray *)keywords;
-(NSString *)text;
-(NSArray *)notes;
-(NSString *)wfName;
@end

