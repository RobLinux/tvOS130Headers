/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>

@class NSNumber, NSISLinearExpression, NSISEngine, NSMutableArray;

@interface _NSISLinearExpressionObservable : NSObservationSource {

	NSNumber* _lastValue;
	NSISLinearExpression* _expression;
	NSISEngine* _associatedEngine;
	NSMutableArray* _variableObservations;
	id _changeTransactionObservation;
	BOOL _valueIsDirtied;

}
+(id)observableForExpression:(id)arg1 inEngine:(id)arg2 ;
-(void)dealloc;
-(id)addObserver:(id)arg1 ;
-(id)initWithExpression:(id)arg1 inEngine:(id)arg2 ;
-(void)receiveObservedValue:(id)arg1 fromVariable:(id)arg2 ;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(void)emitValueIfNeeded;
-(void)_lazilyObserveVariablesIfNeeded;
-(BOOL)_overrideUseFastBlockObservers;
@end

