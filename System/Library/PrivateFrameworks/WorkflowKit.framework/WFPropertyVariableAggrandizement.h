/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic,readonly) NSString * propertyName; 
@property (nonatomic,readonly) id<WFPropertyListObject> propertyUserInfo; 
@property (nonatomic,readonly) BOOL negativeProperty; 
@property (nonatomic,readonly) NSString * negativePropertyName; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 ;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 negativeProperty:(BOOL)arg3 negativePropertyName:(id)arg4 ;
-(id<WFPropertyListObject>)propertyUserInfo;
-(BOOL)negativeProperty;
-(NSString *)negativePropertyName;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

