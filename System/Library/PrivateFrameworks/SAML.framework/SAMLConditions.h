/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSNumber;

@interface SAMLConditions : SAMLBaseElement {

	NSArray* _conditions;

}

@property (nonatomic,readonly) NSDate * notBefore; 
@property (nonatomic,readonly) NSDate * notOnOrAfter; 
@property (nonatomic,readonly) NSArray * conditions;                                  //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) NSArray * audienceRestrictions; 
@property (nonatomic,readonly) BOOL oneTimeUse; 
@property (nonatomic,readonly) NSArray * proxyRestrictions; 
@property (nonatomic,readonly) NSNumber * proxyRestrictionAudienceCount; 
+(id)createElement:(id*)arg1 ;
-(NSArray *)conditions;
-(NSDate *)notBefore;
-(NSDate *)notOnOrAfter;
-(NSArray *)audienceRestrictions;
-(BOOL)oneTimeUse;
-(NSArray *)proxyRestrictions;
-(NSNumber *)proxyRestrictionAudienceCount;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
@end

