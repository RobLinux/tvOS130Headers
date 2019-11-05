/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <ActionKit/NSSecureCoding.h>
#import <ActionKit/MTLJSONSerializing.h>
#import <ActionKit/WFNaming.h>

@class NSString, NSDictionary;

@interface WFTrelloObject : MTLModel <NSSecureCoding, MTLJSONSerializing, WFNaming> {

	NSString* _name;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)wfName;
@end

