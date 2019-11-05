/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSString, NSSet;

@interface WFDictionaryParameter : WFParameter {

	NSString* _localizedItemTypeName;
	NSString* _localizedNewItemTypeName;
	NSSet* _allowedValueTypes;

}

@property (nonatomic,readonly) NSString * localizedItemTypeName;                 //@synthesize localizedItemTypeName=_localizedItemTypeName - In the implementation block
@property (nonatomic,readonly) NSString * localizedNewItemTypeName;              //@synthesize localizedNewItemTypeName=_localizedNewItemTypeName - In the implementation block
@property (nonatomic,readonly) NSSet * allowedValueTypes;                        //@synthesize allowedValueTypes=_allowedValueTypes - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(NSString *)localizedItemTypeName;
-(NSString *)localizedNewItemTypeName;
-(NSSet *)allowedValueTypes;
@end

