/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DMDActivationPredicateObserverDelegate;
@class NSString;

@interface DMDActivationPredicateObserver : NSObject {

	BOOL _lastPredicateEvaluationValue;
	id<DMDActivationPredicateObserverDelegate> _delegate;
	NSString* _predicateType;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic,__weak) id<DMDActivationPredicateObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL lastPredicateEvaluationValue;                                       //@synthesize lastPredicateEvaluationValue=_lastPredicateEvaluationValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateType;                                         //@synthesize predicateType=_predicateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(void)invalidate;
-(id<DMDActivationPredicateObserverDelegate>)delegate;
-(void)setDelegate:(id<DMDActivationPredicateObserverDelegate>)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)metadata;
-(NSString *)predicateType;
-(id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 predicate:(id)arg3 ;
-(id)calendarForIdentifier:(id)arg1 ;
-(void)setLastPredicateEvaluationValue:(BOOL)arg1 ;
-(BOOL)lastPredicateEvaluationValue;
-(id)evaluatePredicateWithError:(id*)arg1 ;
-(void)updateObserverRegistration;
-(void)reportActivationPredicateObserverDidTrigger;
@end

