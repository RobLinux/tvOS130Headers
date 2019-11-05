/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFPowerStateControlItem.h>

@interface HFValveActiveStateControlItem : HFPowerStateControlItem
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4 ;
-(id)writeValue:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(id)_iconDescriptorForServiceSubtype:(id)arg1 inUse:(BOOL)arg2 active:(BOOL)arg3 hasFaucetAsParentService:(BOOL)arg4 ;
-(id)_faucetValveSubtypeToIconIdentifierMap;
@end

