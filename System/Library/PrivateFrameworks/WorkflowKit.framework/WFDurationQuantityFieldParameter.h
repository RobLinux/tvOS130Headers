/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>

@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (assign,nonatomic) unsigned long long possibleCalendarUnits; 
+(unsigned long long)calendarUnitFromUnitString:(id)arg1 ;
+(BOOL)unitStringIsDurationUnit:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)possibleCalendarUnits;
-(void)setPossibleCalendarUnits:(unsigned long long)arg1 ;
@end

