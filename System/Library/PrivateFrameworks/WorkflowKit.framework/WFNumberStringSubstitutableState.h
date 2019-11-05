/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFStringSubstitutableState.h>

@class NSNumber, NSDecimalNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState {

	NSNumber* _legacyNumber;

}

@property (nonatomic,retain) NSNumber * legacyNumber;                        //@synthesize legacyNumber=_legacyNumber - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * decimalNumber; 
+(Class)processingValueClass;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)serializedRepresentation;
-(id)initWithValue:(id)arg1 ;
-(void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(/*^block*/id)arg3 valueHandler:(/*^block*/id)arg4 ;
-(NSDecimalNumber *)decimalNumber;
-(NSNumber *)legacyNumber;
-(void)setLegacyNumber:(NSNumber *)arg1 ;
@end

