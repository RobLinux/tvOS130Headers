/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXAssertion : NSObject {

	NSString* _assertionType;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * assertionType;              //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithType:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(void)setAssertionType:(NSString *)arg1 ;
-(void)_notifyServerAssertionWasAcquired;
-(void)_notifyServerAssertionWasRelinquished;
-(NSString *)assertionType;
-(BOOL)_hasValidAssertionType;
@end

