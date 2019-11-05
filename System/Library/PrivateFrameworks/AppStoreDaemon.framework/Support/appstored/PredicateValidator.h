/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/NSPredicateVisitor.h>

@class NSArray, NSMutableArray;

@interface PredicateValidator : NSObject <NSPredicateVisitor> {

	BOOL _acceptableExpressionTypes[32];
	NSArray* _acceptableKeyPaths;
	NSMutableArray* _errors;
	BOOL _valid;

}
-(id)init;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)setAcceptableExpressionTypes:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setAcceptableKeyPaths:(id)arg1 ;
-(BOOL)validatePredicate:(id)arg1 withError:(id*)arg2 ;
@end

