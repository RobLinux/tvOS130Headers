/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDOMConditional.h>

@interface IKDOMMutationRule : IKDOMConditional {

	BOOL _mutable;

}

@property (getter=isMutable,nonatomic,readonly) BOOL mutable;              //@synthesize mutable=_mutable - In the implementation block
+(id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)mutationRuleWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isMutable;
-(id)initWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(void)applyOnDOMElement:(id)arg1 ;
@end

