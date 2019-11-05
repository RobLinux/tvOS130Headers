/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>
#import <WorkflowKit/WFCodableAttributeBackedParameter.h>

@class INCodableAttribute, NSString;

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFCodableAttributeBackedParameter> {

	INCodableAttribute* _codableAttribute;

}

@property (nonatomic,retain) INCodableAttribute * codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(INCodableAttribute *)codableAttribute;
-(Class)singleStateClass;
-(void)setCodableAttribute:(INCodableAttribute *)arg1 ;
@end

